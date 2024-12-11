/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/asin.y"

    #include "libtds.h"
    #include "header.h"
    #include <string.h>
    int main_definida = 0;  // Variable para controlar la definición de main
    int niv = 0;

#line 79 "asin.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "asin.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_MAS_ = 3,                       /* MAS_  */
  YYSYMBOL_MENOS_ = 4,                     /* MENOS_  */
  YYSYMBOL_POR_ = 5,                       /* POR_  */
  YYSYMBOL_DIV_ = 6,                       /* DIV_  */
  YYSYMBOL_ASSIG_ = 7,                     /* ASSIG_  */
  YYSYMBOL_MAYOR_ = 8,                     /* MAYOR_  */
  YYSYMBOL_MENOR_ = 9,                     /* MENOR_  */
  YYSYMBOL_MAYOR_IGUAL_ = 10,              /* MAYOR_IGUAL_  */
  YYSYMBOL_MENOR_IGUAL_ = 11,              /* MENOR_IGUAL_  */
  YYSYMBOL_IGUAL_ = 12,                    /* IGUAL_  */
  YYSYMBOL_DISTINTO_ = 13,                 /* DISTINTO_  */
  YYSYMBOL_NOT_ = 14,                      /* NOT_  */
  YYSYMBOL_PARA_ = 15,                     /* PARA_  */
  YYSYMBOL_PARC_ = 16,                     /* PARC_  */
  YYSYMBOL_LLAVEA_ = 17,                   /* LLAVEA_  */
  YYSYMBOL_LLAVEC_ = 18,                   /* LLAVEC_  */
  YYSYMBOL_CORCHETEA_ = 19,                /* CORCHETEA_  */
  YYSYMBOL_CORCHETEC_ = 20,                /* CORCHETEC_  */
  YYSYMBOL_BOOL_ = 21,                     /* BOOL_  */
  YYSYMBOL_INT_ = 22,                      /* INT_  */
  YYSYMBOL_READ_ = 23,                     /* READ_  */
  YYSYMBOL_PRINT_ = 24,                    /* PRINT_  */
  YYSYMBOL_RETURN_ = 25,                   /* RETURN_  */
  YYSYMBOL_TRUE_ = 26,                     /* TRUE_  */
  YYSYMBOL_FALSE_ = 27,                    /* FALSE_  */
  YYSYMBOL_AND_ = 28,                      /* AND_  */
  YYSYMBOL_OR_ = 29,                       /* OR_  */
  YYSYMBOL_FOR_ = 30,                      /* FOR_  */
  YYSYMBOL_IF_ = 31,                       /* IF_  */
  YYSYMBOL_ELSE_ = 32,                     /* ELSE_  */
  YYSYMBOL_PCOMA_ = 33,                    /* PCOMA_  */
  YYSYMBOL_COMA_ = 34,                     /* COMA_  */
  YYSYMBOL_CTE_ = 35,                      /* CTE_  */
  YYSYMBOL_ID_ = 36,                       /* ID_  */
  YYSYMBOL_YYACCEPT = 37,                  /* $accept  */
  YYSYMBOL_programa = 38,                  /* programa  */
  YYSYMBOL_39_1 = 39,                      /* $@1  */
  YYSYMBOL_listDecla = 40,                 /* listDecla  */
  YYSYMBOL_decla = 41,                     /* decla  */
  YYSYMBOL_declaVar = 42,                  /* declaVar  */
  YYSYMBOL_const = 43,                     /* const  */
  YYSYMBOL_tipoSimp = 44,                  /* tipoSimp  */
  YYSYMBOL_declaFun = 45,                  /* declaFun  */
  YYSYMBOL_46_2 = 46,                      /* $@2  */
  YYSYMBOL_47_3 = 47,                      /* $@3  */
  YYSYMBOL_48_4 = 48,                      /* @4  */
  YYSYMBOL_paramForm = 49,                 /* paramForm  */
  YYSYMBOL_listParamForm = 50,             /* listParamForm  */
  YYSYMBOL_bloque = 51,                    /* bloque  */
  YYSYMBOL_declaVarLocal = 52,             /* declaVarLocal  */
  YYSYMBOL_listInst = 53,                  /* listInst  */
  YYSYMBOL_inst = 54,                      /* inst  */
  YYSYMBOL_instExpre = 55,                 /* instExpre  */
  YYSYMBOL_instEntSal = 56,                /* instEntSal  */
  YYSYMBOL_instSelec = 57,                 /* instSelec  */
  YYSYMBOL_instIter = 58,                  /* instIter  */
  YYSYMBOL_59_5 = 59,                      /* $@5  */
  YYSYMBOL_expreOP = 60,                   /* expreOP  */
  YYSYMBOL_expre = 61,                     /* expre  */
  YYSYMBOL_expreLogic = 62,                /* expreLogic  */
  YYSYMBOL_expreIgual = 63,                /* expreIgual  */
  YYSYMBOL_expreRel = 64,                  /* expreRel  */
  YYSYMBOL_expreAd = 65,                   /* expreAd  */
  YYSYMBOL_expreMul = 66,                  /* expreMul  */
  YYSYMBOL_expreUna = 67,                  /* expreUna  */
  YYSYMBOL_expreSufi = 68,                 /* expreSufi  */
  YYSYMBOL_paramAct = 69,                  /* paramAct  */
  YYSYMBOL_listParamAct = 70,              /* listParamAct  */
  YYSYMBOL_opLogic = 71,                   /* opLogic  */
  YYSYMBOL_opIgual = 72,                   /* opIgual  */
  YYSYMBOL_opRel = 73,                     /* opRel  */
  YYSYMBOL_opAd = 74,                      /* opAd  */
  YYSYMBOL_opMul = 75,                     /* opMul  */
  YYSYMBOL_opUna = 76                      /* opUna  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   167

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  142

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   291


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    34,    34,    34,    44,    45,    49,    50,    54,    62,
      71,    89,    90,    91,    95,    96,   100,   100,   112,   100,
     121,   125,   132,   137,   145,   156,   157,   161,   162,   166,
     167,   168,   169,   170,   173,   174,   178,   184,   192,   202,
     202,   215,   216,   220,   221,   230,   246,   247,   258,   259,
     270,   271,   282,   283,   294,   295,   306,   307,   323,   324,
     325,   335,   348,   370,   371,   375,   376,   379,   380,   383,
     384,   387,   388,   389,   390,   393,   394,   397,   398,   401,
     402,   403
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "MAS_", "MENOS_",
  "POR_", "DIV_", "ASSIG_", "MAYOR_", "MENOR_", "MAYOR_IGUAL_",
  "MENOR_IGUAL_", "IGUAL_", "DISTINTO_", "NOT_", "PARA_", "PARC_",
  "LLAVEA_", "LLAVEC_", "CORCHETEA_", "CORCHETEC_", "BOOL_", "INT_",
  "READ_", "PRINT_", "RETURN_", "TRUE_", "FALSE_", "AND_", "OR_", "FOR_",
  "IF_", "ELSE_", "PCOMA_", "COMA_", "CTE_", "ID_", "$accept", "programa",
  "$@1", "listDecla", "decla", "declaVar", "const", "tipoSimp", "declaFun",
  "$@2", "$@3", "@4", "paramForm", "listParamForm", "bloque",
  "declaVarLocal", "listInst", "inst", "instExpre", "instEntSal",
  "instSelec", "instIter", "$@5", "expreOP", "expre", "expreLogic",
  "expreIgual", "expreRel", "expreAd", "expreMul", "expreUna", "expreSufi",
  "paramAct", "listParamAct", "opLogic", "opIgual", "opRel", "opAd",
  "opMul", "opUna", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-120)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -120,     5,    -3,  -120,  -120,  -120,    -3,  -120,  -120,   -29,
    -120,  -120,    33,    22,   -25,  -120,     7,  -120,  -120,  -120,
     -21,     0,    -3,  -120,    -9,     9,    27,  -120,  -120,    28,
    -120,    -3,  -120,  -120,    48,  -120,  -120,    -3,  -120,    31,
      11,    33,  -120,  -120,  -120,   117,  -120,    53,    54,   117,
      59,    60,  -120,    -6,  -120,  -120,  -120,  -120,  -120,  -120,
      40,    30,    38,    45,    57,    58,  -120,  -120,   131,    61,
      67,    43,   117,    47,   117,   117,   117,   117,   117,  -120,
    -120,  -120,   131,  -120,  -120,   131,  -120,  -120,  -120,  -120,
     131,  -120,  -120,   131,  -120,  -120,   131,   -13,  -120,  -120,
    -120,    70,    72,    65,    66,  -120,    76,  -120,    71,    85,
    -120,    84,    38,    45,    57,    58,  -120,   117,    75,    77,
    -120,   117,    92,   117,  -120,   104,    93,  -120,  -120,    79,
      82,  -120,   117,  -120,   117,    92,  -120,  -120,  -120,   101,
      92,  -120
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,    15,    14,     3,     4,     6,     0,
       7,     5,    16,     0,     0,     8,     0,    12,    13,    11,
       0,     0,    21,     9,     0,     0,     0,    20,    10,    22,
      17,     0,    18,    23,     0,    26,    19,    28,    25,     0,
       0,     0,    79,    80,    81,     0,    28,     0,     0,     0,
       0,     0,    35,    60,    58,    27,    30,    31,    32,    33,
       0,    43,    46,    48,    50,    52,    54,    56,     0,     0,
       0,     0,     0,     0,    41,     0,     0,    63,     0,    34,
      67,    68,     0,    69,    70,     0,    71,    72,    73,    74,
       0,    75,    76,     0,    77,    78,     0,    60,    57,    59,
      29,     0,     0,     0,     0,    42,     0,    44,    65,     0,
      64,     0,    47,    49,    51,    53,    55,     0,     0,     0,
      24,     0,     0,     0,    62,    61,     0,    36,    37,     0,
       0,    66,     0,    61,    41,     0,    45,    39,    38,     0,
       0,    40
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -120,  -120,  -120,  -120,   118,    89,   116,   -14,  -120,  -120,
    -120,  -120,  -120,    99,  -120,  -120,    87,  -119,  -120,  -120,
    -120,  -120,  -120,     2,   -45,  -120,    55,    56,    49,    62,
     -57,  -120,  -120,    15,  -120,  -120,  -120,  -120,  -120,  -120
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     6,     7,     8,    54,     9,    10,    16,
      32,    34,    26,    27,    36,    37,    40,    55,    56,    57,
      58,    59,   139,   104,    60,    61,    62,    63,    64,    65,
      66,    67,   109,   110,    82,    85,    90,    93,    96,    68
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      69,    76,    77,   130,    73,     3,   117,    12,    25,    77,
      21,    98,    23,    78,    42,    43,   138,    25,     4,     5,
      24,   141,    22,    39,    28,    44,    45,   102,    46,   105,
     106,   107,   108,   111,    47,    48,    49,    17,    18,   116,
      13,    50,    51,    30,    52,    29,    19,    53,    17,    18,
      83,    84,    14,    86,    87,    88,    89,    19,    80,    81,
      91,    92,    31,    94,    95,    35,    15,    41,    71,    72,
      42,    43,   126,    79,    74,    75,   129,    99,   108,   101,
     103,    44,    45,   120,    46,   100,   118,   136,   119,   105,
      47,    48,   122,    17,    18,    42,    43,    50,    51,   121,
      52,   124,    19,    53,   125,   123,    44,    45,   127,    46,
     128,   132,   134,   133,   135,    47,    48,   140,    17,    18,
      42,    43,    50,    51,    11,    52,    38,    19,    53,    20,
      33,    44,    45,    70,    42,    43,   137,   112,   131,   114,
       0,   113,     0,    17,    18,    44,    45,     0,     0,     0,
       0,     0,    19,    53,     0,   115,     0,    17,    18,     0,
       0,     0,     0,     0,     0,     0,    19,    97
};

static const yytype_int16 yycheck[] =
{
      45,     7,    15,   122,    49,     0,    19,    36,    22,    15,
      35,    68,    33,    19,     3,     4,   135,    31,    21,    22,
      20,   140,    15,    37,    33,    14,    15,    72,    17,    74,
      75,    76,    77,    78,    23,    24,    25,    26,    27,    96,
       7,    30,    31,    16,    33,    36,    35,    36,    26,    27,
      12,    13,    19,     8,     9,    10,    11,    35,    28,    29,
       3,     4,    34,     5,     6,    17,    33,    36,    15,    15,
       3,     4,   117,    33,    15,    15,   121,    16,   123,    36,
      33,    14,    15,    18,    17,    18,    16,   132,    16,   134,
      23,    24,    16,    26,    27,     3,     4,    30,    31,    33,
      33,    16,    35,    36,    20,    34,    14,    15,    33,    17,
      33,     7,    33,    20,    32,    23,    24,    16,    26,    27,
       3,     4,    30,    31,     6,    33,    37,    35,    36,    13,
      31,    14,    15,    46,     3,     4,   134,    82,   123,    90,
      -1,    85,    -1,    26,    27,    14,    15,    -1,    -1,    -1,
      -1,    -1,    35,    36,    -1,    93,    -1,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    38,    39,     0,    21,    22,    40,    41,    42,    44,
      45,    41,    36,     7,    19,    33,    46,    26,    27,    35,
      43,    35,    15,    33,    20,    44,    49,    50,    33,    36,
      16,    34,    47,    50,    48,    17,    51,    52,    42,    44,
      53,    36,     3,     4,    14,    15,    17,    23,    24,    25,
      30,    31,    33,    36,    43,    54,    55,    56,    57,    58,
      61,    62,    63,    64,    65,    66,    67,    68,    76,    61,
      53,    15,    15,    61,    15,    15,     7,    15,    19,    33,
      28,    29,    71,    12,    13,    72,     8,     9,    10,    11,
      73,     3,     4,    74,     5,     6,    75,    36,    67,    16,
      18,    36,    61,    33,    60,    61,    61,    61,    61,    69,
      70,    61,    63,    64,    65,    66,    67,    19,    16,    16,
      18,    33,    16,    34,    16,    20,    61,    33,    33,    61,
      54,    70,     7,    20,    33,    32,    61,    60,    54,    59,
      16,    54
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    39,    38,    40,    40,    41,    41,    42,    42,
      42,    43,    43,    43,    44,    44,    46,    47,    48,    45,
      49,    49,    50,    50,    51,    52,    52,    53,    53,    54,
      54,    54,    54,    54,    55,    55,    56,    56,    57,    59,
      58,    60,    60,    61,    61,    61,    62,    62,    63,    63,
      64,    64,    65,    65,    66,    66,    67,    67,    68,    68,
      68,    68,    68,    69,    69,    70,    70,    71,    71,    72,
      72,    73,    73,    73,    73,    74,    74,    75,    75,    76,
      76,    76
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     1,     1,     3,     5,
       6,     1,     1,     1,     1,     1,     0,     0,     0,     9,
       1,     0,     2,     4,     7,     2,     0,     2,     0,     3,
       1,     1,     1,     1,     2,     1,     5,     5,     7,     0,
      10,     0,     1,     1,     3,     6,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     2,     1,     3,
       1,     4,     4,     0,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* $@1: %empty  */
