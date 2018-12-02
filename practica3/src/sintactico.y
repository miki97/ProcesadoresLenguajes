%{

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// #include "tokens.tab.h"
#include "y.tab.h"

// Declaramos ’yyerror’ para que se pueda invocar desde lex (lexico.l)
int yylex();
void yyerror(const char *msg);

#define YYERROR_VERBOSE

#define _CC_RESET   "\033[0m"
#define _CC_BLACK   "\033[30m"      /* Black */
#define _CC_RED     "\033[31m"      /* Red */
#define _CC_GREEN   "\033[32m"      /* Green */
#define _CC_YELLOW  "\033[33m"      /* Yellow */
#define _CC_BLUE    "\033[34m"      /* Blue */
#define _CC_MAGENTA "\033[35m"      /* Magenta */
#define _CC_CYAN    "\033[36m"      /* Cyan */
#define _CC_WHITE   "\033[37m"      /* White */
#define _CC_BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define _CC_BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define _CC_BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define _CC_BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define _CC_BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define _CC_BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define _CC_BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define _CC_BOLDWHITE   "\033[1m\033[37m"      /* Bold White */
%}


%error-verbose

//precedencia


// Operadores de comparacion y relacion
%left OP_OR
%left OP_XOR
%left OP_AND
%left OP_IGUALDAD
%left OP_RELACION
// Operadores
%left MAS_MENOS MAS_MAS OP_LIST_CONCA OP_BIN_LISTA
%left OP_GET_LIST
%left OP_MULTI_DIV


// Operadores unarios
%right OP_UNARIO


// Tokens
%token INICIO
%token PAREN_IZQ
%token PAREN_DER
%token CORCH_IZQ
%token CORCH_DER
%token LLAVE_IZQ
%token LLAVE_DER
%token VAR_IZQ
%token VAR_DER
%token DELIMIT
%token SEPAR
%token TIPO
%token TIPO_LIST
%token IDENT
%token CONST_BOOL
%token CONST_CAR
%token CONST_CADENA
%token CONST_ENT
%token CONST_REAL
%token IGUAL
%token COND_SI
%token COND_OTRO
%token BUCLE
%token FOR_INI
%token FOR_STOP
%token FOR_STEP
%token FOR_DO
%token ENTRADA
%token SALIDA
%token DEVUELVE
%token OP_UNARIO
%token MAS_MENOS
%token MAS_MAS
%token OP_LIST_CONCA
%token OP_BIN_LISTA
%token OP_GET_LIST
%token OP_INI_LIST
%token OP_AVR_RETR
%token OP_OR
%token OP_XOR
%token OP_AND
%token OP_RELACION
%token OP_IGUALDAD
%token OP_MULTI_DIV

%%

// Producciones
Programa: Cabecera Bloque ;

Cabecera: INICIO PAREN_IZQ PAREN_DER ;

Bloque: LLAVE_IZQ Declar_variables_locales Declar_funciones Sentencias LLAVE_DER;

Declar_variables_locales: VAR_IZQ Cuerpo_variables VAR_DER
                        | ;

Cuerpo_variables: Cuerpo_variables Declar_variables
                | Declar_variables ;

Declar_variables: Tipo Lista_ident DELIMIT 
                | error;

Tipo: Tipo_dato
    | Tipo_lista ;

Tipo_dato: TIPO ;

Tipo_lista: TIPO_LIST Tipo_dato ;

Lista_ident: Lista_ident SEPAR IDENT
           | Lista_ident error IDENT
           | IDENT;
          
Declar_funciones: Declar_funciones Declar_funcion
                | ;
Cabecera_funcion: TIPO IDENT PAREN_IZQ Lista_parametros PAREN_DER
                | error;
                
Declar_funcion: Cabecera_funcion Bloque ;

Lista_parametros: Lista_parametros SEPAR Parametro
                | Lista_parametros error Parametro
                | Parametro
                | ;

Parametro: TIPO IDENT ;

Sentencias: Sentencias Sentencia 
          | Sentencia ;

Sentencia: Bloque
         | Sentencia_asig DELIMIT
         | Sentencia_if
         | Sentencia_while
         | Sentencia_for
         | Sentencia_entrada DELIMIT
         | Sentencia_salida DELIMIT
         | Sentencia_return DELIMIT
         | Sentencia_iterar DELIMIT
         | Sentencia_comienzo DELIMIT ;

Sentencia_asig: IDENT IGUAL Expresion ;

Lista_expresiones: Lista_expresiones SEPAR Expresion
                 | Lista_expresiones error Expresion
                 | Expresion;                

Expresion: PAREN_IZQ Expresion PAREN_DER
         | OP_UNARIO Expresion
         | MAS_MENOS Expresion %prec OP_UNARIO
         | Expresion MAS_MENOS Expresion
         | Expresion OP_BIN_LISTA Expresion
         | Expresion OP_LIST_CONCA Expresion
         | Expresion OP_OR Expresion
         | Expresion OP_XOR Expresion
         | Expresion OP_AND Expresion
         | Expresion OP_RELACION Expresion
         | Expresion OP_IGUALDAD Expresion
         | Expresion OP_MULTI_DIV Expresion
         | Expresion MAS_MAS Expresion OP_GET_LIST Expresion
         | IDENT
         | Constante
         | IDENT PAREN_IZQ Lista_expresiones PAREN_DER
         | IDENT PAREN_IZQ PAREN_DER
         | error;

Constante: CONST_BOOL
         | CONST_CAR
         | CONST_ENT
         | CONST_REAL
         | Constante_lista ;

Constante_lista: CORCH_IZQ Lista_bool CORCH_DER
               | CORCH_IZQ Lista_car CORCH_DER
               | CORCH_IZQ Lista_ent CORCH_DER
               | CORCH_IZQ Lista_real CORCH_DER
               | CORCH_IZQ CORCH_DER ;

Lista_bool: Lista_bool SEPAR CONST_BOOL
          | CONST_BOOL ;

Lista_car: Lista_car SEPAR CONST_CAR
         | CONST_CAR ;

Lista_ent: Lista_ent SEPAR CONST_ENT
         | CONST_ENT;

Lista_real: Lista_real SEPAR CONST_REAL
          | CONST_REAL ;

Sentencia_if: COND_SI PAREN_IZQ Expresion PAREN_DER Sentencia
            | COND_SI PAREN_IZQ Expresion PAREN_DER Sentencia COND_OTRO Sentencia ;

Sentencia_while: BUCLE PAREN_IZQ Expresion PAREN_DER Sentencia ;

Sentencia_for: FOR_INI Sentencia_asig FOR_STOP Expresion FOR_STEP Expresion FOR_DO Sentencia ;

Sentencia_entrada: ENTRADA Lista_ident ;

Sentencia_salida: SALIDA Lista_expr_cadena ;

Lista_expr_cadena: Lista_expr_cadena SEPAR Expr_cadena
                 | Expr_cadena;

Expr_cadena: Expresion
           | CONST_CADENA;

Sentencia_return: DEVUELVE Expresion ;

Sentencia_iterar: Expresion OP_AVR_RETR ;

Sentencia_comienzo: OP_INI_LIST Expresion ;

%%

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
