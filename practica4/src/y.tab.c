/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "src/sintactico.y" /* yacc.c:339  */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// #include "tokens.tab.h"
//#include "y.tab.h"
#include "semantico.h"
#include "colores.h"

// Declaramos ’yyerror’ para que se pueda invocar desde lex (lexico.l)
int yylex();
void yyerror(const char *msg);

#define YYERROR_VERBOSE


#line 84 "src/y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_SRC_Y_TAB_H_INCLUDED
# define YY_YY_SRC_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    OP_OR = 258,
    OP_XOR = 259,
    OP_AND = 260,
    OP_IGUALDAD = 261,
    OP_RELACION = 262,
    MAS_MENOS = 263,
    MAS_MAS = 264,
    OP_LIST_CONCA = 265,
    OP_BIN_LISTA = 266,
    OP_GET_LIST = 267,
    OP_MULTI_DIV = 268,
    OP_UNARIO = 269,
    INICIO = 270,
    PAREN_IZQ = 271,
    PAREN_DER = 272,
    CORCH_IZQ = 273,
    CORCH_DER = 274,
    LLAVE_IZQ = 275,
    LLAVE_DER = 276,
    VAR_IZQ = 277,
    VAR_DER = 278,
    DELIMIT = 279,
    SEPAR = 280,
    TIPO = 281,
    TIPO_LIST = 282,
    IDENT = 283,
    CONST_BOOL = 284,
    CONST_CAR = 285,
    CONST_CADENA = 286,
    CONST_ENT = 287,
    CONST_REAL = 288,
    IGUAL = 289,
    COND_SI = 290,
    COND_OTRO = 291,
    BUCLE = 292,
    FOR_INI = 293,
    FOR_STOP = 294,
    FOR_STEP = 295,
    FOR_DO = 296,
    ENTRADA = 297,
    SALIDA = 298,
    DEVUELVE = 299,
    OP_INI_LIST = 300,
    OP_AVR_RETR = 301
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 182 "src/y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   376

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  180

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    92,    92,    94,    96,    96,    98,    99,   101,   102,
     104,   104,   105,   107,   108,   110,   112,   114,   115,   116,
     118,   119,   121,   121,   121,   123,   125,   125,   127,   128,
     129,   130,   132,   134,   135,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   148,   150,   151,   152,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   172,   173,   175,   176,
     177,   178,   179,   181,   182,   183,   184,   185,   187,   188,
     190,   191,   193,   194,   196,   197,   199,   200,   202,   204,
     206,   206,   208,   210,   211,   213,   214,   216,   218,   220
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OP_OR", "OP_XOR", "OP_AND",
  "OP_IGUALDAD", "OP_RELACION", "MAS_MENOS", "MAS_MAS", "OP_LIST_CONCA",
  "OP_BIN_LISTA", "OP_GET_LIST", "OP_MULTI_DIV", "OP_UNARIO", "INICIO",
  "PAREN_IZQ", "PAREN_DER", "CORCH_IZQ", "CORCH_DER", "LLAVE_IZQ",
  "LLAVE_DER", "VAR_IZQ", "VAR_DER", "DELIMIT", "SEPAR", "TIPO",
  "TIPO_LIST", "IDENT", "CONST_BOOL", "CONST_CAR", "CONST_CADENA",
  "CONST_ENT", "CONST_REAL", "IGUAL", "COND_SI", "COND_OTRO", "BUCLE",
  "FOR_INI", "FOR_STOP", "FOR_STEP", "FOR_DO", "ENTRADA", "SALIDA",
  "DEVUELVE", "OP_INI_LIST", "OP_AVR_RETR", "$accept", "Programa",
  "Cabecera", "Bloque", "$@1", "Declar_variables_locales",
  "Cuerpo_variables", "Declar_variables", "$@2", "Tipo", "Tipo_dato",
  "Tipo_lista", "Lista_ident", "Declar_funciones", "Cabecera_funcion",
  "$@3", "$@4", "Declar_funcion", "$@5", "Lista_parametros", "Parametro",
  "Sentencias", "Sentencia", "Sentencia_asig", "Lista_expresiones",
  "Expresion", "Funcion", "Constante", "Constante_lista", "Lista_bool",
  "Lista_car", "Lista_ent", "Lista_real", "Sentencia_if",
  "Sentencia_while", "Sentencia_for", "Sentencia_entrada", "$@6",
  "Sentencia_salida", "Lista_expr_cadena", "Expr_cadena",
  "Sentencia_return", "Sentencia_iterar", "Sentencia_comienzo", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301
};
# endif

