/* Fichero para declarar las funciones y elementos necesarios
para manejar la Tabla de Simbolos
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "semantico.h"
#include "colores.h"

#define true 1
#define false 0
#define bool int

extern int yylineno;

Entrada tablasimbolos[MAX_IN];
long int TOPE = 0;
int line = 1;
unsigned int funcion=0;
TipoDato tipoGlobal = NA;
int currentFunction = -1;
int nParam=0;
int decParam=0;
int decVar=0;

///////////////////////////////////////////////////////////////////////////////
// Tabla de Símbolos
///////////////////////////////////////////////////////////

// Inserta una in en la tabla de símbolos
int addEntrada(Entrada in){
    // Si se tienen más entradas de las que puede alojar la tabla de símbolos
    // dará un error, si no, se inserta
	if(TOPE < MAX_IN) {

		tablasimbolos[TOPE].tipo_entrada=in.tipo_entrada;
		tablasimbolos[TOPE].lex=in.lex;
		tablasimbolos[TOPE].tipo=in.tipo;
		tablasimbolos[TOPE].nParam=in.nParam;

        // Se aumenta el contador de entradas
		TOPE++;
		return true;
	} else {
		printSemanticError("desbordamiento de pila.");
		return false;
	}

}
int addVar(attrs in){
    // Si se tienen más entradas de las que puede alojar la tabla de símbolos
    // dará un error, si no, se inserta
	if(TOPE < MAX_IN) {

		tablasimbolos[TOPE].tipo_entrada= VAR;
		tablasimbolos[TOPE].lex=in.lex;
		tablasimbolos[TOPE].tipo= tipoGlobal;
		tablasimbolos[TOPE].nParam=0;

        // Se aumenta el contador de entradas
		TOPE++;
		return true;
	} else {
		printSemanticError("desbordamiento de pila.");
		return false;
	}

}

// Elimina una in de la tabla de símbolos
bool eliminarEntrada() {
    // Si la tabla de símbolos tiene alguna in puede eliminar la última
    if (TOPE > 0) {
		TOPE--;
		return true;
	} else {
		printSemanticError("intento de borrar entrada con tabla vacia.");
		return false;
	}
}

// Elimina las entradas de la tabla de símbolos hasta la marca de tope
void limpiarBloque() {

	// Busca asta que hay una marca en el tope
    while(tablasimbolos[TOPE-1].tipo_entrada != MARCA && TOPE > 0){
		TOPE--;
	}
	// Elimina la marca	
	if (tablasimbolos[TOPE-1].tipo_entrada == MARCA) {
		TOPE--;
	}

    // Borramos los parametros de la funcion
    if (tablasimbolos[TOPE-1].tipo_entrada == PARAM) {
        while(tablasimbolos[TOPE-1].tipo_entrada != FUNCION && TOPE > 0) {
    		TOPE--;
    	}
         //TOPE--;
	}
}


// Añade una marca de tope de bloque
void addMarca() {
    Entrada marcaInicio;

	marcaInicio.tipo_entrada = MARCA;
	marcaInicio.lex = "{";
	marcaInicio.tipo = NA;
	marcaInicio.nParam = 0;

	addEntrada(marcaInicio);

    // Se añaden a la tabla de símbolos los parámetros de la función como las
    // variables locales de ese bloque
	if(funcion == true) {
		int j = TOPE - 2, mark = 0, funct = 0;

		while(j > 0 && tablasimbolos[j].tipo_entrada == PARAM) {

			if(tablasimbolos[j].tipo_entrada == PARAM) {

				Entrada parametroFuncion;
				parametroFuncion.tipo_entrada = VAR;
				parametroFuncion.lex = tablasimbolos[j].lex;
				parametroFuncion.tipo = tablasimbolos[j].tipo;
				parametroFuncion.nParam = tablasimbolos[j].nParam;
				addEntrada(parametroFuncion);

			}
			j--;
		}
	}

}

// Guarda el tipo de la variable para poder saber el tipo cuando llege
// los identificadores
int setTipo(attrs value) {
    tipoGlobal = value.type;
}

// Añade una entrada de funcion
void addFuncion(attrs e) {
	Entrada entradaFun;
	
	entradaFun.tipo_entrada = FUNCION;
	entradaFun.lex = e.lex;
    entradaFun.tipo = e.type;
	entradaFun.nParam = 0;
	
	currentFunction = TOPE;
	addEntrada(entradaFun);
}

// Actualiza el numero de parametros de la funcion actual
void actualizarNparam(attrs e) {
    tablasimbolos[currentFunction].nParam = nParam;
}

// Devuelve la entrada que sea función más cercana lo usaremos para los devuelve
int encontrarSiguienteFuncion(){

    int i = TOPE - 1;
	int encontrado_marca = 0;
	int encontrado=0;
	while (i > 0 && !encontrado_marca) {

		if (tablasimbolos[i].tipo_entrada == MARCA) {
			encontrado_marca = 1;
		} else {
			i--;
		}

	}
	while (i > 0 && !encontrado) {

		if (tablasimbolos[i].tipo_entrada == FUNCION) {
			encontrado = 1;
		} else {
			i--;
		}

	}

	if(!encontrado) {
		return -1;
	} else {
		return i;
	}

}

// Comprueba si el tipo de la expresión coincide con lo que devuelve la función
void compruebaDevuelve(attrs expr, attrs* res){

    int index = encontrarSiguienteFuncion();
	printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
	printf("%d",index);

	if (index > -1) {
			printf("%d",expr.type);
			printf(" ");
			printf("%d", tablasimbolos[index].tipo );
		if ((int)expr.type != (int)tablasimbolos[index].tipo) {
			printf("entra");
			//printTS();
			printSemanticError("el tipo de salida no concuerda con el tipo definido en la funcion.");
			return;
		}

		attrs tmp;
		//if (!equalSize(expr,tmp)) {
		//	printf("Semantic Error(%d): Return expresion not same size than return function.\n");
		//	return;
		//}

		res->type = expr.type;
	} else {
		printSemanticError("res not declared into function.");
		return;

	}

}

void compruebaUnario(attrs op, attrs o, attrs* res){

	if( strcmp(op.lex,"#")){
		if (o.type != LISTA /*|| isArray(o)*/) {
			printSemanticError("Operador solo para listas");
		}
		else{
			res->type = ENTERO;
		}
	}
	else if(strcmp(op.lex,"?")){
		if (o.type != LISTA){
			printSemanticError("Operador solo para listas");
		}
		else{
			// TODO !!!!!!!el tipo de la lista guardada
		}
	}
    else if (o.type != BOOLEANO /*|| isArray(o)*/) {
		printSemanticError("Operador unario para expresiones booleanas.");
	}
	else{
		res->type = BOOLEANO;
	}

	

}
// Busca una entrada según el nombre
int buscaNombre(attrs e){

    int i = TOPE -1;
	int found = 0;

	//printTS();

	while (i > 0 && !found && tablasimbolos[i].tipo_entrada != MARCA) {
		if (tablasimbolos[i].tipo_entrada == FUNCION && strcmp(e.lex, tablasimbolos[i].lex) == 0) {
			found = 1;
		} else {
			i--;
		}
	}

	if(!found) {
		printf("Semantic Error(%d): Ident not declared: %s\n", yylineno, e.lex);
		return -1;
	} else {
		return i;
	}
}


