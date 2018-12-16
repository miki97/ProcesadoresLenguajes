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
#define YYLAST   331

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  192

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
     144,   145,   146,   147,   148,   149,   150,   151,   153,   155,
     156,   157,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   177,
     178,   180,   181,   182,   183,   184,   186,   187,   188,   189,
     190,   192,   193,   195,   196,   198,   199,   201,   202,   204,
     206,   207,   207,   209,   210,   209,   213,   213,   214,   215,
     215,   213,   218,   218,   220,   222,   223,   225,   226,   228,
     230,   232
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

#define YYPACT_NINF -166

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-166)))

#define YYTABLE_NINF -104

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -166,     9,    -9,  -166,     5,  -166,    -4,     8,  -166,  -166,
    -166,     3,    18,  -166,  -166,  -166,    12,    80,  -166,  -166,
    -166,  -166,     4,  -166,  -166,  -166,    15,    20,   221,   221,
     221,    89,    24,    -8,  -166,  -166,  -166,  -166,    40,  -166,
    -166,  -166,    84,   221,   221,  -166,  -166,  -166,   132,  -166,
      33,    55,  -166,  -166,  -166,   165,  -166,  -166,  -166,    60,
      69,    72,    73,    75,  -166,    26,  -166,    78,  -166,  -166,
     252,  -166,  -166,  -166,  -166,  -166,    10,    61,    63,    70,
    -166,   198,   221,   221,    88,   104,    15,  -166,   308,   110,
    -166,   308,   308,     8,  -166,  -166,  -166,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,  -166,  -166,   101,
    -166,  -166,  -166,  -166,  -166,   111,  -166,   113,  -166,  -166,
     109,  -166,   112,  -166,   115,  -166,   116,   127,  -166,     6,
     308,   308,   267,   221,   120,  -166,    86,    84,  -166,   318,
     235,   117,   179,   210,   138,   297,   138,   138,  -166,  -166,
    -166,  -166,  -166,  -166,  -166,  -166,   129,   221,  -166,   221,
    -166,   282,   118,  -166,   221,   165,   128,    66,  -166,   308,
     308,  -166,   221,   138,  -166,  -166,   129,  -166,  -166,   165,
     308,  -166,   129,  -166,   123,  -166,  -166,   221,   308,   130,
     165,  -166
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,     3,     0,     0,     5,     6,
       4,     9,     0,    23,    14,    17,     0,     0,    11,    12,
      15,    16,     0,    18,     8,    10,     0,    68,     0,     0,
       0,     0,     0,    65,    71,    72,    73,    74,     0,    93,
      96,   102,     0,     0,     0,    37,    27,    22,     0,    36,
       0,     0,    66,    67,    75,     0,    39,    40,    41,     0,
       0,     0,     0,     0,    21,     0,    68,    65,    54,    53,
       0,    80,    82,    84,    86,    88,     0,     0,     0,     0,
      24,     0,     0,     0,     0,     0,     0,   108,   107,   104,
     106,   109,   111,     0,     7,    35,    38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,   110,    90,
      42,    43,    44,    45,    46,     0,    13,     0,    52,    76,
       0,    77,     0,    78,     0,    79,     0,     0,    70,     0,
      51,    48,     0,     0,     0,    97,     0,     0,    28,    58,
      59,    60,    62,    61,    55,     0,    57,    56,    63,    91,
      20,    19,    81,    83,    85,    87,    33,     0,    69,     0,
      89,     0,     0,   105,     0,     0,     0,     0,    32,    50,
      49,    94,     0,    64,    92,    34,     0,    25,    29,     0,
      98,    31,     0,    95,     0,    30,    99,     0,   100,     0,
       0,   101
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -166,  -166,  -166,  -166,  -166,    -3,  -166,  -166,  -166,   141,
    -166,  -166,   152,  -166,    92,  -166,  -166,  -166,  -166,  -166,
    -166,  -166,  -165,  -166,   -45,    87,  -166,   -28,  -166,  -166,
    -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,
    -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,
    -166,    43,  -166,  -166,  -166
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     7,     5,    45,    11,    13,    17,    18,
      26,    19,    20,    21,    65,    22,    46,   127,    47,    93,
     167,   182,   168,    48,    49,    50,   129,    51,    52,    53,
      54,    76,    77,    78,    79,    55,    56,   165,    57,    84,
     179,    58,    85,   162,   184,   187,   189,    59,    86,    60,
      89,    90,    61,    62,    63
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      68,    69,    70,    95,    10,    27,     4,   157,    81,     3,
     109,   181,    28,     8,    88,    91,    92,   185,    29,    14,
      30,     6,    31,   158,     9,    12,    82,   115,     9,   119,
      32,   159,    33,    34,    35,   120,    36,    37,    15,    38,
     -26,    39,    40,    64,    15,    16,    41,    42,    43,    44,
     116,   117,    80,   130,   131,   132,    83,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   176,   106,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   107,
     121,    14,   123,   177,   110,    66,   122,   115,   124,   125,
     138,   178,    28,   111,    81,   126,   112,   113,    29,   114,
      30,   108,    31,    24,   133,   161,    15,    16,    71,    88,
    -103,   117,    67,    34,    35,    87,    36,    37,    72,    73,
     174,    74,    75,   100,   101,   102,   103,   104,   105,   169,
     106,   170,   134,    66,   183,   137,   173,   149,   152,   150,
      28,   151,   153,   156,   180,   191,    29,   154,    30,   155,
      31,   106,     9,    94,    82,   166,   175,   172,    25,   188,
      33,    34,    35,   186,    36,    37,    66,    38,    23,    39,
      40,   190,   135,    28,    41,    42,    43,    44,   136,    29,
     163,    30,     0,    31,     0,     9,   101,   102,   103,   104,
     105,     0,   106,    33,    34,    35,     0,    36,    37,    66,
      38,     0,    39,    40,     0,     0,    28,    41,    42,    43,
      44,     0,    29,     0,    30,   128,    31,     0,   102,   103,
     104,   105,    66,   106,     0,     0,    67,    34,    35,    28,
      36,    37,     0,     0,     0,    29,     0,    30,     0,    31,
      99,   100,   101,   102,   103,   104,   105,     0,   106,    67,
      34,    35,     0,    36,    37,    97,    98,    99,   100,   101,
     102,   103,   104,   105,     0,   106,     0,     0,     0,   118,
      97,    98,    99,   100,   101,   102,   103,   104,   105,     0,
     106,     0,     0,     0,   160,    97,    98,    99,   100,   101,
     102,   103,   104,   105,     0,   106,     0,     0,     0,   171,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   164,
     106,    97,    98,    99,   100,   101,   102,   103,   104,   105,
       0,   106,    98,    99,   100,   101,   102,   103,   104,   105,
       0,   106
};