#define YYPACT_NINF -164

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-164)))

#define YYTABLE_NINF -92

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -9,    -6,    13,    -3,     8,  -164,  -164,  -164,  -164,    -1,
      18,  -164,  -164,  -164,     2,    67,  -164,  -164,  -164,  -164,
       4,  -164,  -164,  -164,    12,    23,   266,   266,   266,   115,
      37,    -8,  -164,  -164,  -164,  -164,    22,    51,    60,  -164,
     210,   266,   266,  -164,  -164,  -164,   121,  -164,    71,    53,
    -164,  -164,  -164,  -164,  -164,  -164,    74,    81,    86,    92,
      94,  -164,    26,  -164,   103,  -164,  -164,   297,  -164,  -164,
    -164,  -164,  -164,    10,    77,    82,    84,  -164,   243,   266,
     266,   266,    66,    69,    12,  -164,   353,    95,  -164,   353,
     353,    -3,  -164,  -164,  -164,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,  -164,  -164,  -164,  -164,  -164,
    -164,   100,  -164,   102,  -164,  -164,   107,  -164,    93,  -164,
      99,  -164,    91,  -164,  -164,     6,   353,   353,   312,   327,
     266,    90,   210,  -164,   363,   280,   206,   168,   212,   127,
     342,   127,   127,  -164,  -164,  -164,  -164,  -164,  -164,  -164,
     130,   266,  -164,   266,   154,   154,   197,  -164,   266,   117,
     353,   353,   116,  -164,   266,   127,   129,    96,  -164,   154,
      76,  -164,   117,  -164,   117,  -164,   154,  -164,  -164,  -164
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     1,     4,     2,     3,     7,
       0,    21,    12,    15,     0,     0,     9,    10,    13,    14,
       0,    16,     6,     8,     0,    65,     0,     0,     0,     0,
       0,    62,    68,    69,    70,    71,     0,     0,     0,    90,
       0,     0,     0,    35,    26,    20,     0,    34,     0,     0,
      63,    64,    72,    37,    38,    39,     0,     0,     0,     0,
       0,    19,     0,    65,    62,    51,    50,     0,    77,    79,
      81,    83,    85,     0,     0,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    96,    95,    92,    94,    97,
      99,     0,     5,    33,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,    40,    41,    42,    43,
      44,     0,    11,     0,    49,    73,     0,    74,     0,    75,
       0,    76,     0,    23,    67,     0,    48,    45,     0,     0,
       0,     0,     0,    27,    55,    56,    57,    59,    58,    52,
       0,    54,    53,    60,    18,    17,    78,    80,    82,    84,
       0,     0,    66,     0,     0,     0,     0,    93,     0,    31,
      47,    46,    86,    88,     0,    61,     0,     0,    30,     0,
       0,    32,     0,    24,     0,    87,     0,    29,    28,    89
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -164,  -164,  -164,     1,  -164,  -164,  -164,   145,  -164,  -164,
     147,  -164,    83,  -164,  -164,  -164,  -164,  -164,  -164,  -164,
    -163,  -164,   -43,   131,  -164,   -26,  -164,  -164,  -164,  -164,
    -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,
      39,  -164,  -164,  -164
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    43,     9,    11,    15,    16,    24,    17,
      18,    19,    62,    20,    44,   123,   150,    45,    91,   167,
     168,    46,    47,    48,   125,    49,    50,    51,    52,    73,
      74,    75,    76,    53,    54,    55,    56,    84,    57,    87,
      88,    58,    59,    60
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      65,    66,    67,    93,     7,    25,     1,   151,    78,   177,
       4,   178,    26,     5,    86,    89,    90,     6,    27,    12,
      28,    10,    29,   152,     6,     8,    79,   111,    13,   115,
      30,   153,    31,    32,    33,   116,    34,    35,    80,    36,
      61,    37,    38,   -25,    13,    14,    39,    40,    41,    42,
     112,   113,   126,   127,   128,   129,    95,    96,    97,    98,
      99,   100,   101,   102,   103,    77,   104,    81,    12,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,    95,
      96,    97,    98,    99,   100,   101,   102,   103,    82,   104,
      22,   111,   133,    13,    14,    94,   117,   172,   106,   105,
      79,   119,   118,   121,   156,   107,    86,   120,   130,   122,
     108,   162,   163,   173,   -91,   113,   109,   176,   110,    78,
     132,   174,    63,   147,   149,   160,   175,   161,   144,    26,
     145,   148,   165,   179,    68,    27,   146,    28,   170,    29,
     104,     6,    92,   166,    69,    70,   159,    71,    72,    31,
      32,    33,   169,    34,    35,    63,    36,   171,    37,    38,
      23,    21,    26,    39,    40,    41,    42,   131,    27,    83,
      28,   157,    29,     0,     6,    99,   100,   101,   102,   103,
       0,   104,    31,    32,    33,     0,    34,    35,     0,    36,
       0,    37,    38,     0,     0,     0,    39,    40,    41,    42,
      95,    96,    97,    98,    99,   100,   101,   102,   103,     0,
     104,    63,    98,    99,   100,   101,   102,   103,    26,   104,
     100,   101,   102,   103,    27,   104,    28,     0,    29,     0,
       0,     0,     0,     0,     0,     0,     0,   164,    64,    32,
      33,    85,    34,    35,    63,     0,     0,     0,     0,     0,
       0,    26,     0,     0,     0,     0,     0,    27,     0,    28,
     124,    29,     0,     0,     0,     0,     0,    63,     0,     0,
       0,    64,    32,    33,    26,    34,    35,     0,     0,     0,
      27,     0,    28,     0,    29,    97,    98,    99,   100,   101,
     102,   103,     0,   104,    64,    32,    33,     0,    34,    35,
      95,    96,    97,    98,    99,   100,   101,   102,   103,     0,
     104,     0,     0,     0,   114,    95,    96,    97,    98,    99,
     100,   101,   102,   103,     0,   104,     0,     0,     0,   154,
      95,    96,    97,    98,    99,   100,   101,   102,   103,     0,
     104,     0,     0,     0,   155,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   158,   104,    95,    96,    97,    98,
      99,   100,   101,   102,   103,     0,   104,    96,    97,    98,
      99,   100,   101,   102,   103,     0,   104
};