// Realiza la comprobación de la llamada a una función
void compruebaLlamada(attrs id, attrs* res){

	// printTS();
    int index = buscaNombre(id);

	if(index==-1) {

		currentFunction = -1;

		printf("\nSemantic Error(%d)): Function: Id not found %s.\n", yylineno, id.lex);
    } else {
		for(int i = 0 ; i < nParam ; i++){
			//printf(i);
		}
		//printf((char)nParam);
		if (nParam != tablasimbolos[index].nParam) {
			printSemanticError("numero de parametros no valido.");
		} else {

			currentFunction = index;
			res->lex = strdup(tablasimbolos[index].lex);
			res->type = tablasimbolos[index].tipo;
		}
		printf("hacemos llamada");
		printf("%d",res->type);
	}
}


// Comprobación de la operación +, - como signo unario
void compruebaSigno(attrs op, attrs o, attrs* res){

    if ((o.type != REAL && o.type != ENTERO) /*|| isArray(o)*/) {
		printf("Semantic Error(%d): Operator expects integer or real expression.", yylineno);
	}

	res->type = o.type;
	//res->nDim = 0;
	//res->tDim1 = 0;
	//res->tDim2 = 0;

}


// Realiza la comprobación de la operación +, - binaria
void compruebaSignoBin(attrs o1, attrs op, attrs o2, attrs* res){

    if (o1.type != o2.type) {
	    printf("Semantic Error(%d): Expressions must be equals types.", yylineno);
  		return;
  	}

	if (o1.type != ENTERO && o1.type != REAL) {
		printf("Semantic Error%d): Invalid type in op. Both must be equals.", yylineno);
		return;
	}
	res->type = o1.type;
    /*
	if (isArray(o1) && isArray(o2)){

		if(equalSize(o1,o2)){

			res->type = o1.type;
			res->nDim = o1.nDim;
			res->tDim1 = o1.tDim1;
			res->tDim2 = o1.tDim2;

		} else {

            printf("Semantic Error(%d): Size arrays must be same", yylineno);
			return;

		}

	} else {

		if (isArray(o1) && !isArray(o2)) {

			res->type = o1.type;
			res->nDim = o1.nDim;
			res->tDim1 = o1.tDim1;
			res->tDim2 = o1.tDim2;

		}

		if (!isArray(o1) && isArray(o2)){

			if (strcmp(op.lex,"-")==0){

				printf("Semantic Error(%d): Operation not allowed.", yylineno);
				return;

			} else {

				res->type = o2.type;
				res->nDim = o2.nDim;
				res->tDim1 = o2.tDim1;
				res->tDim2 = o2.tDim2;

			}

		}

	}*/

}

