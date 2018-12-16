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
#include "generacion.h"

// Declaramos ’yyerror’ para que se pueda invocar desde lex (lexico.l)
int yylex();
void yyerror(const char *msg);

#define YYERROR_VERBOSE


#line 85 "src/y.tab.c" /* yacc.c:339  */

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

#line 183 "src/y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   321

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  191

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
       0,    93,    93,    93,    93,    95,    97,    97,   102,   103,
     105,   106,   108,   108,   109,   111,   112,   114,   116,   118,
     119,   120,   122,   123,   125,   125,   127,   129,   129,   131,
     131,   132,   133,   134,   136,   138,   139,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   152,   154,   155,
     156,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   176,   177,
     179,   180,   181,   182,   183,   185,   186,   187,   188,   189,
     191,   192,   194,   195,   197,   198,   200,   201,   203,   205,
     206,   206,   208,   209,   208,   212,   212,   213,   214,   214,
     212,   217,   217,   219,   221,   222,   224,   225,   227,   229,
     231
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
  "DEVUELVE", "OP_INI_LIST", "OP_AVR_RETR", "$accept", "Programa", "$@1",
  "$@2", "Cabecera", "Bloque", "$@3", "Declar_variables_locales",
  "Cuerpo_variables", "Declar_variables", "$@4", "Tipo", "Tipo_dato",
  "Tipo_lista", "Lista_ident", "Declar_funciones", "Cabecera_funcion",
  "$@5", "Declar_funcion", "$@6", "Lista_parametros", "$@7", "Parametro",
  "Sentencias", "Sentencia", "Sentencia_asig", "Lista_expresiones",
  "Expresion", "Funcion", "Constante", "Constante_lista", "Lista_bool",
  "Lista_car", "Lista_ent", "Lista_real", "Condicion_if", "Sentencia_if",
  "$@8", "Sentencia_while", "$@9", "$@10", "Sentencia_for", "$@11", "$@12",
  "$@13", "$@14", "$@15", "Sentencia_entrada", "$@16", "Sentencia_salida",
  "Lista_expr_cadena", "Expr_cadena", "Sentencia_return",
  "Sentencia_iterar", "Sentencia_comienzo", YY_NULLPTR
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

#define YYPACT_NINF -165

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-165)))