#line 34 "src/asin.y"
     {dvar = 0; niv = 0; cargaContexto(niv);}
#line 1247 "asin.c"
    break;

  case 3: /* programa: $@1 listDecla  */
#line 36 "src/asin.y"
    {
        if(!main_definida){
            yyerror("El programa no tiene una función main ");
        }
    }
#line 1257 "asin.c"
    break;

  case 4: /* listDecla: decla  */
#line 44 "src/asin.y"
                { (yyval.cent) = (yyvsp[0].cent); }
#line 1263 "asin.c"
    break;

  case 5: /* listDecla: listDecla decla  */
#line 45 "src/asin.y"
                      { (yyval.cent) = (yyvsp[-1].cent) + (yyvsp[0].cent); }
#line 1269 "asin.c"
    break;

  case 8: /* declaVar: tipoSimp ID_ PCOMA_  */
#line 54 "src/asin.y"
                         {
        if (!insTdS( (yyvsp[-1].ident), VARIABLE, (yyvsp[-2].cent), niv, dvar, -1)) 
            { 
                yyerror("El id de la variable ya ha sido utilizado"); 
        } else {
            dvar += TALLA_TIPO_SIMPLE;
        }
    }
#line 1282 "asin.c"
    break;

  case 9: /* declaVar: tipoSimp ID_ ASSIG_ const PCOMA_  */