static const yytype_int16 yycheck[] =
{
      26,    27,    28,    46,     3,     1,    15,     1,    16,   172,
      16,   174,     8,     0,    40,    41,    42,    20,    14,     1,
      16,    22,    18,    17,    20,    17,    34,     1,    26,    19,
      26,    25,    28,    29,    30,    25,    32,    33,    16,    35,
      28,    37,    38,    20,    26,    27,    42,    43,    44,    45,
      24,    25,    78,    79,    80,    81,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    28,    13,    16,     1,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    28,    13,
      23,     1,    91,    26,    27,    24,    19,     1,    24,    46,
      34,    19,    25,    19,   130,    24,   132,    25,    39,    25,
      24,   154,   155,    17,    24,    25,    24,    41,    24,    16,
      25,    25,     1,    30,    33,   151,   169,   153,    28,     8,
      28,    32,   158,   176,    19,    14,    29,    16,   164,    18,
      13,    20,    21,    26,    29,    30,    16,    32,    33,    28,
      29,    30,    36,    32,    33,     1,    35,    28,    37,    38,
      15,    14,     8,    42,    43,    44,    45,    84,    14,    38,
      16,   132,    18,    -1,    20,     7,     8,     9,    10,    11,
      -1,    13,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    -1,    -1,    -1,    42,    43,    44,    45,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,     1,     6,     7,     8,     9,    10,    11,     8,    13,
       8,     9,    10,    11,    14,    13,    16,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    28,    29,
      30,    31,    32,    33,     1,    -1,    -1,    -1,    -1,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    -1,    14,    -1,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    28,    29,    30,     8,    32,    33,    -1,    -1,    -1,
      14,    -1,    16,    -1,    18,     5,     6,     7,     8,     9,
      10,    11,    -1,    13,    28,    29,    30,    -1,    32,    33,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    -1,    -1,    -1,    17,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    13,    -1,    -1,    -1,    17,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    -1,    -1,    -1,    17,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    48,    49,    16,     0,    20,    50,    17,    51,
      22,    52,     1,    26,    27,    53,    54,    56,    57,    58,
      60,    57,    23,    54,    55,     1,     8,    14,    16,    18,
      26,    28,    29,    30,    32,    33,    35,    37,    38,    42,
      43,    44,    45,    50,    61,    64,    68,    69,    70,    72,
      73,    74,    75,    80,    81,    82,    83,    85,    88,    89,
      90,    28,    59,     1,    28,    72,    72,    72,    19,    29,
      30,    32,    33,    76,    77,    78,    79,    28,    16,    34,
      16,    16,    28,    70,    84,    31,    72,    86,    87,    72,
      72,    65,    21,    69,    24,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    13,    46,    24,    24,    24,    24,
      24,     1,    24,    25,    17,    19,    25,    19,    25,    19,
      25,    19,    25,    62,    17,    71,    72,    72,    72,    72,
      39,    59,    25,    50,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    28,    28,    29,    30,    32,    33,
      63,     1,    17,    25,    17,    17,    72,    87,    12,    16,
      72,    72,    69,    69,    40,    72,    26,    66,    67,    36,
      72,    28,     1,    17,    25,    69,    41,    67,    67,    69
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    51,    50,    52,    52,    53,    53,
      55,    54,    54,    56,    56,    57,    58,    59,    59,    59,
      60,    60,    62,    63,    61,    61,    65,    64,    66,    66,
      66,    66,    67,    68,    68,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    70,    71,    71,    71,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    73,    73,    74,    74,
      74,    74,    74,    75,    75,    75,    75,    75,    76,    76,
      77,    77,    78,    78,    79,    79,    80,    80,    81,    82,
      84,    83,    85,    86,    86,    87,    87,    88,    89,    90
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     0,     6,     3,     0,     2,     1,
       0,     4,     1,     1,     1,     1,     2,     3,     3,     1,
       2,     0,     0,     0,     7,     1,     0,     3,     3,     3,
       1,     0,     2,     2,     1,     1,     2,     1,     1,     1,
       2,     2,     2,     2,     2,     3,     3,     3,     1,     3,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     5,     1,     1,     1,     1,     4,     3,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     2,     3,     1,
       3,     1,     3,     1,     3,     1,     5,     7,     5,     8,
       0,     3,     2,     3,     1,     1,     1,     2,     2,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 4:
#line 96 "src/sintactico.y" /* yacc.c:1646  */
    {addMarca();}
#line 1433 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 96 "src/sintactico.y" /* yacc.c:1646  */
    {limpiarBloque();}
#line 1439 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 104 "src/sintactico.y" /* yacc.c:1646  */
    {setTipo((yyvsp[0]));}
#line 1445 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 107 "src/sintactico.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[0]).type;}
#line 1451 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 108 "src/sintactico.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[0]).type;}
#line 1457 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 110 "src/sintactico.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[0]).type;}
#line 1463 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 112 "src/sintactico.y" /* yacc.c:1646  */
    {compruebaTipoLista((yyvsp[0]),&(yyval));}
#line 1469 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 114 "src/sintactico.y" /* yacc.c:1646  */
    {addVar((yyvsp[0]));}
#line 1475 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 116 "src/sintactico.y" /* yacc.c:1646  */
    {addVar((yyvsp[0]));}
#line 1481 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 121 "src/sintactico.y" /* yacc.c:1646  */
    {decParam=1;}
#line 1487 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 121 "src/sintactico.y" /* yacc.c:1646  */
    {addFuncion((yyvsp[-1]));}
#line 1493 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 122 "src/sintactico.y" /* yacc.c:1646  */
    { actualizarNparam((yyvsp[-6])); nParam = 0; decParam = 0; }
#line 1499 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 125 "src/sintactico.y" /* yacc.c:1646  */
    { funcion=1;}
#line 1505 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 125 "src/sintactico.y" /* yacc.c:1646  */
    { funcion=0;}
#line 1511 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 132 "src/sintactico.y" /* yacc.c:1646  */
    {nParam++; setTipo((yyvsp[-1])); addParametro((yyvsp[0])); }
#line 1517 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 135 "src/sintactico.y" /* yacc.c:1646  */
    {printTS();}
#line 1523 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 148 "src/sintactico.y" /* yacc.c:1646  */
    {compruebaAsignacion((yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]),&(yyval));}
