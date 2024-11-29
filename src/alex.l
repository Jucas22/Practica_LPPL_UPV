%{
#include "header.h"
#include "asin.h"
#define  retornar(x) {if (verbosidad) ECHO ; return (x) ; }

%}
/*----------------------------------------------------------------------
  Dado que las funciones "input()" y "unput(c)" son costosas y no las
  utilizaremos, evitaremos que se generen automaticamente sus rutinas
  correspondientes desactivandolas mediante las siguientes opciones:
----------------------------------------------------------------------*/
%option noinput
%option nounput
/*----------------------------------------------------------------------
  Para mantener el numero de linea actual en la variable global yylineno
----------------------------------------------------------------------*/
%option yylineno

delimitador     [ \t\n]+
int             [0-9]*
float           [0-9]*+\.[0-9]*
digito          {int}|{float}
letra           [a-zA-Z]
id              {letra}({int}|{letra}|_)*
comentario      \/\/[^\n]*



%%

{delimitador}   {if (verbosidad) ECHO ; }

{comentario}    {}

"+"             { retornar (MAS_) ;}
"-"             { retornar (MENOS_) ; }
"!"             { retornar (NOT_) ; }
"*"             { retornar (POR_) ; }
"/"             { retornar (DIV_) ; }
"("             { retornar (PARA_) ; }
")"             { retornar (PARC_) ; }
"["             { retornar (CORCHETEA_) ; }
"]"             { retornar (CORCHETEC_) ; }
"{"             { retornar (LLAVEA_) ; }
"}"             { retornar (LLAVEC_) ; }
"="             { retornar (ASSIG_) ; }
">"             { retornar (MAYOR_) ; }
"<"             { retornar (MENOR_) ; }
">="            { retornar (MAYOR_IGUAL_) ; }
"<="            { retornar (MENOR_IGUAL_) ; }
"=="            { retornar (IGUAL_) ; }
"!="            { retornar (DISTINTO_) ; }


";"             { retornar (PCOMA_) ; }
","             { retornar (COMA_) ; }


"&&"            { retornar (AND_) ; }
"||"            { retornar (OR_) ; }


"for"           { retornar (FOR_) ; }
"if"            { retornar (IF_) ; }
"else"          { retornar (ELSE_) ; } 
"read"          { retornar (READ_) ; }
"print"         { retornar (PRINT_) ; }
"return"        { retornar (RETURN_) ; }
"true"          { retornar (TRUE_) ; }
"false"         { retornar (FALSE_) ; }



"int"           { retornar (INT_) ; }
"bool"          { retornar (BOOL_) ; }
{digito}        { yylval.cent = atoi(yytext); retornar (CTE_) ; }
{id}            { yylval.ident = strdup(yytext); retornar(ID_); }

.				{ yyerror("Caracter desconocido") ;}
%%