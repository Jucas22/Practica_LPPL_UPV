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
    Lista lista;
}

%token MAS_ MENOS_ POR_ DIV_ ASSIG_ MAYOR_ MENOR_ MAYOR_IGUAL_ MENOR_IGUAL_ IGUAL_ DISTINTO_ NOT_
%token PARA_ PARC_ LLAVEA_ LLAVEC_ CORCHETEA_ CORCHETEC_
%token BOOL_ INT_ READ_ PRINT_ RETURN_ TRUE_ FALSE_ 
%token AND_ OR_ FOR_ IF_ ELSE_ 
%token PCOMA_ COMA_ 

/* Definir los tokens con valores semánticos */
%token <cent> CTE_
%token <ident> ID_

%type <lista> listParamForm paramForm paramAct

%type <cent> const decla listDecla declaVar tipoSimp declaFun
%type <cent> expre expreIgual expreRel expreAd expreMul expreUna expreSufi expreOP expreLogic
%type <cent> opLogic opIgual opRel opAd opMul opUna

%%

programa   
    :{dvar = 0; niv = 0; cargaContexto(niv);}
    listDecla
    {
        if(!main_definida){
            yyerror("El programa no tiene una función main ");
        }
    }
;

listDecla
    : decla     { $$ = $1; }
    | listDecla decla { $$ = $1 + $2; }
;

decla
    : declaVar
    | declaFun
;

