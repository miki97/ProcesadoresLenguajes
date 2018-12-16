%{

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

%}


%error-verbose

//precedencia


// Operadores de comparacion y relacion
//%left PAREN_IZQ
%left OP_OR
%left OP_XOR
%left OP_AND
%left OP_IGUALDAD
%left OP_RELACION
// Operadores
%left MAS_MENOS MAS_MAS OP_LIST_CONCA OP_BIN_LISTA
%left OP_GET_LIST
%left OP_MULTI_DIV
//%left PAREN_DER


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
Programa: { generarFichero(); } Cabecera { escribirLibrerias(); } Bloque { cerrarFichero(); };

Cabecera: INICIO PAREN_IZQ PAREN_DER;

Bloque: LLAVE_IZQ { addMarca(); } 
        Declar_variables_locales
        Declar_funciones 
        Sentencias LLAVE_DER { limpiarBloque(); } ;

Declar_variables_locales: VAR_IZQ Cuerpo_variables VAR_DER { escribirSaltoLinea(); if (!hay_principal) introducirMain(); }
                        | { if (!hay_principal) introducirMain(); };

Cuerpo_variables: Cuerpo_variables Declar_variables
                | Declar_variables;

Declar_variables: Tipo { declararTipo($1); setTipo($1); } Lista_ident DELIMIT { escribirPuntoYComa(); }
                | error;

Tipo: Tipo_dato  { $$.type = $1.type; }
    | Tipo_lista { $$.type = $1.type; };

Tipo_dato: TIPO { $$.type = $1.type; };

Tipo_lista: TIPO_LIST Tipo_dato { compruebaTipoLista($2, &$$); };

Lista_ident: Lista_ident SEPAR IDENT { addVar($3); escribirComa(); declararVariable($3); leer($1); }
           | Lista_ident error IDENT
           | IDENT { addVar($1); declararVariable($1); leer($1); };

Declar_funciones: Declar_funciones Declar_funcion
                | ;

Cabecera_funcion: TIPO IDENT { generarFunciones(); declararTipo($1); declararVariable($2); decParam = 1; addFuncion($2); escribirParentesis(0);/**/ } PAREN_IZQ Lista_parametros PAREN_DER
                  { escribirParentesis(1);/**/ actualizarNparam($1); nParam = 0; decParam = 0; }
                | error;
                
Declar_funcion: Cabecera_funcion { funcion = 1; escribirSaltoLinea(); abrirBloque(); } Bloque { funcion = 0; cerrarBloque(); cerrarFunciones();/*Da conflicto*/ };

Lista_parametros: Lista_parametros SEPAR { escribirComa(); } Parametro
                | Lista_parametros error Parametro
                | Parametro
                | ;

Parametro: TIPO IDENT { nParam++; setTipo($1); declararTipo($1); addParametro($2); declararVariable($2); };

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

Sentencia_asig: IDENT IGUAL Expresion { compruebaAsignacion($1, $2, $3, &$$); generarAsignacion($1, $3); if (var_control) guardarControl($1);/**/ escribirSaltoLinea(); };

Lista_expresiones: Lista_expresiones SEPAR Expresion { nParam++; addPar($3); ampliarLexFuncion($1, coma, &$$); ampliarLexFuncion($$, $3, &$$); }
                 | Lista_expresiones error Expresion { nParam++; addPar($3); }
                 | Expresion { nParam =1; addPar($1); };                

Expresion: PAREN_IZQ Expresion PAREN_DER { $$.type = $2.type; }
         | OP_UNARIO Expresion { compruebaUnario($1, $2, &$$); generarUnario($1, $2, &$$); }
         | MAS_MENOS Expresion { compruebaSigno($1, $2, &$$); }%prec OP_UNARIO
         | Expresion MAS_MENOS Expresion { compruebaSumaBin($1, $2, $3, &$$); generarBinario($2, $1, $3, &$$); }
         | Expresion OP_BIN_LISTA Expresion { compruebaListaBin($1, $2, $3, &$$); generarBinario($2, $1, $3, &$$); }
         | Expresion OP_LIST_CONCA Expresion { compruebaListaConca($1, $2, $3, &$$); generarBinario($2, $1, $3, &$$); }
         | Expresion OP_OR Expresion { compruebaBooleanos($1, $2, $3, &$$); generarBinario($2, $1, $3, &$$); }
         | Expresion OP_XOR Expresion { compruebaBooleanos($1, $2, $3, &$$); generarBinario($2, $1, $3, &$$); }
         | Expresion OP_AND Expresion { compruebaBooleanos($1, $2, $3, &$$); generarBinario($2, $1, $3, &$$); }
         | Expresion OP_RELACION Expresion { compruebaRel($1, $2, $3, &$$); generarBinario($2, $1, $3, &$$); }
         | Expresion OP_IGUALDAD Expresion { compruebaRel($1, $2, $3, &$$); generarBinario($2, $1, $3, &$$); } 
         | Expresion OP_MULTI_DIV Expresion { compruebaProducto($1, $2, $3, &$$); generarBinario($2, $1, $3, &$$); }
         | Expresion MAS_MAS Expresion OP_GET_LIST Expresion { compruebaListaGet($1, $3, $5, &$$); }
         | IDENT { decVar = 0; compruebaTipoIdentificador($1, &$$); }
         | Funcion { $$.type = $1.type; }
         | Constante { $$.type = $1.type; }
         | error;