#line 62 "src/asin.y"
                                       {
        if (!insTdS( (yyvsp[-3].ident), VARIABLE, (yyvsp[-4].cent), niv, dvar, -1)){
            yyerror("El id de la variable ya ha sido utilizado"); 
        } else if (! (((yyvsp[-4].cent) == T_ENTERO && (yyvsp[-1].cent) == T_ENTERO) || ((yyvsp[-4].cent) == T_LOGICO && (yyvsp[-1].cent) == T_LOGICO)) ) {
            yyerror("Error de tipos en la instrucción de asignación");
        }else {
            dvar += TALLA_TIPO_SIMPLE;
        }
    }
#line 1296 "asin.c"
    break;

  case 10: /* declaVar: tipoSimp ID_ CORCHETEA_ CTE_ CORCHETEC_ PCOMA_  */
#line 71 "src/asin.y"
                                                     {
        int numelem = (yyvsp[-2].cent);
        if ((yyvsp[-2].cent) <= 0) {
            yyerror("Talla inapropiada del array");
            numelem = 0;
        } else if (((yyvsp[-2].cent) == T_ENTERO)) {
            yyerror("El indice del array debe ser un entero");
        }
        int refe = insTdA((yyvsp[-5].cent), numelem);
        if (!insTdS( (yyvsp[-4].ident), VARIABLE, T_ARRAY, niv, dvar, refe)) {
            yyerror("El id del array ya ha sido utilizado");
        } else {
            dvar += numelem * TALLA_TIPO_SIMPLE;
        }
    }
