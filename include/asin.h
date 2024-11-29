/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_ASIN_H_INCLUDED
# define YY_YY_ASIN_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    MAS_ = 258,                    /* MAS_  */
    MENOS_ = 259,                  /* MENOS_  */
    POR_ = 260,                    /* POR_  */
    DIV_ = 261,                    /* DIV_  */
    ASSIG_ = 262,                  /* ASSIG_  */
    MAYOR_ = 263,                  /* MAYOR_  */
    MENOR_ = 264,                  /* MENOR_  */
    MAYOR_IGUAL_ = 265,            /* MAYOR_IGUAL_  */
    MENOR_IGUAL_ = 266,            /* MENOR_IGUAL_  */
    IGUAL_ = 267,                  /* IGUAL_  */
    DISTINTO_ = 268,               /* DISTINTO_  */
    NOT_ = 269,                    /* NOT_  */
    PARA_ = 270,                   /* PARA_  */
    PARC_ = 271,                   /* PARC_  */
    LLAVEA_ = 272,                 /* LLAVEA_  */
    LLAVEC_ = 273,                 /* LLAVEC_  */
    CORCHETEA_ = 274,              /* CORCHETEA_  */
    CORCHETEC_ = 275,              /* CORCHETEC_  */
    BOOL_ = 276,                   /* BOOL_  */
    INT_ = 277,                    /* INT_  */
    READ_ = 278,                   /* READ_  */
    PRINT_ = 279,                  /* PRINT_  */
    RETURN_ = 280,                 /* RETURN_  */
    TRUE_ = 281,                   /* TRUE_  */
    FALSE_ = 282,                  /* FALSE_  */
    AND_ = 283,                    /* AND_  */
    OR_ = 284,                     /* OR_  */
    FOR_ = 285,                    /* FOR_  */
    IF_ = 286,                     /* IF_  */
    ELSE_ = 287,                   /* ELSE_  */
    PCOMA_ = 288,                  /* PCOMA_  */
    COMA_ = 289,                   /* COMA_  */
    CTE_ = 290,                    /* CTE_  */
    ID_ = 291                      /* ID_  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 9 "src/asin.y"

    int cent;   // Para constantes enteras
    char *ident; // Para identificadores

#line 105 "asin.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_ASIN_H_INCLUDED  */