declaVar
    : tipoSimp ID_ PCOMA_{
        if (!insTdS( $2, VARIABLE, $1, niv, dvar, -1)) 
            { 
                yyerror("El id de la variable ya ha sido utilizado"); 
        } else {
            dvar += TALLA_TIPO_SIMPLE;
        }
    }
    | tipoSimp ID_ ASSIG_ const PCOMA_ {
        if (!insTdS( $2, VARIABLE, $1, niv, dvar, -1)){
            yyerror("El id de la variable ya ha sido utilizado"); 
        } else if (! (($1 == T_ENTERO && $4 == T_ENTERO) || ($1 == T_LOGICO && $4 == T_LOGICO)) ) {
            yyerror("Error de tipos en la instrucción de asignación");
        }else {
            dvar += TALLA_TIPO_SIMPLE;
        }
    }
    | tipoSimp ID_ CORCHETEA_ CTE_ CORCHETEC_ PCOMA_ {
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

const
    : CTE_    { $$ = T_ENTERO; }
    | TRUE_   { $$ = T_LOGICO; }
    | FALSE_  { $$ = T_LOGICO; }
;

tipoSimp
    : INT_ { $$ = T_ENTERO; }
    | BOOL_ { $$ = T_LOGICO; }
;

declaFun
    : tipoSimp ID_ { niv = 1; cargaContexto(niv); } PARA_ paramForm PARC_{
        if (strcmp($2, "main") == 0) {
            if (main_definida == 1) {
                yyerror("La función 'main' ya ha sido definida");
            } else {
                main_definida = 1;
            }
        }
        if (!insTdS($2, FUNCION, $1, niv, dvar, $5.ref)) {
                    yyerror("Función ya declarada");
        }
    }
    { $<cent>$ = dvar; dvar = 0; } bloque { 
        descargaContexto(niv); // Liberar contexto después de la declaración
        niv = 0;
        dvar = $<cent>2;
		$$ = $1;
    }
;

paramForm
    : listParamForm{
        $$.ref = $1.ref;
        $$.talla = $1.talla;
    }
    |  {
        $$.ref = insTdD(-1, T_VACIO);
        $$.talla = 0;
    }
;

listParamForm
    : tipoSimp ID_ {
        $$.ref = insTdD(-1, $1);
        $$.talla = TALLA_TIPO_SIMPLE + TALLA_SEGENLACES;
        if(!insTdS($2, PARAMETRO, $1, niv, -$$.talla, -1)) yyerror("Error de tipos en la instruccion de lista de parametros de una funcion"); 
    }
    | tipoSimp ID_ COMA_ listParamForm { 
        $$.ref = insTdD($4.ref, $1);
		$$.talla = $4.talla + TALLA_TIPO_SIMPLE;
        if(!insTdS($2, PARAMETRO, $1, niv, -$$.talla, -1))  yyerror("Ya existe un parametro con el mismo identificador.");
    }
;

bloque
    : LLAVEA_ declaVarLocal listInst RETURN_ expre PCOMA_ LLAVEC_ { 
            INF inf = obtTdD(-1);
			if (inf.tipo != T_ERROR) {
				if (inf.tipo != $5) {
					yyerror("Incompatibilidad de tipos en el return."); 
				}     
			}
		}
;

declaVarLocal
    : declaVarLocal declaVar
    |
;

listInst
    : listInst inst
    |
;

inst
    : LLAVEA_ listInst LLAVEC_
    | instExpre
    | instEntSal
    | instSelec
    | instIter
;

instExpre: expre PCOMA_
    | PCOMA_
    ;

instEntSal
    : READ_ PARA_ ID_ PARC_ PCOMA_ {
        SIMB simbolo = obtTdS($3);
        if (simbolo.t != T_ENTERO && simbolo.t != T_ERROR) {
            yyerror("READ solo acepta variables de tipo entero");
        }
    }
    | PRINT_ PARA_ expre PARC_ PCOMA_{
        if ($3 != T_ENTERO && $3 != T_ERROR) {
            yyerror("PRINT solo acepta expresiones de tipo entero");
        }
    }   
;

instSelec
    : IF_ PARA_ expre PARC_ inst ELSE_ inst {
        if ($3 != T_ERROR) {
            if ($3 != T_LOGICO) {
                yyerror("La condición del IF debe ser de tipo lógico");
            }  
        }
    }
;

instIter
    : FOR_ PARA_ expreOP PCOMA_ expre PCOMA_ expreOP {
        if ($5 != T_ERROR){
            if ($5 != T_LOGICO) {
                yyerror("La condición del FOR debe ser de tipo lógico");
            }
        } else if ($3 != T_ENTERO) { yyerror("La expresion Operacion ha de ser de tipo simple"); }
    } PARC_ inst
;

expreOP
    : { $$ = T_VACIO; }
    | expre { $$ = $1; }
;

expre
    : expreLogic  { ($$ = $1); }
    | ID_ ASSIG_ expre {
        $$ = T_ERROR;
        SIMB simbolo = obtTdS($1);
        if ($3 != T_ERROR){
            if (simbolo.t == T_ERROR) { yyerror("Variable no declarada"); } 
            else if (simbolo.t != $3) { yyerror("Error de tipo en la asignación"); }
            else if (simbolo.t != T_ERROR && $3 != T_ERROR) { $$ = simbolo.t; }
        }
    }
    | ID_ CORCHETEA_ expre CORCHETEC_ ASSIG_ expre {
        $$ = T_ERROR;
        SIMB simbolo = obtTdS($1);
        if (simbolo.t != T_ARRAY) { yyerror("El identificador no es un array"); }
        else {
            DIM array = obtTdA(simbolo.ref);
            if ($6 != T_ERROR) {
                if (array.telem != $6) { yyerror("Error de tipos en la asignación del array"); }
                else if ($3 != T_ENTERO){ yyerror("Error el indice del array tiene que ser un entero"); }
                else { $$ = simbolo.t; }
            }
        }
    }
;

expreLogic
    : expreIgual { $$ = $1; }
    | expreLogic opLogic expreIgual {
        $$ = T_ERROR;
        if ($1 != T_ERROR && $3 != T_ERROR){
            if ($1 != $3) { yyerror("Error de tipos en la expresión lógica, no son del mismo tipo"); }
            else if ($1 != T_LOGICO) { yyerror("Error tipos en la comparacion, deben ser expresiones logicas"); }
            else { $$ = T_LOGICO; }
        }
    }
;

expreIgual
    : expreRel { $$ = $1; }
    | expreIgual opIgual expreRel {
        $$ = T_ERROR;
        if ($1 != T_ERROR && $3 != T_ERROR){
            if ($1 != $3) { yyerror("Error de tipos en la expresion de igualdad, no son del mismo tipo"); }
            else if ($1 != T_LOGICO || $1 != T_ENTERO) { yyerror("Error tipos en la comparacion, deben ser expresiones logicas o de enteros"); }
            else { $$ = T_LOGICO; }
        }
    }   
;

expreRel
    : expreAd { $$ = $1; }
    | expreRel opRel expreAd {
        $$ = T_ERROR;
        if ($1 != T_ERROR && $3 != T_ERROR){
            if ($1 != $3) { yyerror("Error de tipos en la epresión de relación, no son del mismo tipo"); }
            else if ($1 != T_ENTERO) { yyerror("Error tipos en la comparacion, deben ser expresiones de enteros"); }
            else { $$ = T_LOGICO; }
        }
    }
;

expreAd
    : expreMul { $$ = $1; }
    | expreAd opAd expreMul {
        $$ = T_ERROR;
        if ($1 != T_ERROR && $3 != T_ERROR){
            if ($1 != $3) { yyerror("Error de tipos en la epresión de addición, no son del mismo tipo"); }
            else if ($1 != T_ENTERO) { yyerror("Error tipos en la comparacion, deben ser expresiones de enteros"); }
            else { $$ = T_ENTERO; }
        }
    }
;

expreMul
    : expreUna { $$ = $1; }
    | expreMul opMul expreUna {
        $$ = T_ERROR;
        if ($1 != T_ERROR && $3 != T_ERROR){
            if ($1 != $3) { yyerror("Error de tipos en la expresión de multiplicación, no son del mismo tipo"); }
            else if ($1 != T_ENTERO) { yyerror("Error tipos en la comparacion, deben ser expresiones de enteros"); }
            else { $$ = T_ENTERO; }
        }
    }
;

expreUna
    : expreSufi { $$ = $1; }
    | opUna expreUna {
        $$ = T_ERROR;
        if ($2 != T_ERROR){
            if ($2 != T_ENTERO) { 
                if ($1 == OP_NOT) { yyerror("Incompatibilidad de tipos, no se puede negar un entero"); }
                else { $$ == T_ENTERO; }
            }
            else if ($2 == T_LOGICO) { 
                if ($1 == OP_SUMA || $1 == OP_RESTA) { yyerror("Incompatibilidad de tipos, no se puede sumar o restar un booleano"); }
                else { $$ == T_LOGICO; }
            } else { yyerror("Error tipos en la epresion unaria, deben ser expresiones de enteros o lógico"); }
        }
    }
;

expreSufi
    : const { $$ = $1; }
    | PARA_ expre PARC_ { $$ = $2; }
    | ID_ {
        SIMB sim = obtTdS($1);
        $$ = T_ERROR;

        if (sim.t == T_ERROR) {
                yyerror("No existe ninguna variable con ese identificador.");
            } else { 
                $$ = sim.t;
            }
    }
    | ID_ CORCHETEA_ expre CORCHETEC_ {
        SIMB sim = obtTdS($1);
        $$ = T_ERROR;

        if (sim.t == T_ERROR) {
                yyerror("No existe ninguna variable con ese identificador.");
        } else if ($3 != T_ENTERO) {
				yyerror("El indice para acceder a un vector debe ser un entero 0 o positivo.");
        } else { 
            DIM dim = obtTdA(sim.ref);
            $$ = dim.telem;
        }
    }
    | ID_ PARA_ paramAct PARC_ {
        SIMB sim = obtTdS($1);

        $$ = T_ERROR;
        
        if (sim.t == T_ERROR) { 
            yyerror("No existe ninguna variable con ese identificador."); 
        } else {
            INF inf = obtTdD(sim.ref);
            if (inf.tipo == T_ERROR) { yyerror("No existe ninguna funcion con ese identificador.");} 
            else {
                if (!cmpDom(sim.ref, $3.ref)) {
                    yyerror("Los parámetros actuales no coinciden con los declarados en la función.");
                } else {
                    $$ = inf.tipo; // Tipo de retorno de la función
                }
             }
        }
    }
;

paramAct
    : 
    |   listParamAct
    ;

listParamAct
    : expre
    | expre COMA_ listParamAct
    ;

opLogic: AND_           {$$ = OP_AND;}
    | OR_               {$$ = OP_OR;}
    ;

opIgual: IGUAL_         {$$ = OP_IGUAL;}
    |   DISTINTO_       {$$ = OP_DISTINTO;}
    ;

opRel:  MAYOR_          {$$ = OP_MAYOR;}
    |   MENOR_          {$$ = OP_MENOR;}
    |   MAYOR_IGUAL_    {$$ = OP_MAYORIG;}
    |   MENOR_IGUAL_    {$$ = OP_MENORIG;}
    ;

opAd:   MAS_    {$$ = OP_SUMA;}
    |   MENOS_  {$$ = OP_RESTA;}
    ;

opMul:  POR_    {$$ = OP_MULT;}
    |   DIV_    {$$ = OP_DIV;}
    ;

opUna:  MAS_    {$$ = OP_SUMA;}
    |   MENOS_  {$$ = OP_RESTA;}
    |   NOT_    {$$ = OP_NOT;}
    ;
%%