#line 1316 "asin.c"
    break;

  case 11: /* const: CTE_  */
#line 89 "src/asin.y"
              { (yyval.cent) = T_ENTERO; }
#line 1322 "asin.c"
    break;

  case 12: /* const: TRUE_  */
#line 90 "src/asin.y"
              { (yyval.cent) = T_LOGICO; }
#line 1328 "asin.c"
    break;

  case 13: /* const: FALSE_  */
#line 91 "src/asin.y"
              { (yyval.cent) = T_LOGICO; }
#line 1334 "asin.c"
    break;

  case 14: /* tipoSimp: INT_  */
#line 95 "src/asin.y"
           { (yyval.cent) = T_ENTERO; }
#line 1340 "asin.c"
    break;

  case 15: /* tipoSimp: BOOL_  */
#line 96 "src/asin.y"
            { (yyval.cent) = T_LOGICO; }
#line 1346 "asin.c"
    break;

  case 16: /* $@2: %empty  */
#line 100 "src/asin.y"
                   { niv = 1; cargaContexto(niv); }
#line 1352 "asin.c"
    break;

  case 17: /* $@3: %empty  */
#line 100 "src/asin.y"
                                                                         {
        if (strcmp((yyvsp[-4].ident), "main") == 0) {
            if (main_definida == 1) {
                yyerror("La función 'main' ya ha sido definida");
            } else {
                main_definida = 1;
            }
        }
        if (!insTdS((yyvsp[-4].ident), FUNCION, (yyvsp[-5].cent), niv-1, dvar, (yyvsp[-1].lista).ref)) {
                    yyerror("Función ya declarada");
        }
    }
