%{
    #include "libtds.h"
    #include "header.h"
    #include <string.h>
    int main_definida = 0;  // Variable para controlar la definición de main
    int niv = 0;
%}

%union {
    int cent;   // Para constantes enteras
    char *ident; // Para identificadores
}

%token MAS_ MENOS_ POR_ DIV_ ASSIG_ MAYOR_ MENOR_ MAYOR_IGUAL_ MENOR_IGUAL_ IGUAL_ DISTINTO_ NOT_
%token PARA_ PARC_ LLAVEA_ LLAVEC_ CORCHETEA_ CORCHETEC_
%token BOOL_ INT_ READ_ PRINT_ RETURN_ TRUE_ FALSE_ 
%token AND_ OR_ FOR_ IF_ ELSE_ 
%token PCOMA_ COMA_ 

/* Definir los tokens con valores semánticos */
%token <cent> CTE_
%token <ident> ID_

 
%type <cent> tipoSimple constante 
%type <cent> expre expreIgual expreRel expreAd expreMul expreUna expreSufi expreOP expreLogic
%type <cent> opLogic opIgual opRel opAd opMul opUna

%%

programa:   
        {
            cargaContexto(niv);
        }
        listDecla
        {
            if(!main_definida){
                yyerror("El programa no tiene una función main ");
            }
        }
        ;

listDecla:  decla
        |   listDecla decla
        ;

decla:      declaVar
        |   declaFun
        ;

declaVar:   tipoSimp ID_ PCOMA_
            {
                if (!insTdS( $2, VARIABLE, $1, niv, dvar, -1)) 
                 { 
                     yyerror("El id de la variable ya ha sido utilizado"); 
                } else {
                    dvar += TALLA_TIPO_SIMPLE;
                }
            }
        |   tipoSimp ID_ ASSIG_ const PCOMA_ 
                {
                if (!insTdS( $2, VARIABLE, $1, niv, dvar, -1)){
                    yyerror("El id de la variable ya ha sido utilizado"); 
                } else if (! (($1 == T_ENTERO && $4 == T_ENTERO) || ($1 == T_LOGICO && $4 == T_LOGICO)) ) {
                    yyerror("Error de tipos en la instrucción de asignación");
                }else {
                    dvar += TALLA_TIPO_SIMPLE;
                }
            }
        |   tipoSimp ID_ CORCHETEA_ CTE_ CORCHETEC_ PCOMA_ {
                int numelem = $4;
                if ($4 <= 0) {
                    yyerror("Talla inapropiada del array");
                    numelem = 0;
                } else if (($4 == T_ENTERO)) {
                    yyerror("El indice del array debe ser un entero");
                }
                int refe = insTdA($1, numelem);
                if (!insTdS( $2, VARIABLE, T_ARRAY, niv, dvar, refe)) {
                    yyerror("El id del array ya ha sido utilizado");
                } else {
                    dvar += numelem * TALLA_TIPO_SIMPLE;
                }
            }
        ;

const:      CTE_    { $$ = T_ENTERO; }
        |   TRUE_   { $$ = T_LOGICO; }
        |   FALSE_  { $$ = T_LOGICO; }
        ;

tipoSimp:   INT_ { $$ = T_ENTERO; }
        |   BOOL_ { $$ = T_LOGICO; }
        ;

declaFun:  tipoSimp ID_ PARA_ paramForm PARC_ 
            {
                if (strcmp($2, "main") == 0) {
                    if (main_definida == 1) {
                        yyerror("La función 'main' ya ha sido definida");
                    } else {
                        main_definida = 1;
                    }
                if (!insTdS($2, FUNCION, $1, niv, dvar, -1)) {
                    yyerror("Función ya declarada");
                }
                cargaContexto(niv+1); // Crear un nuevo contexto para los parámetros
                }
            }
            bloque { 
                descargaContexto(niv+1); // Liberar contexto después de la declaración
                cargaContexto(niv+1); // Crear un nuevo contexto para los parámetros
            }
        ;

paramForm: listParamForm
        |  
        ;