#define YYTABLE_NINF -103

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -165,     9,    -9,  -165,     5,  -165,    -4,     8,  -165,  -165,
    -165,     3,    18,  -165,  -165,  -165,    12,   130,  -165,  -165,
    -165,  -165,     4,  -165,  -165,  -165,    15,    20,   197,   197,
     197,   108,    24,    -8,  -165,  -165,  -165,  -165,    52,  -165,
    -165,  -165,    84,   197,   197,  -165,  -165,  -165,   131,  -165,
      55,    53,  -165,  -165,  -165,   164,  -165,  -165,  -165,    58,
      60,    69,    71,    72,  -165,    26,  -165,    89,  -165,  -165,
     228,  -165,  -165,  -165,  -165,  -165,    10,    61,    62,    78,
    -165,    93,   197,   197,    90,    92,    15,  -165,   284,    99,
    -165,   284,   284,     8,  -165,  -165,  -165,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,  -165,    82,  -165,
    -165,  -165,  -165,  -165,   101,  -165,   106,  -165,  -165,   107,
    -165,   112,  -165,   114,  -165,   115,   134,  -165,     6,   284,
     284,   243,   197,   120,  -165,    64,    84,  -165,   294,   211,
     302,   178,   308,   142,   273,   142,   142,  -165,  -165,  -165,
    -165,  -165,  -165,  -165,  -165,   136,   197,  -165,   197,  -165,
     258,   128,  -165,   197,   164,   143,    66,  -165,   284,   284,
    -165,   197,   142,  -165,  -165,   136,  -165,  -165,   164,   284,
    -165,   136,  -165,   137,  -165,  -165,   197,   284,   129,   164,
    -165
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,     3,     0,     0,     5,     6,
       4,     9,     0,    23,    14,    17,     0,     0,    11,    12,
      15,    16,     0,    18,     8,    10,     0,    67,     0,     0,
       0,     0,     0,    64,    70,    71,    72,    73,     0,    92,
      95,   101,     0,     0,     0,    37,    27,    22,     0,    36,
       0,     0,    65,    66,    74,     0,    39,    40,    41,     0,
       0,     0,     0,     0,    21,     0,    67,    64,    53,    52,
       0,    79,    81,    83,    85,    87,     0,     0,     0,     0,
      24,     0,     0,     0,     0,     0,     0,   107,   106,   103,
     105,   108,   110,     0,     7,    35,    38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   109,    89,    42,
      43,    44,    45,    46,     0,    13,     0,    51,    75,     0,
      76,     0,    77,     0,    78,     0,     0,    69,     0,    50,
      47,     0,     0,     0,    96,     0,     0,    28,    57,    58,
      59,    61,    60,    54,     0,    56,    55,    62,    90,    20,
      19,    80,    82,    84,    86,    33,     0,    68,     0,    88,
       0,     0,   104,     0,     0,     0,     0,    32,    49,    48,
      93,     0,    63,    91,    34,     0,    25,    29,     0,    97,
      31,     0,    94,     0,    30,    98,     0,    99,     0,     0,
     100
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -165,  -165,  -165,  -165,  -165,    -3,  -165,  -165,  -165,   162,
    -165,  -165,   165,  -165,    97,  -165,  -165,  -165,  -165,  -165,
    -165,  -165,  -164,  -165,   -45,   105,  -165,   -28,  -165,  -165,
    -165,  -165,  -165,  -165,  -165,  -165,  -165,  -165,  -165,  -165,
    -165,  -165,  -165,  -165,  -165,  -165,  -165,  -165,  -165,  -165,
    -165,    59,  -165,  -165,  -165
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     7,     5,    45,    11,    13,    17,    18,
      26,    19,    20,    21,    65,    22,    46,   126,    47,    93,
     166,   181,   167,    48,    49,    50,   128,    51,    52,    53,
      54,    76,    77,    78,    79,    55,    56,   164,    57,    84,
     178,    58,    85,   161,   183,   186,   188,    59,    86,    60,
      89,    90,    61,    62,    63
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      68,    69,    70,    95,    10,    27,     4,   156,    81,     3,
     108,   180,    28,     8,    88,    91,    92,   184,    29,    14,
      30,     6,    31,   157,     9,    12,    82,   114,     9,   118,
      32,   158,    33,    34,    35,   119,    36,    37,    15,    38,
     -26,    39,    40,    64,    15,    16,    41,    42,    43,    44,
     115,   116,    80,   129,   130,   131,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   114,   106,   175,    83,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,    96,
     120,   122,   109,   176,   110,    66,   121,   123,  -102,   116,
     137,   177,    28,   111,    66,   112,   113,   124,    29,   107,
      30,    28,    31,   125,   160,    81,   132,    29,    88,    30,
     127,    31,    67,    34,    35,    87,    36,    37,   148,   173,
     133,    67,    34,    35,   136,    36,    37,    71,   168,   149,
     169,    14,    66,   182,   150,   172,   151,    72,    73,    28,
      74,    75,   152,   179,   190,    29,   153,    30,   154,    31,
     155,     9,    94,    24,    82,   106,    15,    16,   187,    33,
      34,    35,   165,    36,    37,    66,    38,   171,    39,    40,
     189,   174,    28,    41,    42,    43,    44,   185,    29,    25,
      30,    23,    31,   135,     9,   101,   102,   103,   104,   105,
     134,   106,    33,    34,    35,   162,    36,    37,    66,    38,
       0,    39,    40,     0,     0,    28,    41,    42,    43,    44,
       0,    29,     0,    30,     0,    31,    99,   100,   101,   102,
     103,   104,   105,     0,   106,    67,    34,    35,     0,    36,
      37,    97,    98,    99,   100,   101,   102,   103,   104,   105,
       0,   106,     0,     0,     0,   117,    97,    98,    99,   100,
     101,   102,   103,   104,   105,     0,   106,     0,     0,     0,
     159,    97,    98,    99,   100,   101,   102,   103,   104,   105,
       0,   106,     0,     0,     0,   170,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   163,   106,    97,    98,    99,
     100,   101,   102,   103,   104,   105,     0,   106,    98,    99,
     100,   101,   102,   103,   104,   105,     0,   106,   100,   101,
     102,   103,   104,   105,     0,   106,   102,   103,   104,   105,
       0,   106
};