#line 1369 "asin.c"
    break;

  case 18: /* @4: %empty  */
#line 112 "src/asin.y"
    { (yyval.cent) = dvar; dvar = 0; }
#line 1375 "asin.c"
    break;

  case 19: /* declaFun: tipoSimp ID_ $@2 PARA_ paramForm PARC_ $@3 @4 bloque  */
#line 112 "src/asin.y"
                                          { 
        descargaContexto(niv); // Liberar contexto después de la declaración
        niv = 0;
        dvar = (yyvsp[-7].cent);
		(yyval.cent) = (yyvsp[-8].cent);
    }
#line 1386 "asin.c"
    break;

  case 20: /* paramForm: listParamForm  */
#line 121 "src/asin.y"
                   {
        (yyval.lista).ref = (yyvsp[0].lista).ref;
        (yyval.lista).talla = (yyvsp[0].lista).talla;
    }
#line 1395 "asin.c"
    break;

  case 21: /* paramForm: %empty  */
#line 125 "src/asin.y"
       {
        (yyval.lista).ref = insTdD(-1, T_VACIO);
        (yyval.lista).talla = 0;
    }
#line 1404 "asin.c"
    break;

  case 22: /* listParamForm: tipoSimp ID_  */
#line 132 "src/asin.y"
                   {
        (yyval.lista).ref = insTdD(-1, (yyvsp[-1].cent));
        (yyval.lista).talla = TALLA_TIPO_SIMPLE + TALLA_SEGENLACES;
        if(!insTdS((yyvsp[0].ident), PARAMETRO, (yyvsp[-1].cent), niv, -(yyval.lista).talla, -1)) yyerror("Error de tipos en la instruccion de lista de parametros de una funcion"); 
    }
#line 1414 "asin.c"
    break;

  case 23: /* listParamForm: tipoSimp ID_ COMA_ listParamForm  */
#line 137 "src/asin.y"
                                       { 
        (yyval.lista).ref = insTdD((yyvsp[0].lista).ref, (yyvsp[-3].cent));
		(yyval.lista).talla = (yyvsp[0].lista).talla + TALLA_TIPO_SIMPLE;
        if(!insTdS((yyvsp[-2].ident), PARAMETRO, (yyvsp[-3].cent), niv, -(yyval.lista).talla, -1))  yyerror("Ya existe un parametro con el mismo identificador.");
    }
#line 1424 "asin.c"
    break;

  case 24: /* bloque: LLAVEA_ declaVarLocal listInst RETURN_ expre PCOMA_ LLAVEC_  */
#line 145 "src/asin.y"
                                                                  { 
            INF inf = obtTdD(-1);
			if (inf.tipo != T_ERROR) {
				if (inf.tipo != (yyvsp[-2].cent)) {
					yyerror("Incompatibilidad de tipos en el return."); 
				}     
			}
		}
#line 1437 "asin.c"
    break;

  case 36: /* instEntSal: READ_ PARA_ ID_ PARC_ PCOMA_  */
#line 178 "src/asin.y"
                                   {
        SIMB simbolo = obtTdS((yyvsp[-2].ident));
        if (simbolo.t != T_ENTERO && simbolo.t != T_ERROR) {
            yyerror("READ solo acepta variables de tipo entero");
        }
    }
#line 1448 "asin.c"
    break;

  case 37: /* instEntSal: PRINT_ PARA_ expre PARC_ PCOMA_  */
#line 184 "src/asin.y"
                                     {
        if ((yyvsp[-2].cent) != T_ENTERO && (yyvsp[-2].cent) != T_ERROR) {
            yyerror("PRINT solo acepta expresiones de tipo entero");
        }
    }
#line 1458 "asin.c"
    break;

  case 38: /* instSelec: IF_ PARA_ expre PARC_ inst ELSE_ inst  */
#line 192 "src/asin.y"
                                            {
        if ((yyvsp[-4].cent) != T_ERROR) {
            if ((yyvsp[-4].cent) != T_LOGICO) {
                yyerror("La condición del IF debe ser de tipo lógico");
            }  
        }
    }