#line 1529 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 150 "src/sintactico.y" /* yacc.c:1646  */
    {nParam++;addPar((yyvsp[0]));}
#line 1535 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 151 "src/sintactico.y" /* yacc.c:1646  */
    {nParam++;addPar((yyvsp[0]));}
#line 1541 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 152 "src/sintactico.y" /* yacc.c:1646  */
    {nParam =1; addPar((yyvsp[0]));}
#line 1547 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 154 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[-1]).type;}
#line 1553 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 155 "src/sintactico.y" /* yacc.c:1646  */
    {compruebaUnario((yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1559 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 156 "src/sintactico.y" /* yacc.c:1646  */
    {compruebaSigno((yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1565 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 157 "src/sintactico.y" /* yacc.c:1646  */
    {compruebaSumaBin((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1571 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 158 "src/sintactico.y" /* yacc.c:1646  */
    {compruebaListaBin((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1577 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 159 "src/sintactico.y" /* yacc.c:1646  */
    {compruebaListaConca((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1583 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 160 "src/sintactico.y" /* yacc.c:1646  */
    {compruebaBooleanos((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1589 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 161 "src/sintactico.y" /* yacc.c:1646  */
    {compruebaBooleanos((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1595 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 162 "src/sintactico.y" /* yacc.c:1646  */
    {compruebaBooleanos((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1601 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 163 "src/sintactico.y" /* yacc.c:1646  */
    {compruebaRel((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1607 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 164 "src/sintactico.y" /* yacc.c:1646  */
    {compruebaRel((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1613 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 165 "src/sintactico.y" /* yacc.c:1646  */
    {compruebaProducto((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1619 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 166 "src/sintactico.y" /* yacc.c:1646  */
    {compruebaListaGet((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), &(yyval)); }
#line 1625 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 167 "src/sintactico.y" /* yacc.c:1646  */
    {decVar = 0; compruebaTipoIdentificador((yyvsp[0]),&(yyval));}
#line 1631 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 168 "src/sintactico.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[0]).type;}
#line 1637 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 169 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type;}
#line 1643 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 172 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaLlamada((yyvsp[-3]), &(yyval)); nParam=0; }
#line 1649 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 173 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaLlamada((yyvsp[-2]), &(yyval)); }
#line 1655 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 175 "src/sintactico.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[0]).type;}
#line 1661 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 176 "src/sintactico.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[0]).type;}
#line 1667 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 177 "src/sintactico.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[0]).type;}
#line 1673 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 178 "src/sintactico.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[0]).type;}
#line 1679 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 179 "src/sintactico.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[0]).type;}
#line 1685 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 181 "src/sintactico.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[-1]).type;}
#line 1691 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 182 "src/sintactico.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[-1]).type;}
#line 1697 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 183 "src/sintactico.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[-1]).type;}
#line 1703 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 184 "src/sintactico.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[-1]).type;}
#line 1709 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 188 "src/sintactico.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[0]).type;}
#line 1715 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 191 "src/sintactico.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[0]).type;}
#line 1721 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 194 "src/sintactico.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[0]).type;}
#line 1727 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 197 "src/sintactico.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[0]).type;}
#line 1733 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 199 "src/sintactico.y" /* yacc.c:1646  */
    {compruebaCondicion((yyvsp[-2]));}
#line 1739 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 200 "src/sintactico.y" /* yacc.c:1646  */
    {compruebaCondicion((yyvsp[-4]));}
#line 1745 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 202 "src/sintactico.y" /* yacc.c:1646  */
    {compruebaCondicion((yyvsp[-2]));}
#line 1751 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 206 "src/sintactico.y" /* yacc.c:1646  */
    {decVar=-1;}
#line 1757 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 206 "src/sintactico.y" /* yacc.c:1646  */
    {decVar=0;}
#line 1763 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 216 "src/sintactico.y" /* yacc.c:1646  */
    {compruebaDevuelve((yyvsp[0]),&(yyval));}
#line 1769 "src/y.tab.c" /* yacc.c:1646  */
    break;


#line 1773 "src/y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 221 "src/sintactico.y" /* yacc.c:1906  */


// Aqui incluimos el fichero generado por el ’lex’ que implementa la función ’yylex’
#ifdef DOSWINDOWS	// Variable de entorno que indica la plataforma
    #include "lexyy.c"
#else
    #include "lex.yy.c"
#endif

// Implementación de la función yyerror: Escribimos el mensaje de error en pantalla
void yyerror(const char *msg){
	fprintf(stderr, "%sLínea %d:%s %s\n", _CC_RED, yylineno, _CC_RESET, msg);
}

//yacc -d -v calc.y ; lex calc.lex ; gcc y.tab.c lex.yy.c -lfl ; ./a.out