Funcion: IDENT PAREN_IZQ Lista_expresiones PAREN_DER { compruebaLlamada($1, &$$); nParam = 0; ampliarLexFuncion($1, $2, &$$); ampliarLexFuncion($$, $3, &$$); ampliarLexFuncion($$, $4, &$$); }
       | IDENT PAREN_IZQ PAREN_DER { compruebaLlamada($1, &$$); ampliarLexFuncion($1, $2, &$$); ampliarLexFuncion($$, $3, &$$); };

Constante: CONST_BOOL      { $$.type = $1.type; }
         | CONST_CAR       { $$.type = $1.type; }
         | CONST_ENT       { $$.type = $1.type; }
         | CONST_REAL      { $$.type = $1.type; }
         | Constante_lista { $$.type = $1.type; };

Constante_lista: CORCH_IZQ Lista_bool CORCH_DER { $$.type = $2.type; }
               | CORCH_IZQ Lista_car  CORCH_DER { $$.type = $2.type; }
               | CORCH_IZQ Lista_ent  CORCH_DER { $$.type = $2.type; }
               | CORCH_IZQ Lista_real CORCH_DER { $$.type = $2.type; }
               | CORCH_IZQ CORCH_DER ;

Lista_bool: Lista_bool SEPAR CONST_BOOL
          | CONST_BOOL { $$.type = $1.type; };

Lista_car: Lista_car SEPAR CONST_CAR
         | CONST_CAR { $$.type = $1.type; };

Lista_ent: Lista_ent SEPAR CONST_ENT
         | CONST_ENT { $$.type = $1.type; };

Lista_real: Lista_real SEPAR CONST_REAL
          | CONST_REAL { $$.type = $1.type; };

Condicion_if: COND_SI PAREN_IZQ Expresion PAREN_DER { compruebaCondicion($3); addATabla($3); emitirSaltoElse(); abrirBloque();/**/ };

Sentencia_if: Condicion_if Sentencia { cerrarBloque(); escribirEtiquetaElse(); quitarDeTabla(); }
            | Condicion_if Sentencia COND_OTRO { emitirSaltoSalida(); cerrarBloque(); escribirEtiquetaElse(); } Sentencia { escribirEtiquetaSalida(); quitarDeTabla(); };

Sentencia_while: BUCLE { addATablaWhileRepeat($1); escribirEtiquetaEntrada(); }
                 PAREN_IZQ Expresion PAREN_DER { compruebaCondicion($4); escribirNombreExpresionControl($4); saltoSalidaWhile(); abrirBloque(); }
                 Sentencia { saltoEntradaWhileRepeat(); cerrarBloque(); escribirEtiquetaSalida(); quitarDeTabla(); };

Sentencia_for: FOR_INI { addATablaWhileRepeat($1); var_control = 1;/**/ } Sentencia_asig { var_control = 0;/**/ escribirEtiquetaEntrada(); }
               FOR_STOP Expresion { compruebaCondicion($6); escribirNombreExpresionControl($6); saltoSalidaWhile(); abrirBloque(); } 
               FOR_STEP { generarTemporal(); } Expresion { compruebaTipos(control_name, $10); generarAsignacion(control_name, $10); cerrarTemporal(); } 
               FOR_DO Sentencia { rescatarInfoTemporal(); saltoEntradaWhileRepeat(); cerrarBloque(); escribirEtiquetaSalida(); quitarDeTabla(); };

Sentencia_entrada: ENTRADA { decVar = -1; } Lista_ident { decVar = 0; escribirSaltoLinea(); };

Sentencia_salida: SALIDA Lista_expr_cadena { escribirSaltoLinea(); };

Lista_expr_cadena: Lista_expr_cadena SEPAR Expr_cadena
                 | Expr_cadena;

Expr_cadena: Expresion { escribir($1); }
           | CONST_CADENA { escribir($1); };

Sentencia_return: DEVUELVE Expresion { compruebaDevuelve($2, &$$); escribirReturn($2); };

Sentencia_iterar: Expresion OP_AVR_RETR;

Sentencia_comienzo: OP_INI_LIST Expresion;

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