#line 1470 "asin.c"
    break;

  case 39: /* $@5: %empty  */
#line 202 "src/asin.y"
                                                     {
        if ((yyvsp[-2].cent) != T_ERROR){
            if ((yyvsp[-2].cent) != T_LOGICO) {
                yyerror("La condición del FOR debe ser de tipo lógico");
            }
        } 
        if ((yyvsp[-4].cent) != T_ERROR && (yyvsp[0].cent) != T_ERROR){
            if ((yyvsp[-4].cent) == T_ARRAY || (yyvsp[0].cent) == T_ARRAY) { yyerror("La expresion del 'for' ha de ser de tipo simple"); }
        }
    }
#line 1485 "asin.c"
    break;

  case 41: /* expreOP: %empty  */
#line 215 "src/asin.y"
      { (yyval.cent) = T_VACIO; }
#line 1491 "asin.c"
    break;

  case 42: /* expreOP: expre  */
#line 216 "src/asin.y"
            { (yyval.cent) = (yyvsp[0].cent); }
#line 1497 "asin.c"
    break;

  case 43: /* expre: expreLogic  */
#line 220 "src/asin.y"
                  { ((yyval.cent) = (yyvsp[0].cent)); }
#line 1503 "asin.c"
    break;

  case 44: /* expre: ID_ ASSIG_ expre  */
#line 221 "src/asin.y"
                       {
        (yyval.cent) = T_ERROR;
        SIMB simbolo = obtTdS((yyvsp[-2].ident));
        if ((yyvsp[0].cent) != T_ERROR){
            if (simbolo.t == T_ERROR) { yyerror("Variable no declarada"); } 
            else if (simbolo.t != (yyvsp[0].cent)) { yyerror("Error de tipo en la asignación"); }
            else if (simbolo.t != T_ERROR && (yyvsp[0].cent) != T_ERROR) { (yyval.cent) = simbolo.t; }
        }
    }
#line 1517 "asin.c"
    break;

  case 45: /* expre: ID_ CORCHETEA_ expre CORCHETEC_ ASSIG_ expre  */
#line 230 "src/asin.y"
                                                   {
        (yyval.cent) = T_ERROR;
        SIMB simbolo = obtTdS((yyvsp[-5].ident));
        if (simbolo.t != T_ARRAY) { yyerror("El identificador no es un array"); }
        else {
            DIM array = obtTdA(simbolo.ref);
            if ((yyvsp[0].cent) != T_ERROR) {
                if (array.telem != (yyvsp[0].cent)) { yyerror("Error de tipos en la asignación del array"); }
                else if ((yyvsp[-3].cent) != T_ENTERO){ yyerror("Error el indice del array tiene que ser un entero"); }
                else { (yyval.cent) = simbolo.t; }
            }
        }
    }
#line 1535 "asin.c"
    break;

  case 46: /* expreLogic: expreIgual  */
#line 246 "src/asin.y"
                 { (yyval.cent) = (yyvsp[0].cent); }
#line 1541 "asin.c"
    break;

  case 47: /* expreLogic: expreLogic opLogic expreIgual  */
#line 247 "src/asin.y"
                                    {
        (yyval.cent) = T_ERROR;
        if ((yyvsp[-2].cent) != T_ERROR && (yyvsp[0].cent) != T_ERROR){
            if ((yyvsp[-2].cent) != (yyvsp[0].cent)) { yyerror("Error de tipos en la expresión lógica, no son del mismo tipo"); }
            else if ((yyvsp[-2].cent) != T_LOGICO) { yyerror("Error tipos en la comparacion, deben ser expresiones logicas"); }
            else { (yyval.cent) = T_LOGICO; }
        }
    }
#line 1554 "asin.c"
    break;

  case 48: /* expreIgual: expreRel  */
#line 258 "src/asin.y"
               { (yyval.cent) = (yyvsp[0].cent); }
#line 1560 "asin.c"
    break;

  case 49: /* expreIgual: expreIgual opIgual expreRel  */
#line 259 "src/asin.y"
                                  {
        (yyval.cent) = T_ERROR;
        if ((yyvsp[-2].cent) != T_ERROR && (yyvsp[0].cent) != T_ERROR){
            if ((yyvsp[-2].cent) != (yyvsp[0].cent)) { yyerror("Error de tipos en la expresion de igualdad, no son del mismo tipo"); }
            else if ((yyvsp[-2].cent) != T_LOGICO || (yyvsp[-2].cent) != T_ENTERO) { yyerror("Error tipos en la comparacion, deben ser expresiones logicas o de enteros"); }
            else { (yyval.cent) = T_LOGICO; }
        }
    }
#line 1573 "asin.c"
    break;

  case 50: /* expreRel: expreAd  */
#line 270 "src/asin.y"
              { (yyval.cent) = (yyvsp[0].cent); }