// Realiza la comprobación de la operaciónes binarias de listas
void compruebaListaBin(attrs o1, attrs op, attrs o2, attrs* res){

    if (o1.type != LISTA && o2.type != ENTERO) {
	    printf("Semantic Error(%d): El primer parametro debe ser lista y segundo entero.",yylineno);
  		return;
  	}
}

// Realiza la comprobación de la operaciónes binarias de listas
void compruebaListaConca(attrs o1, attrs op, attrs o2, attrs* res){

    if (o1.type != LISTA && o2.type != LISTA) {
	    printf("Semantic Error(%d): Ambos deben ser de tipo lista.",yylineno);
  		return;
  	}
}
// Realiza la comprobación de la operación ||
void compruebaBooleanos(attrs o1, attrs op, attrs o2, attrs* res){

    if (o1.type != o2.type) {
		printf("Semantic Error (%d): Expressions must be same types.",yylineno);
		return;
	}
	if (o1.type != BOOLEANO) {
		printSemanticError("operandos de tipo invalido, ambos tienen que ser iguales, esperaba BOOLEANO.");	
		return;
	}

	res->type = BOOLEANO;
}

// Realiza la comprobación de la operación <, >, <=, >=, <>
void compruebaRel(attrs o1, attrs op, attrs o2, attrs* res){

	//printTS();
	printf("%d",o1.type);
	printf(" ",o1.type);
	printf("%d",o2.type);

    if (o1.type != o2.type) {

		printf("Semantic Error (%d): Expressions must be same types.", yylineno);
		return;
	}
	if ((o1.type != ENTERO && o1.type != REAL) /*|| isArray(o1) || isArray(o2)*/) {
		printSemanticError("operandos de tipo invalido, ambos tienen que ser iguales, esperaba ENTERO o REAL.");				
		return;
	}

	res->type = BOOLEANO;
}
// Realiza la comprobación de la operación *, /
void compruebaProducto(attrs o1, attrs op, attrs o2, attrs* res){
    if (o1.type != o2.type) {
		printSemanticError("ambos operandos tienen que ser del mismo tipo.");	
		return;
	}

	if (o1.type != ENTERO && o1.type != REAL) {
		printSemanticError("operandos de tipo invalido, ambos tienen que ser iguales, esperaba ENTERO o REAL.");	
		return;
	}
	res->type = o1.type;
    /*
	if (isArray(o1) && isArray(o2)){

		if(equalSize(o1,o2)){

			res->type = o1.type;
			res->nDim = o1.nDim;
			res->tDim1 = o1.tDim1;
			res->tDim2 = o1.tDim2;

		} else {

            printf("Semantic Error(%d): Size arrays must be same", yylineno);
			return;

		}

	} else {

		if (isArray(o1) && !isArray(o2)) {

			res->type = o1.type;
			res->nDim = o1.nDim;
			res->tDim1 = o1.tDim1;
			res->tDim2 = o1.tDim2;

		}

		if (!isArray(o1) && isArray(o2)){

			if (strcmp(op.lex,"-")==0){

				printf("Semantic Error(%d): Operation not allowed.", yylineno);
				return;

			} else {

				res->type = o2.type;
				res->nDim = o2.nDim;
				res->tDim1 = o2.tDim1;
				res->tDim2 = o2.tDim2;

			}

		}

	}*/

}
// Realiza la comprobación de la operaciónes binarias de listas
void compruebaListaGet(attrs o1, attrs o2, attrs o3, attrs* res){

    if (o1.type != LISTA && o2.type != ENTERO && o3.type != ENTERO) {
	    printf("Semantic Error(%d): Ambos deben ser de tipo lista.", yylineno);
  		return;
  	}
}