static const yytype_int16 yycheck[] =
{
      28,    29,    30,    48,     7,     1,    15,     1,    16,     0,
      55,   175,     8,    17,    42,    43,    44,   181,    14,     1,
      16,    16,    18,    17,    20,    22,    34,     1,    20,    19,
      26,    25,    28,    29,    30,    25,    32,    33,    26,    35,
      20,    37,    38,    28,    26,    27,    42,    43,    44,    45,
      24,    25,    28,    81,    82,    83,     3,     4,     5,     6,
       7,     8,     9,    10,    11,     1,    13,     1,    16,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,    24,
      19,    19,    24,    17,    24,     1,    25,    25,    24,    25,
      93,    25,     8,    24,     1,    24,    24,    19,    14,    46,
      16,     8,    18,    25,   132,    16,    16,    14,   136,    16,
      17,    18,    28,    29,    30,    31,    32,    33,    36,   164,
      28,    28,    29,    30,    25,    32,    33,    19,   156,    28,
     158,     1,     1,   178,    28,   163,    29,    29,    30,     8,
      32,    33,    30,   171,   189,    14,    32,    16,    33,    18,
      16,    20,    21,    23,    34,    13,    26,    27,   186,    28,
      29,    30,    26,    32,    33,     1,    35,    39,    37,    38,
      41,    28,     8,    42,    43,    44,    45,    40,    14,    17,
      16,    16,    18,    86,    20,     7,     8,     9,    10,    11,
      85,    13,    28,    29,    30,   136,    32,    33,     1,    35,
      -1,    37,    38,    -1,    -1,     8,    42,    43,    44,    45,
      -1,    14,    -1,    16,    -1,    18,     5,     6,     7,     8,
       9,    10,    11,    -1,    13,    28,    29,    30,    -1,    32,
      33,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    13,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    13,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    13,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    13,     6,     7,
       8,     9,    10,    11,    -1,    13,     8,     9,    10,    11,
      -1,    13
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    48,    49,     0,    15,    51,    16,    50,    17,    20,
      52,    53,    22,    54,     1,    26,    27,    55,    56,    58,
      59,    60,    62,    59,    23,    56,    57,     1,     8,    14,
      16,    18,    26,    28,    29,    30,    32,    33,    35,    37,
      38,    42,    43,    44,    45,    52,    63,    65,    70,    71,
      72,    74,    75,    76,    77,    82,    83,    85,    88,    94,
      96,    99,   100,   101,    28,    61,     1,    28,    74,    74,
      74,    19,    29,    30,    32,    33,    78,    79,    80,    81,
      28,    16,    34,    16,    86,    89,    95,    31,    74,    97,
      98,    74,    74,    66,    21,    71,    24,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    13,    46,    71,    24,
      24,    24,    24,    24,     1,    24,    25,    17,    19,    25,
      19,    25,    19,    25,    19,    25,    64,    17,    73,    74,
      74,    74,    16,    28,    72,    61,    25,    52,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    36,    28,
      28,    29,    30,    32,    33,    16,     1,    17,    25,    17,
      74,    90,    98,    12,    84,    26,    67,    69,    74,    74,
      17,    39,    74,    71,    28,     1,    17,    25,    87,    74,
      69,    68,    71,    91,    69,    40,    92,    74,    93,    41,
      71
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    49,    50,    48,    51,    53,    52,    54,    54,
      55,    55,    57,    56,    56,    58,    58,    59,    60,    61,
      61,    61,    62,    62,    64,    63,    63,    66,    65,    68,
      67,    67,    67,    67,    69,    70,    70,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    72,    73,    73,
      73,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    75,    75,
      76,    76,    76,    76,    76,    77,    77,    77,    77,    77,
      78,    78,    79,    79,    80,    80,    81,    81,    82,    83,
      84,    83,    86,    87,    85,    89,    90,    91,    92,    93,
      88,    95,    94,    96,    97,    97,    98,    98,    99,   100,
     101
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     4,     3,     0,     6,     3,     0,
       2,     1,     0,     4,     1,     1,     1,     1,     2,     3,
       3,     1,     2,     0,     0,     6,     1,     0,     3,     0,
       4,     3,     1,     0,     2,     2,     1,     1,     2,     1,
       1,     1,     2,     2,     2,     2,     2,     3,     3,     3,
       1,     3,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     5,     1,     1,     1,     1,     4,     3,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     2,
       3,     1,     3,     1,     3,     1,     3,     1,     4,     2,
       0,     5,     0,     0,     7,     0,     0,     0,     0,     0,
      13,     0,     3,     2,     3,     1,     1,     1,     2,     2,
       2
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
        case 2:
#line 93 "src/sintactico.y" /* yacc.c:1646  */
    { generarFichero(); }
#line 1439 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 93 "src/sintactico.y" /* yacc.c:1646  */
    { escribirLibrerias(); }
#line 1445 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 93 "src/sintactico.y" /* yacc.c:1646  */
    { cerrarFichero(); }
#line 1451 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 97 "src/sintactico.y" /* yacc.c:1646  */
    { addMarca(); }
#line 1457 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 100 "src/sintactico.y" /* yacc.c:1646  */
    { limpiarBloque(); }
#line 1463 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 102 "src/sintactico.y" /* yacc.c:1646  */
    { escribirSaltoLinea(); if (!hay_principal) introducirMain(); }
#line 1469 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 103 "src/sintactico.y" /* yacc.c:1646  */
    { if (!hay_principal) introducirMain(); }
#line 1475 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 108 "src/sintactico.y" /* yacc.c:1646  */
    { declararTipo((yyvsp[0])); setTipo((yyvsp[0])); }
#line 1481 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 108 "src/sintactico.y" /* yacc.c:1646  */
    { escribirPuntoYComa(); }
#line 1487 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 111 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type; }
#line 1493 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 112 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type; }
#line 1499 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 114 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type; }
#line 1505 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 116 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaTipoLista((yyvsp[0]), &(yyval)); }
#line 1511 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 118 "src/sintactico.y" /* yacc.c:1646  */
    { addVar((yyvsp[0])); escribirComa(); declararVariable((yyvsp[0])); leer((yyvsp[-2])); }
#line 1517 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 120 "src/sintactico.y" /* yacc.c:1646  */
    { addVar((yyvsp[0])); declararVariable((yyvsp[0])); leer((yyvsp[0])); }
#line 1523 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 125 "src/sintactico.y" /* yacc.c:1646  */
    { generarFunciones(); declararTipo((yyvsp[-1])); declararVariable((yyvsp[0])); decParam = 1; addFuncion((yyvsp[0])); escribirParentesis(0);/**/ }
#line 1529 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 126 "src/sintactico.y" /* yacc.c:1646  */
    { escribirParentesis(1);/**/ actualizarNparam((yyvsp[-5])); nParam = 0; decParam = 0; }
#line 1535 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 129 "src/sintactico.y" /* yacc.c:1646  */
    { funcion = 1; escribirSaltoLinea(); abrirBloque(); }
#line 1541 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 129 "src/sintactico.y" /* yacc.c:1646  */
    { funcion = 0; cerrarBloque(); cerrarFunciones();/*Da conflicto*/ }
#line 1547 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 131 "src/sintactico.y" /* yacc.c:1646  */
    { escribirComa(); }
#line 1553 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 136 "src/sintactico.y" /* yacc.c:1646  */
    { nParam++; setTipo((yyvsp[-1])); declararTipo((yyvsp[-1])); addParametro((yyvsp[0])); declararVariable((yyvsp[0])); }
#line 1559 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 152 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaAsignacion((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); generarAsignacion((yyvsp[-2]), (yyvsp[0])); if (var_control) guardarControl((yyvsp[-2]));/**/ escribirSaltoLinea(); }
#line 1565 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 154 "src/sintactico.y" /* yacc.c:1646  */
    { nParam++; addPar((yyvsp[0])); ampliarLexFuncion((yyvsp[-2]), coma, &(yyval)); ampliarLexFuncion((yyval), (yyvsp[0]), &(yyval)); }
#line 1571 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 155 "src/sintactico.y" /* yacc.c:1646  */
    { nParam++; addPar((yyvsp[0])); }
#line 1577 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 156 "src/sintactico.y" /* yacc.c:1646  */
    { nParam =1; addPar((yyvsp[0])); }
#line 1583 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 158 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[-1]).type; }
#line 1589 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 159 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaUnario((yyvsp[-1]), (yyvsp[0]), &(yyval)); generarUnario((yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1595 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 160 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaSigno((yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1601 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 161 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaSumaBin((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); generarBinario((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0]), &(yyval)); }
#line 1607 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 162 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaListaBin((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); generarBinario((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0]), &(yyval)); }
#line 1613 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 163 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaListaConca((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); generarBinario((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0]), &(yyval)); }
#line 1619 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 164 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaBooleanos((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); generarBinario((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0]), &(yyval)); }
#line 1625 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 165 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaBooleanos((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); generarBinario((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0]), &(yyval)); }
#line 1631 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 166 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaBooleanos((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); generarBinario((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0]), &(yyval)); }
#line 1637 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 167 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaRel((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); generarBinario((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0]), &(yyval)); }
#line 1643 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 168 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaRel((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); generarBinario((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0]), &(yyval)); }
#line 1649 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 169 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaProducto((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); generarBinario((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0]), &(yyval)); }
#line 1655 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 170 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaListaGet((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), &(yyval)); }
#line 1661 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 171 "src/sintactico.y" /* yacc.c:1646  */
    { decVar = 0; compruebaTipoIdentificador((yyvsp[0]), &(yyval)); }
#line 1667 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 172 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type; }
#line 1673 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 173 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type; }
#line 1679 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 176 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaLlamada((yyvsp[-3]), &(yyval)); nParam = 0; ampliarLexFuncion((yyvsp[-3]), (yyvsp[-2]), &(yyval)); ampliarLexFuncion((yyval), (yyvsp[-1]), &(yyval)); ampliarLexFuncion((yyval), (yyvsp[0]), &(yyval)); }
#line 1685 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 177 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaLlamada((yyvsp[-2]), &(yyval)); ampliarLexFuncion((yyvsp[-2]), (yyvsp[-1]), &(yyval)); ampliarLexFuncion((yyval), (yyvsp[0]), &(yyval)); }
#line 1691 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 179 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type; }
#line 1697 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 180 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type; }
#line 1703 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 181 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type; }
#line 1709 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 182 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type; }
#line 1715 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 183 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type; }
#line 1721 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 185 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[-1]).type; }
#line 1727 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 186 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[-1]).type; }
#line 1733 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 187 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[-1]).type; }
#line 1739 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 188 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[-1]).type; }
#line 1745 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 192 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type; }
#line 1751 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 195 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type; }
#line 1757 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 198 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type; }
#line 1763 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 201 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type; }
#line 1769 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 203 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaCondicion((yyvsp[-1])); addATabla((yyvsp[-1])); emitirSaltoElse(); abrirBloque();/**/ }
#line 1775 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 205 "src/sintactico.y" /* yacc.c:1646  */
    { cerrarBloque(); escribirEtiquetaElse(); quitarDeTabla(); }
#line 1781 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 206 "src/sintactico.y" /* yacc.c:1646  */
    { emitirSaltoSalida(); cerrarBloque(); escribirEtiquetaElse(); }
#line 1787 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 206 "src/sintactico.y" /* yacc.c:1646  */
    { escribirEtiquetaSalida(); quitarDeTabla(); }
#line 1793 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 208 "src/sintactico.y" /* yacc.c:1646  */
    { addATablaWhileRepeat((yyvsp[0])); escribirEtiquetaEntrada(); }
#line 1799 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 209 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaCondicion((yyvsp[-1])); escribirNombreExpresionControl((yyvsp[-1])); saltoSalidaWhile(); abrirBloque(); }
#line 1805 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 210 "src/sintactico.y" /* yacc.c:1646  */
    { saltoEntradaWhileRepeat(); cerrarBloque(); escribirEtiquetaSalida(); quitarDeTabla(); }
#line 1811 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 212 "src/sintactico.y" /* yacc.c:1646  */
    { addATablaWhileRepeat((yyvsp[0])); var_control = 1;/**/ }
#line 1817 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 212 "src/sintactico.y" /* yacc.c:1646  */
    { var_control = 0;/**/ escribirEtiquetaEntrada(); }
#line 1823 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 213 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaCondicion((yyvsp[0])); escribirNombreExpresionControl((yyvsp[0])); saltoSalidaWhile(); abrirBloque(); }
#line 1829 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 214 "src/sintactico.y" /* yacc.c:1646  */
    { generarTemporal(); }
#line 1835 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 214 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaTipos(control_name, (yyvsp[0])); generarAsignacion(control_name, (yyvsp[0])); cerrarTemporal(); }
#line 1841 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 215 "src/sintactico.y" /* yacc.c:1646  */
    { rescatarInfoTemporal(); saltoEntradaWhileRepeat(); cerrarBloque(); escribirEtiquetaSalida(); quitarDeTabla(); }
#line 1847 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 217 "src/sintactico.y" /* yacc.c:1646  */
    { decVar = -1; }
#line 1853 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 217 "src/sintactico.y" /* yacc.c:1646  */
    { decVar = 0; escribirSaltoLinea(); }
#line 1859 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 219 "src/sintactico.y" /* yacc.c:1646  */
    { escribirSaltoLinea(); }
#line 1865 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 224 "src/sintactico.y" /* yacc.c:1646  */
    { escribir((yyvsp[0])); }
#line 1871 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 225 "src/sintactico.y" /* yacc.c:1646  */
    { escribir((yyvsp[0])); }
#line 1877 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 227 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaDevuelve((yyvsp[0]), &(yyval)); escribirReturn((yyvsp[0])); }
#line 1883 "src/y.tab.c" /* yacc.c:1646  */
    break;


#line 1887 "src/y.tab.c" /* yacc.c:1646  */
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
#line 233 "src/sintactico.y" /* yacc.c:1906  */


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