#line 1579 "asin.c"
    break;

  case 51: /* expreRel: expreRel opRel expreAd  */
#line 271 "src/asin.y"
                             {
        (yyval.cent) = T_ERROR;
        if ((yyvsp[-2].cent) != T_ERROR && (yyvsp[0].cent) != T_ERROR){
            if ((yyvsp[-2].cent) != (yyvsp[0].cent)) { yyerror("Error de tipos en la epresión de relación, no son del mismo tipo"); }
            else if ((yyvsp[-2].cent) != T_ENTERO) { yyerror("Error tipos en la comparacion, deben ser expresiones de enteros"); }
            else { (yyval.cent) = T_LOGICO; }
        }
    }
#line 1592 "asin.c"
    break;

  case 52: /* expreAd: expreMul  */
#line 282 "src/asin.y"
               { (yyval.cent) = (yyvsp[0].cent); }
#line 1598 "asin.c"
    break;

  case 53: /* expreAd: expreAd opAd expreMul  */
#line 283 "src/asin.y"
                            {
        (yyval.cent) = T_ERROR;
        if ((yyvsp[-2].cent) != T_ERROR && (yyvsp[0].cent) != T_ERROR){
            if ((yyvsp[-2].cent) != (yyvsp[0].cent)) { yyerror("Error de tipos en la epresión de addición, no son del mismo tipo"); }
            else if ((yyvsp[-2].cent) != T_ENTERO) { yyerror("Error tipos en la comparacion, deben ser expresiones de enteros"); }
            else { (yyval.cent) = T_ENTERO; }
        }
    }
#line 1611 "asin.c"
    break;

  case 54: /* expreMul: expreUna  */
#line 294 "src/asin.y"
               { (yyval.cent) = (yyvsp[0].cent); }
#line 1617 "asin.c"
    break;

  case 55: /* expreMul: expreMul opMul expreUna  */
#line 295 "src/asin.y"
                              {
        (yyval.cent) = T_ERROR;
        if ((yyvsp[-2].cent) != T_ERROR && (yyvsp[0].cent) != T_ERROR){
            if ((yyvsp[-2].cent) != (yyvsp[0].cent)) { yyerror("Error de tipos en la expresión de multiplicación, no son del mismo tipo"); }
            else if ((yyvsp[-2].cent) != T_ENTERO) { yyerror("Error tipos en la comparacion, deben ser expresiones de enteros"); }
            else { (yyval.cent) = T_ENTERO; }
        }
    }
#line 1630 "asin.c"
    break;

  case 56: /* expreUna: expreSufi  */
#line 306 "src/asin.y"
                { (yyval.cent) = (yyvsp[0].cent); }
#line 1636 "asin.c"
    break;

  case 57: /* expreUna: opUna expreUna  */
#line 307 "src/asin.y"
                     {
        (yyval.cent) = T_ERROR;
        if ((yyvsp[0].cent) != T_ERROR){
            if ((yyvsp[0].cent) != T_ENTERO) { 
                if ((yyvsp[-1].cent) == OP_NOT) { yyerror("Incompatibilidad de tipos, no se puede negar un entero"); }
                else { (yyval.cent) == T_ENTERO; }
            }
            else if ((yyvsp[0].cent) == T_LOGICO) { 
                if ((yyvsp[-1].cent) == OP_SUMA || (yyvsp[-1].cent) == OP_RESTA) { yyerror("Incompatibilidad de tipos, no se puede sumar o restar un booleano"); }
                else { (yyval.cent) == T_LOGICO; }
            } else { yyerror("Error tipos en la epresion unaria, deben ser expresiones de enteros o lógico"); }
        }
    }
#line 1654 "asin.c"
    break;

  case 58: /* expreSufi: const  */
#line 323 "src/asin.y"
            { (yyval.cent) = (yyvsp[0].cent); }
#line 1660 "asin.c"
    break;

  case 59: /* expreSufi: PARA_ expre PARC_  */
#line 324 "src/asin.y"
                        { (yyval.cent) = (yyvsp[-1].cent); }
#line 1666 "asin.c"
    break;

  case 60: /* expreSufi: ID_  */
#line 325 "src/asin.y"
          {
        SIMB sim = obtTdS((yyvsp[0].ident));
        (yyval.cent) = T_ERROR;

        if (sim.t == T_ERROR) {
                yyerror("No existe ninguna variable con ese identificador.");
            } else { 
                (yyval.cent) = sim.t;
            }
    }
#line 1681 "asin.c"
    break;

  case 61: /* expreSufi: ID_ CORCHETEA_ expre CORCHETEC_  */