static const yytype_int16 yycheck[] =
{
      28,    29,    30,    48,     7,     1,    15,     1,    16,     0,
      55,   176,     8,    17,    42,    43,    44,   182,    14,     1,
      16,    16,    18,    17,    20,    22,    34,     1,    20,    19,
      26,    25,    28,    29,    30,    25,    32,    33,    26,    35,
      20,    37,    38,    28,    26,    27,    42,    43,    44,    45,
      24,    25,    28,    81,    82,    83,    16,    24,     3,     4,
       5,     6,     7,     8,     9,    10,    11,     1,    13,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,    24,
      19,     1,    19,    17,    24,     1,    25,     1,    25,    19,
      93,    25,     8,    24,    16,    25,    24,    24,    14,    24,
      16,    46,    18,    23,    16,   133,    26,    27,    19,   137,
      24,    25,    28,    29,    30,    31,    32,    33,    29,    30,
     165,    32,    33,     6,     7,     8,     9,    10,    11,   157,
      13,   159,    28,     1,   179,    25,   164,    36,    29,    28,
       8,    28,    30,    16,   172,   190,    14,    32,    16,    33,
      18,    13,    20,    21,    34,    26,    28,    39,    17,   187,
      28,    29,    30,    40,    32,    33,     1,    35,    16,    37,
      38,    41,    85,     8,    42,    43,    44,    45,    86,    14,
     137,    16,    -1,    18,    -1,    20,     7,     8,     9,    10,
      11,    -1,    13,    28,    29,    30,    -1,    32,    33,     1,
      35,    -1,    37,    38,    -1,    -1,     8,    42,    43,    44,
      45,    -1,    14,    -1,    16,    17,    18,    -1,     8,     9,
      10,    11,     1,    13,    -1,    -1,    28,    29,    30,     8,
      32,    33,    -1,    -1,    -1,    14,    -1,    16,    -1,    18,
       5,     6,     7,     8,     9,    10,    11,    -1,    13,    28,
      29,    30,    -1,    32,    33,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    13,    -1,    -1,    -1,    17,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    -1,    -1,    -1,    17,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    13,    -1,    -1,    -1,    17,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    13,     4,     5,     6,     7,     8,     9,    10,    11,
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
       6,     7,     8,     9,    10,    11,    13,    24,    46,    71,
      24,    24,    24,    24,    24,     1,    24,    25,    17,    19,
      25,    19,    25,    19,    25,    19,    25,    64,    17,    73,
      74,    74,    74,    16,    28,    72,    61,    25,    52,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    36,
      28,    28,    29,    30,    32,    33,    16,     1,    17,    25,
      17,    74,    90,    98,    12,    84,    26,    67,    69,    74,
      74,    17,    39,    74,    71,    28,     1,    17,    25,    87,
      74,    69,    68,    71,    91,    69,    40,    92,    74,    93,
      41,    71
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    49,    50,    48,    51,    53,    52,    54,    54,
      55,    55,    57,    56,    56,    58,    58,    59,    60,    61,
      61,    61,    62,    62,    64,    63,    63,    66,    65,    68,
      67,    67,    67,    67,    69,    70,    70,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    72,    73,
      73,    73,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    75,
      75,    76,    76,    76,    76,    76,    77,    77,    77,    77,
      77,    78,    78,    79,    79,    80,    80,    81,    81,    82,
      83,    84,    83,    86,    87,    85,    89,    90,    91,    92,
      93,    88,    95,    94,    96,    97,    97,    98,    98,    99,
     100,   101
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     4,     3,     0,     6,     3,     0,
       2,     1,     0,     4,     1,     1,     1,     1,     2,     3,
       3,     1,     2,     0,     0,     6,     1,     0,     3,     0,
       4,     3,     1,     0,     2,     2,     1,     1,     2,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     3,     3,
       3,     1,     3,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     1,     1,     1,     1,     4,
       3,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       2,     3,     1,     3,     1,     3,     1,     3,     1,     4,
       2,     0,     5,     0,     0,     7,     0,     0,     0,     0,
       0,    13,     0,     3,     2,     3,     1,     1,     1,     2,
       2,     2
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
#line 1441 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 93 "src/sintactico.y" /* yacc.c:1646  */
    { escribirLibrerias(); }
#line 1447 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 93 "src/sintactico.y" /* yacc.c:1646  */
    { cerrarFichero(); }
#line 1453 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 97 "src/sintactico.y" /* yacc.c:1646  */
    { addMarca(); }
#line 1459 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 100 "src/sintactico.y" /* yacc.c:1646  */
    { limpiarBloque(); }
#line 1465 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 102 "src/sintactico.y" /* yacc.c:1646  */
    { escribirSaltoLinea(); if (!hay_principal) introducirMain(); }
#line 1471 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 103 "src/sintactico.y" /* yacc.c:1646  */
    { if (!hay_principal) introducirMain(); }
#line 1477 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 108 "src/sintactico.y" /* yacc.c:1646  */
    { declararTipo((yyvsp[0])); setTipo((yyvsp[0])); }
#line 1483 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 108 "src/sintactico.y" /* yacc.c:1646  */
    { escribirPuntoYComa(); }
#line 1489 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 111 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type; }
#line 1495 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 112 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type; }
#line 1501 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 114 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type; }
#line 1507 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 116 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaTipoLista((yyvsp[0]), &(yyval)); }
#line 1513 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 118 "src/sintactico.y" /* yacc.c:1646  */
    { addVar((yyvsp[0])); escribirComa(); declararVariable((yyvsp[0])); leer((yyvsp[-2])); }
#line 1519 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 120 "src/sintactico.y" /* yacc.c:1646  */
    { addVar((yyvsp[0])); declararVariable((yyvsp[0])); leer((yyvsp[0])); }
#line 1525 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 125 "src/sintactico.y" /* yacc.c:1646  */
    { generarFunciones(); declararTipo((yyvsp[-1])); declararVariable((yyvsp[0])); decParam = 1; addFuncion((yyvsp[0])); escribirParentesis(0);/**/ }
#line 1531 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 126 "src/sintactico.y" /* yacc.c:1646  */
    { escribirParentesis(1);/**/ actualizarNparam((yyvsp[-5])); nParam = 0; decParam = 0; }
#line 1537 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 129 "src/sintactico.y" /* yacc.c:1646  */
    { funcion = 1; escribirSaltoLinea(); abrirBloque(); }
#line 1543 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 129 "src/sintactico.y" /* yacc.c:1646  */
    { funcion = 0; cerrarBloque(); cerrarFunciones();/*Da conflicto*/ }
#line 1549 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 131 "src/sintactico.y" /* yacc.c:1646  */
    { escribirComa(); }
#line 1555 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 136 "src/sintactico.y" /* yacc.c:1646  */
    { nParam++; setTipo((yyvsp[-1])); declararTipo((yyvsp[-1])); addParametro((yyvsp[0])); declararVariable((yyvsp[0])); }
#line 1561 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 153 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaAsignacion((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); generarAsignacion((yyvsp[-2]), (yyvsp[0])); if (var_control) guardarControl((yyvsp[-2]));/**/ escribirSaltoLinea(); }
#line 1567 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 155 "src/sintactico.y" /* yacc.c:1646  */
    { nParam++; addPar((yyvsp[0])); ampliarLexFuncion((yyvsp[-2]), coma, &(yyval)); ampliarLexFuncion((yyval), (yyvsp[0]), &(yyval)); }
#line 1573 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 156 "src/sintactico.y" /* yacc.c:1646  */
    { nParam++; addPar((yyvsp[0])); }
#line 1579 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 157 "src/sintactico.y" /* yacc.c:1646  */
    { nParam =1; addPar((yyvsp[0])); }
#line 1585 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 159 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[-1]).type; }
#line 1591 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 160 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaUnario((yyvsp[-1]), (yyvsp[0]), &(yyval)); generarUnario((yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1597 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 161 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaSigno((yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1603 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 162 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaSumaBin((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); generarBinario((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0]), &(yyval)); }
#line 1609 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 163 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaListaBin((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); generarBinario((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0]), &(yyval)); }
#line 1615 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 164 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaListaConca((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); generarBinario((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0]), &(yyval)); }
#line 1621 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 165 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaBooleanos((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); generarBinario((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0]), &(yyval)); }
#line 1627 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 166 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaBooleanos((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); generarBinario((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0]), &(yyval)); }
#line 1633 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 167 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaBooleanos((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); generarBinario((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0]), &(yyval)); }
#line 1639 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 168 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaRel((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); generarBinario((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0]), &(yyval)); }
#line 1645 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 169 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaRel((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); generarBinario((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0]), &(yyval)); }
#line 1651 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 170 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaProducto((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); generarBinario((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0]), &(yyval)); }
#line 1657 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 171 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaListaGet((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), &(yyval));generarTernario((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0])); }
#line 1663 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 172 "src/sintactico.y" /* yacc.c:1646  */
    { decVar = 0; compruebaTipoIdentificador((yyvsp[0]), &(yyval)); }
#line 1669 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 173 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type; }
#line 1675 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 174 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type; }
#line 1681 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 177 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaLlamada((yyvsp[-3]), &(yyval)); nParam = 0; ampliarLexFuncion((yyvsp[-3]), (yyvsp[-2]), &(yyval)); ampliarLexFuncion((yyval), (yyvsp[-1]), &(yyval)); ampliarLexFuncion((yyval), (yyvsp[0]), &(yyval)); }
#line 1687 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 178 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaLlamada((yyvsp[-2]), &(yyval)); ampliarLexFuncion((yyvsp[-2]), (yyvsp[-1]), &(yyval)); ampliarLexFuncion((yyval), (yyvsp[0]), &(yyval)); }
#line 1693 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 180 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type; }
#line 1699 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 181 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type; }
#line 1705 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 182 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1711 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 183 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type; }
#line 1717 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 184 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type; }
#line 1723 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 186 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[-1]).type; }
#line 1729 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 187 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[-1]).type; }
#line 1735 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 188 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[-1]).type; }
#line 1741 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 189 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[-1]).type; }
#line 1747 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 193 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type; }
#line 1753 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 196 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type; }
#line 1759 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 199 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type; }
#line 1765 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 202 "src/sintactico.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type; }
#line 1771 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 204 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaCondicion((yyvsp[-1])); addATabla((yyvsp[-1])); emitirSaltoElse(); abrirBloque();/**/ }
#line 1777 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 206 "src/sintactico.y" /* yacc.c:1646  */
    { cerrarBloque(); escribirEtiquetaElse(); quitarDeTabla(); }
#line 1783 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 207 "src/sintactico.y" /* yacc.c:1646  */
    { emitirSaltoSalida(); cerrarBloque(); escribirEtiquetaElse(); }
#line 1789 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 207 "src/sintactico.y" /* yacc.c:1646  */
    { escribirEtiquetaSalida(); quitarDeTabla(); }
#line 1795 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 209 "src/sintactico.y" /* yacc.c:1646  */
    { addATablaWhileRepeat((yyvsp[0])); escribirEtiquetaEntrada(); }
#line 1801 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 210 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaCondicion((yyvsp[-1])); escribirNombreExpresionControl((yyvsp[-1])); saltoSalidaWhile(); abrirBloque(); }
#line 1807 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 211 "src/sintactico.y" /* yacc.c:1646  */
    { saltoEntradaWhileRepeat(); cerrarBloque(); escribirEtiquetaSalida(); quitarDeTabla(); }
#line 1813 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 213 "src/sintactico.y" /* yacc.c:1646  */
    { addATablaWhileRepeat((yyvsp[0])); var_control = 1;/**/ }
#line 1819 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 213 "src/sintactico.y" /* yacc.c:1646  */
    { var_control = 0;/**/ escribirEtiquetaEntrada(); }
#line 1825 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 214 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaCondicion((yyvsp[0])); escribirNombreExpresionControl((yyvsp[0])); saltoSalidaWhile(); abrirBloque(); }
#line 1831 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 215 "src/sintactico.y" /* yacc.c:1646  */
    { generarTemporal(); }
#line 1837 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 215 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaTipos(control_name, (yyvsp[0])); generarAsignacion(control_name, (yyvsp[0])); cerrarTemporal(); }
#line 1843 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 216 "src/sintactico.y" /* yacc.c:1646  */
    { rescatarInfoTemporal(); saltoEntradaWhileRepeat(); cerrarBloque(); escribirEtiquetaSalida(); quitarDeTabla(); }
#line 1849 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 218 "src/sintactico.y" /* yacc.c:1646  */
    { decVar = -1; }
#line 1855 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 218 "src/sintactico.y" /* yacc.c:1646  */
    { decVar = 0; escribirSaltoLinea(); }
#line 1861 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 220 "src/sintactico.y" /* yacc.c:1646  */
    { escribirSaltoLinea(); }
#line 1867 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 225 "src/sintactico.y" /* yacc.c:1646  */
    { escribir((yyvsp[0])); }
#line 1873 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 226 "src/sintactico.y" /* yacc.c:1646  */
    { escribir((yyvsp[0])); }
#line 1879 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 228 "src/sintactico.y" /* yacc.c:1646  */
    { compruebaDevuelve((yyvsp[0]), &(yyval)); escribirReturn((yyvsp[0])); }
#line 1885 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 230 "src/sintactico.y" /* yacc.c:1646  */
    { moverposicionlista((yyvsp[0]), (yyvsp[-1]));}
#line 1891 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 232 "src/sintactico.y" /* yacc.c:1646  */
    {comienzolista((yyvsp[0]));}
#line 1897 "src/y.tab.c" /* yacc.c:1646  */
    break;


#line 1901 "src/y.tab.c" /* yacc.c:1646  */
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
#line 234 "src/sintactico.y" /* yacc.c:1906  */


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