// Añade una in de param formal
void addParametro(attrs e){

    int j = TOPE - 1, found = 0;

	while((j != currentFunction)  && (!found) ){

		if(strcmp(tablasimbolos[j].lex, e.lex) != 0) {

			j--;

		} else{

			found = 1;
			printf("Semantic Error(%d): Exist param: %s\n", yylineno, e.lex);

        }

	}

	if(!found) {

		Entrada nueva;
		nueva.tipo_entrada = PARAM;
		nueva.lex = e.lex;
		nueva.tipo = tipoGlobal;
		nueva.nParam = 0;
		addEntrada(nueva);

	}

}

void compruebaTipoIdentificador(attrs ident, attrs* res) {
	int i = TOPE-1;
	int encontrado = 0;
	printTS();
	while(i > 0 && !encontrado){
		int cmp = strcmp(tablasimbolos[i].lex, ident.lex);
		if( tablasimbolos[i].tipo_entrada == VAR && cmp == 0){
			encontrado =1;
		}
		else{
			i--;
		}	
	}
	if(encontrado){
		res->type = tablasimbolos[i].tipo;
	}
}

//
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
// Visualización
//

// Muestra una entrada de la tabla de símbolos
void printIn(int row){

    Entrada e = tablasimbolos[row];
	printf("\n\nTipo Entrada: %d\nLexema: %s\nTipo Dato: %d\nNum Parametros: %d\nDimensiones[i][j]: %d[%d][%d]\n",
		e.tipo_entrada, e.lex, e.tipo, e.nParam/* e.nDim, e.tDim1, e.tDim2*/);

}

// Muestra el type de la in
void printInType(Entrada type){



}

// Muestra el type del dato recibido
void printDataType(TipoDato type){



}

// Muestra la tabla de símbolos
void printTS(){

    int j = 0;
	char *t, *e;

	printf("--------------------------------\n");
	while(j <= TOPE-1) {
		if(tablasimbolos[j].tipo_entrada == 0) { e = "MARK"; }
		if(tablasimbolos[j].tipo_entrada == 1) { e = "FUNCTION"; }
		if(tablasimbolos[j].tipo_entrada == 2) { e = "VAR"; }
		if(tablasimbolos[j].tipo_entrada == 3) { e = "PARAM"; }

		if(tablasimbolos[j].tipo == 0) { t = "BOOLEANO"; }
		if(tablasimbolos[j].tipo == 1) { t = "ENTERO"; }
		if(tablasimbolos[j].tipo == 2) { t = "REAL"; }
		if(tablasimbolos[j].tipo == 3) { t = "CARACTER"; }
		if(tablasimbolos[j].tipo == 4) { t = "STRING"; }
		if(tablasimbolos[j].tipo == 5) { t = "LISTA"; }
		if(tablasimbolos[j].tipo == 6) { t = "NA"; }
		printf("----ELEMENTO %d-----------------\n", j);
		printf("-Entrada: %-12s", e);
		printf("-Lexema: %-12s", tablasimbolos[j].lex);
		printf("-type: %-10s", t);
		printf("-nParam: %-4d", tablasimbolos[j].nParam);
		//printf("-nDim: %-4d", ts[j].nDim);
		//printf("-tDim1: %-4d", ts[j].tDim1);
		//printf("-tDim2: %-4d\n", ts[j].tDim2);
		j++;
	}
	printf("--------------------------------\n");

}

// Muestra un atributo recibido
void printAttr(attrs e, char *msg){

    char *t;

	if(e.type == 0) { t = "BOOLEANO"; }
	if(e.type == 1) { t = "ENTERO"; }
	if(e.type == 2) { t = "REAL"; }
	if(e.type == 3) { t = "CARACTER"; }
	if(e.type == 4) { t = "STRING"; }
	if(e.type == 5) { t = "LISTA"; }
	if(e.type == 6) { t = "NA"; }
	printf("------%s-------------------------\n", msg);
	printf("-Atributos: %-4d", e.attr);
	printf("-Lexema: %-12s", e.lex);
	printf("-type: %-10s", t);
	//printf("-nDim: %-4d", e.nDim);
	//printf("-tDim1: %-4d", e.tDim1);
	//printf("-tDim2: %-4d\n", e.tDim2);
	printf("-------------------------------\n");
}

// Prints details about a semantic error.
void printSemanticError(const char* msg) {
	fprintf(stderr, "%sLínea %d:%s error semantico, %s\n", _CC_RED, yylineno, _CC_RESET, msg);
}

void incrementaNumParametros(){
	nParam++;
}