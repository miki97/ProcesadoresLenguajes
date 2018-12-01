#include <stdlib.h>
#include <string.h>
#include <stdio.h>
// #include "tokens.tab.h"
// #include "lexico.l"

extern int yyparse();

extern FILE *yyin;

/* Programa principal */
int main(int argc, char** argv){
	int analizador;

	// Comprobamos que se recibe 1 argumento (nombre del fichero fuente)
	if (argc <= 1){
		printf("\nError al ejecutar la aplicación...\n");
		printf("Uso correcto: %s nombre_fichero\n", argv[0]);
		exit(-1);
	}

	// Abrimos el fichero recibido por el primer parámetro
	yyin = fopen(argv[1], "r");

	// Si yyin es nulo, el fichero no se ha podido abrir
	if (yyin == NULL){
		printf("\nError al abrir el fichero \'%s\'.\n", argv[1]);
		exit(-2);
	}

	// // Invocamos al analizador léxico
	// analizador = yylex();

	// // Mientras no se termine de analizar el fichero entero
	// while (analizador != 0){
	// 	printf("_%d_ ", analizador);
	// 	analizador = yylex();
	// }

    return yyparse();

	// exit(1);
}