listParamForm:  tipoSimp ID_ { 
            SIMB sim = obtTdS($2);
            if(!($1 == sim.t)) yyerror("Error de tipos en la instruccion de lista de parametros de una funcion"); 
        }
        |   tipoSimp ID_ COMA_ listParamForm { 
            SIMB sim = obtTdS($2);
            if(!($1 == sim.t)) yyerror("Error de tipos en la instruccion de lista de parametros de una funcion"); 
        }
        ;

bloque:     LLAVEA_ declaVarLocal listInst RETURN_ expre PCOMA_ LLAVEC_ 
        ;

declaVarLocal: declaVarLocal declaVar
        |
        ;

listInst: listInst inst
    |
    ;

inst: LLAVEA_ listInst LLAVEC_
    | instExpre
    | instEntSal
    | instSelec
    | instIter
    ;

instExpre: expre PCOMA_
    | PCOMA_
    ;

instEntSal: READ_ PARA_ ID_ PARC_ PCOMA_ {
        SIMB simbolo = obtTdS($3);
        if (simbolo.t != T_ENTERO) {
            yyerror("READ solo acepta variables de tipo entero");
        }
    }
    | PRINT_ PARA_ expre PARC_ PCOMA_{
        if ($3 != T_ENTERO) {
            yyerror("PRINT solo acepta expresiones de tipo entero");
        }
    }   
    ;

instSelec: IF_ PARA_ expre PARC_ inst ELSE_ inst {
        if ($3 != T_LOGICO) {
            yyerror("La condición del IF debe ser de tipo lógico");
        }
    }
    ;

instIter: FOR_ PARA_ expreOP PCOMA_ expre PCOMA_ expreOP PARC_ inst {
        if ($5 != T_LOGICO) {
            yyerror("La condición del FOR debe ser de tipo lógico");
        }
    }
    ;

expreOP: 
    | expre
    ;

expre: expreLogic  { ($$ = T_LOGICO); }
    | ID_ ASSIG_ expre {
        SIMB simbolo = obtTdS($1);
        if (simbolo.t == T_ERROR) {
            yyerror("Variable no declarada en la asignación");
        } else if (simbolo.t != $3) {
            printf("hola, %d", $3);
            yyerror("Error de tipo en la asignación ");
            }
    }
    | ID_ CORCHETEA_ expre CORCHETEC_ ASSIG_ expre {
        SIMB simbolo = obtTdS($1);
        if (simbolo.t != T_ARRAY) {
            yyerror("El identificador no es un array");
        }
        else {
            DIM array = obtTdA(simbolo.ref);
            if (array.telem != $6) {
                yyerror("Error de tipos en la asignación del array");
            }
            else if ($3 != T_ENTERO){
                yyerror("Error el indice del array tiene que ser un entero");
            }
        }
    }
    ;

expreLogic: expreIgual
    | expreLogic opLogic expreIgual
    ;

expreIgual: expreRel
    | expreIgual opIgual expreRel
    ;

expreRel: expreAd
    | expreRel opRel expreAd
    ;

expreAd: expreMul
    | expreAd opAd expreMul
    ;

expreMul: expreUna
    | expreMul opMul expreUna
    ;

expreUna: expreSufi
    | opUna expreUna
    ;

expreSufi: const
    | PARA_ expre PARC_
    | ID_  
    | ID_ CORCHETEA_ expre CORCHETEC_
    | ID_ PARA_ paramAct PARC_
    ;

paramAct: 
    |   listParamAct
    ;

listParamAct: expre
    |   expre COMA_ listParamAct
    ;

opLogic: AND_
    | OR_
    ;

opIgual: IGUAL_
    |   DISTINTO_
    ;

opRel:  MAYOR_
    |   MENOR_
    |   MAYOR_IGUAL_
    |   MENOR_IGUAL_
    ;

opAd:   MAS_
    |   MENOS_
    ;

opMul:  POR_
    |   DIV_
    ;

opUna:  MAS_
    |   MENOS_
    |   NOT_
    ;
%%