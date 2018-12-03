%{

// Declaraciones
#include <stdlib.h>
#include <string.h>
// #include "tokens.tab.h"

%}

%option yylineno
%option noyywrap

Espacio	[ \a\b\t\n\v\f\r]
Barra	[_]
Letra	[a-zA-Z]
Numero	[0-9]
Signo	[-+]
ASCII_c	[^\'\\]
ASCII_C	[^\"\\]
Escape	\\[abtnvfr\"\'\\]

Entero	{Signo}?{Numero}+
Real	{Signo}?{Numero}*\.{Numero}+
Caract	\'({ASCII_c}|{Escape})\'
Cadena	\"({ASCII_C}|{Escape})*\"


Identif ({Barra}|{Letra})({Barra}|{Letra}|{Numero})*

%%

"ent principal"		{ ECHO; return(INICIO); }
"("					{ ECHO; return(PAREN_IZQ); }
")"					{ ECHO; return(PAREN_DER); }
"["					{ ECHO; return(CORCH_IZQ); }
"]"					{ ECHO; return(CORCH_DER); }
"{"					{ ECHO; return(LLAVE_IZQ); }
"}"					{ ECHO; return(LLAVE_DER); }
"var:"				{ ECHO; return(VAR_IZQ); }
":var"				{ ECHO; return(VAR_DER); }
";"					{ ECHO; return(DELIMIT); } 
","					{ ECHO; return(SEPAR); } 
"bool"				{   ECHO; 
                        yylval.type = BOOLEANO;
                        return(TIPO); 
                    } 
"car"				{   ECHO; 
                        yylval.type = CARACTER;
                        return(TIPO); 
                    } 
"ent"				{   ECHO; 
                        yylval.type = ENTERO;
                        return(TIPO); 
                    } 
"real"				{   ECHO; 
                        yylval.type = REAL;
                        return(TIPO); 
                    } 
"lista de"			{   ECHO; 
                        yylval.type = LISTA;
                        return(TIPO_LIST); 
                    } 
"="					{ ECHO; return(IGUAL); } 
"si"				{ ECHO; return(COND_SI); } 
"otro"				{ ECHO; return(COND_OTRO); } 
"mientras"			{ ECHO; return(BUCLE); } 
"para"				{ ECHO; return(FOR_INI); } 
"hasta"				{ ECHO; return(FOR_STOP); } 
"paso"				{ ECHO; return(FOR_STEP); } 
"hacer"				{ ECHO; return(FOR_DO); } 
"entrada"			{ ECHO; return(ENTRADA); }
"salida"			{ ECHO; return(SALIDA); } 
"devuelve"			{ ECHO; return(DEVUELVE); }
"!"					{   ECHO;
                        yylval.attr = 0;
                        return(OP_UNARIO); 
                    }
"no"				{   ECHO; 
                        yylval.attr = 1;
                        return(OP_UNARIO); 
                    }
"#"					{   ECHO; 
                        yylval.attr = 2;
                        return(OP_UNARIO); 
                    }
"?"					{   ECHO; 
                        yylval.attr = 3;
                        return(OP_UNARIO); 
                    }
"+"					{   ECHO; 
                        yylval.attr = 0;
                        return(MAS_MENOS); 
                    }
"-"					{   ECHO; 
                        yylval.attr = 1;
                        return(MAS_MENOS); 
                    }
"++"				{   ECHO; 
                        yylval.attr = 0;
                        return(MAS_MAS); 
                    }
"--"				{   ECHO; 
                        yylval.attr = 0;
                        return(OP_BIN_LISTA); 
                    }
"%"					{   ECHO;
                        yylval.attr = 1;
                        return(OP_BIN_LISTA); 
                    }
"@@"                { ECHO;
                        yylval.attr = 2;
                        return(OP_BIN_LISTA); 
                    }
"*"					{   ECHO; 
                        yylval.attr = 0;
                        return(OP_MULTI_DIV); 
                    }
"/"					{   ECHO; 
                        yylval.attr = 1;
                        return(OP_MULTI_DIV); 
                    }
"&&"				{   ECHO; 
                        yylval.attr = 0;
                        return(OP_AND); 
                    }
"y"					{   ECHO; 
                        yylval.attr = 1;
                        return(OP_AND);
                    }
"||"				{   ECHO; 
                        yylval.attr = 0;
                        return(OP_OR); 
                    }
"o"					{   ECHO; 
                        yylval.attr = 1;
                        return(OP_OR); 
                    }
"^^"				{   ECHO; 
                        yylval.attr = 0;
                        return(OP_XOR); 
                    }
"ox"				{   ECHO; 
                        yylval.attr = 1;
                        return(OP_XOR); 
                    }
"=="				{   ECHO; 
                        yylval.attr = 0;
                        return(OP_IGUALDAD); 
                    }
"!="				{   ECHO; 
                        yylval.attr = 1;
                        return(OP_IGUALDAD); 
                    }
"<"					{   ECHO; 
                        yylval.attr = 0;
                        return(OP_RELACION); 
                    }
"<="				{   ECHO; 
                        yylval.attr = 1;
                        return(OP_RELACION); 
                    }
">"					{   ECHO; 
                        yylval.attr = 2;
                        return(OP_RELACION); 
                    }
">="				{   ECHO; 
                        yylval.attr = 3;
                        return(OP_RELACION); 
                    }
"**"				{   ECHO; 
                        yylval.attr = 0;
                        return(OP_LIST_CONCA); 
                    }
"@"					{   ECHO; 
                        yylval.attr = 0;
                        return(OP_GET_LIST); 
                    }

"$"					{   ECHO; 
                        yylval.attr = 0;
                        return(OP_INI_LIST); 
                    }
"<<"				{   ECHO; 
                        yylval.attr = 0;
                        return(OP_AVR_RETR); 
                    }
">>"				{   ECHO; 
                        yylval.attr = 1;
                        return(OP_AVR_RETR); 
                    }
"falso"				{   ECHO; 
                        yylval.attr = 0;
                        yylval.lex = strdup(yytext);
                        return(CONST_BOOL); 
                    } 
"FALSO"				{   ECHO; 
                        yylval.attr = 1;
                        yylval.lex = strdup(yytext);
                        return(CONST_BOOL); 
                    } 
"verdadero"			{   ECHO; 
                        yylval.attr = 2;
                        yylval.lex = strdup(yytext);
                        return(CONST_BOOL); 
                    } 
"VERDADERO"			{   ECHO; 
                        yylval.attr = 3;
                        yylval.lex = strdup(yytext);
                        return(CONST_BOOL); 
                    }
{Caract}			{   ECHO; 
                        yylval.attr = 0;
                        yylval.lex = strdup(yytext);
                        return(CONST_CAR); 
                    }
{Cadena}			{   ECHO;
                        yylval.attr = 1;
                        yylval.lex = strdup(yytext);
                        return(CONST_CADENA); 
                    }
{Entero}			{   ECHO; 
                        yylval.attr = 2;
                        yylval.lex = strdup(yytext);
                        return(CONST_ENT); 
                    }
{Real}				{   ECHO; 
                        yylval.attr = 3;
                        yylval.lex = strdup(yytext);
                        return(CONST_REAL); 
                    }
{Identif}			{   ECHO; 
                        yylval.lex = strdup(yytext);
                        return(IDENT); 
                    } 
{Espacio}			{ ECHO; }
.					{ printf("\nError léxico:%d: Simbolo inválido: '%s'.", yylineno, yytext); }

%%

// /* Programa principal */
// int main(int argc, char** argv){
// 	int analizador;

// 	// Comprobamos que se recibe 1 argumento (nombre del fichero fuente)
// 	if (argc <= 1){
// 		printf("\nError al ejecutar la aplicación...\n");
// 		printf("Uso correcto: %s nombre_fichero\n", argv[0]);
// 		exit(-1);
// 	}

// 	// Abrimos el fichero recibido por el primer parámetro
// 	yyin = fopen(argv[1], "r");

// 	// Si yyin es nulo, el fichero no se ha podido abrir
// 	if (yyin == NULL){
// 		printf("\nError al abrir el fichero \'%s\'.\n", argv[1]);
// 		exit(-2);
// 	}

// 	// Invocamos al analizador léxico
// 	analizador = yylex();

// 	// Mientras no se termine de analizar el fichero entero
// 	while (analizador != 0){
// 		printf("_%d_ ", analizador);
// 		analizador = yylex();
// 	}

// 	exit(1);
// }