#line 335 "src/asin.y"
                                      {
        SIMB sim = obtTdS((yyvsp[-3].ident));
        (yyval.cent) = T_ERROR;

        if (sim.t == T_ERROR) {
                yyerror("No existe ninguna variable con ese identificador.");
        } else if ((yyvsp[-1].cent) != T_ENTERO) {
				yyerror("El indice para acceder a un vector debe ser un entero 0 o positivo.");
        } else { 
            DIM dim = obtTdA(sim.ref);
            (yyval.cent) = dim.telem;
        }
    }
#line 1699 "asin.c"
    break;

  case 62: /* expreSufi: ID_ PARA_ paramAct PARC_  */
#line 348 "src/asin.y"
                               {
        SIMB sim = obtTdS((yyvsp[-3].ident));

        (yyval.cent) = T_ERROR;
        
        if (sim.t == T_ERROR) { 
            yyerror("No existe ninguna variable con ese identificador."); 
        } else {
            INF inf = obtTdD(sim.ref);
            if (inf.tipo == T_ERROR) { yyerror("No existe ninguna funcion con ese identificador.");} 
            else {
                if (!cmpDom(sim.ref, (yyvsp[-1].lista).ref)) {
                    yyerror("Los parámetros actuales no coinciden con los declarados en la función.");
                } else {
                    (yyval.cent) = inf.tipo; // Tipo de retorno de la función
                }
             }
        }
    }
#line 1723 "asin.c"
    break;

  case 63: /* paramAct: %empty  */
#line 370 "src/asin.y"
      { (yyval.lista).ref = -1; }
#line 1729 "asin.c"
    break;

  case 64: /* paramAct: listParamAct  */
#line 371 "src/asin.y"
                   {(yyval.lista).ref = (yyvsp[0].lista).ref; }
#line 1735 "asin.c"
    break;

  case 65: /* listParamAct: expre  */
#line 375 "src/asin.y"
            { (yyval.lista).ref = insTdD(-1, (yyvsp[0].cent)); }
#line 1741 "asin.c"
    break;

  case 66: /* listParamAct: expre COMA_ listParamAct  */
#line 376 "src/asin.y"
                               { (yyval.lista).ref = insTdD((yyvsp[0].lista).ref, (yyvsp[-2].cent)); }
#line 1747 "asin.c"
    break;

  case 67: /* opLogic: AND_  */
#line 379 "src/asin.y"
                        {(yyval.cent) = OP_AND;}
#line 1753 "asin.c"
    break;

  case 68: /* opLogic: OR_  */
#line 380 "src/asin.y"
                        {(yyval.cent) = OP_OR;}
#line 1759 "asin.c"
    break;

  case 69: /* opIgual: IGUAL_  */
#line 383 "src/asin.y"
                        {(yyval.cent) = OP_IGUAL;}
#line 1765 "asin.c"
    break;

  case 70: /* opIgual: DISTINTO_  */
#line 384 "src/asin.y"
                        {(yyval.cent) = OP_DISTINTO;}
#line 1771 "asin.c"
    break;

  case 71: /* opRel: MAYOR_  */
#line 387 "src/asin.y"
                        {(yyval.cent) = OP_MAYOR;}
#line 1777 "asin.c"
    break;

  case 72: /* opRel: MENOR_  */
#line 388 "src/asin.y"
                        {(yyval.cent) = OP_MENOR;}
#line 1783 "asin.c"
    break;

  case 73: /* opRel: MAYOR_IGUAL_  */
#line 389 "src/asin.y"
                        {(yyval.cent) = OP_MAYORIG;}
#line 1789 "asin.c"
    break;

  case 74: /* opRel: MENOR_IGUAL_  */
#line 390 "src/asin.y"
                        {(yyval.cent) = OP_MENORIG;}
#line 1795 "asin.c"
    break;

  case 75: /* opAd: MAS_  */
#line 393 "src/asin.y"
                {(yyval.cent) = OP_SUMA;}
#line 1801 "asin.c"
    break;

  case 76: /* opAd: MENOS_  */
#line 394 "src/asin.y"
                {(yyval.cent) = OP_RESTA;}
#line 1807 "asin.c"
    break;

  case 77: /* opMul: POR_  */
#line 397 "src/asin.y"
                {(yyval.cent) = OP_MULT;}
#line 1813 "asin.c"
    break;

  case 78: /* opMul: DIV_  */
#line 398 "src/asin.y"
                {(yyval.cent) = OP_DIV;}
#line 1819 "asin.c"
    break;

  case 79: /* opUna: MAS_  */
#line 401 "src/asin.y"
                {(yyval.cent) = OP_SUMA;}
#line 1825 "asin.c"
    break;

  case 80: /* opUna: MENOS_  */
#line 402 "src/asin.y"
                {(yyval.cent) = OP_RESTA;}
#line 1831 "asin.c"
    break;

  case 81: /* opUna: NOT_  */
#line 403 "src/asin.y"
                {(yyval.cent) = OP_NOT;}
#line 1837 "asin.c"
    break;


#line 1841 "asin.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 405 "src/asin.y"
