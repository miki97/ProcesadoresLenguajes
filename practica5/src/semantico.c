/* Fichero para declarar las funciones y elementos necesarios
para manejar la Tabla de Simbolos
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "semantico.h"
#include "colores.h"

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
int nParamLlamada =1;
///////////////////////////////////////////////////////////////////////////////
// Tabla de Símbolos
///////////////////////////////////////////////////////////

int buscaEntrada(attrs e){
    int i = TOPE -1;
	int found = 0;
	int finbloque=0;
	//printTS();

	while (i > 0 && !found && !finbloque) {
		if (strcmp(e.lex, tablasimbolos[i].lex) == 0) {
			found = 1;
		} else {
			i--;
		}
		if(tablasimbolos[i].tipo_entrada == FUNCION){
			finbloque=1;			
		}
	}

	if(!found) {
		return -1;
	} else {
		return i;
	}
}
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
	int i = buscaEntrada(in);
	if( i == -1){
		if(decVar ==0)
		{
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
		
	}
	else{
		if(decVar==0){
			printSemanticError("no se puede declarar la variable.");

		}
		
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
    /*if (tablasimbolos[TOPE-1].tipo_entrada == PARAM) {
        while(tablasimbolos[TOPE-1].tipo_entrada != FUNCION && TOPE > 0) {
    		TOPE--;
    	}
         //TOPE--;
	}*/
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

//funcion para comprobar una sentencia de asignacion
void compruebaAsignacion(attrs o1, attrs op, attrs o2, attrs* res  ){
	compruebaTipoIdentificador(o1,res);
    if(res->type != o2.type) {
        //printTS();
        //printf("tipo de prametro1: %d , tipo de parametro2: %d",$1.type,$3.type);
        printSemanticError("tipos de operandos en la asignacion tienen que ser iguales.");
    }
}

// Comprueba si el tipo de la expresión coincide con lo que devuelve la función
void compruebaDevuelve(attrs expr, attrs* res){

    int index = encontrarSiguienteFuncion();
	if (index > -1) {
		if ((int)expr.type != (int)tablasimbolos[index].tipo) {
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

	// printf("hihihihhi %s",op.lex);
	if( strcmp(op.lex,"#")==0){
		if (!esLista(o)) {
			printSemanticError("operador solo para listas.");
		}
		else{
			res->type = ENTERO;
		}
	}
	else if(strcmp(op.lex,"?")==0){
		if (!esLista(o)){
			printSemanticError("operador solo para listas.");
		}
		else if (o.type == LISTA_BOOLEANO){
				res->type = BOOLEANO;							
			}
			else if(o.type == LISTA_ENTERO ){
				res->type = ENTERO;												
			}
			else if(o.type == LISTA_REAL){
				res->type = REAL;				
			}
			else if (o.type == LISTA_CARACTER){
				res->type = CARACTER;
			}
			else if(o.type == LISTA_STRING){
				res->type = STRING;								
			}
			
			// TODO !!!!!!!el tipo de la lista guardada
	}
    else if (o.type != BOOLEANO ) {
		printSemanticError("Operador unario para expresiones booleanas.");
	}
	else{
		res->type = BOOLEANO;
	}

	

}
// Busca una entrada según el nombre
int buscaNombre(attrs e) {

    int i = TOPE -1;
	int found = 0;

	//printTS();

	while ( i > 0 && !found ) {
		if (tablasimbolos[i].tipo_entrada == FUNCION && strcmp(e.lex, tablasimbolos[i].lex) == 0) {
			found = 1;
		} else {
			i--;
		}

		// fprintf(stderr, "%s IMPRIMO i: %d, found = %d\n\n\n%s", _CC_BOLDGREEN, i, found, _CC_RESET);
	}
	// printTS();

	if(!found) {
		//DEBUG
		//fprintf(stderr, "%s NO ENCUENTRO LA FUNCION, DEVUELVO -1 \n\n%s", _CC_BOLDBLUE, _CC_RESET);
		return -1;
	} else {
		// fprintf(stderr, "%s LO HE ENCONTRADO %d\n\n\n%s", _CC_BOLDBLUE, i, _CC_RESET);
		return i;
	}
}


/**
 * Funcion para comprobar que el numero de parametro y el tipo de los parametros es el correcto
 * 
 * */
void compruebaLlamada(attrs id, attrs* res){
	//DEBUG
	// printTS();
    int index = buscaNombre(id);
	//DEbUG
	// fprintf(stderr, "%s TENGO UN VALOR %d\n %s", _CC_BOLDBLUE, index, _CC_RESET);		

	if (index == -1) {
		currentFunction = -1;
    } else {
		//DEBUG
		// fprintf(stderr, "%sNumero de parametros funcion: %d, Numero de parametros en la tabla de simbolos: %d%s \n", _CC_BOLDBLUE, nParam, tablasimbolos[index].nParam, _CC_RESET);
			
		if (nParam != tablasimbolos[index].nParam) {
			printSemanticError("numero de parametros no valido.");
		} else {
			//printTS();
			int correcto = 1;
			int i = index+1;
			int j = TOPE -nParam;
			for( ; i <= (index+nParam) && correcto && j < TOPE ; i++){
				if(tablasimbolos[i].tipo != tablasimbolos[j].tipo){
					correcto =0;
					printSemanticError("El tipo de parametros no valido:");					
				
				}
				j++;
			}
			currentFunction = index;
			res->lex = strdup(tablasimbolos[index].lex);
			res->type = tablasimbolos[index].tipo;
		}
		TOPE -= nParam;
		//printf("hacemos llamada");
		//printTS();		
		//printf("%d",res->type);
	}
}

/**Funcion para añadir los parametros con los que se llama una función 
 * a la tabla de simbolos para permitir la comprobacion despues al realizar 
 * la llamada de la funcion
 * */
bool addPar(attrs in){
    // Si se tienen más entradas de las que puede alojar la tabla de símbolos
    // dará un error, si no, se inserta
	if(TOPE < MAX_IN) {

		tablasimbolos[TOPE].tipo_entrada= VAR;
		tablasimbolos[TOPE].lex=in.lex;
		tablasimbolos[TOPE].tipo= in.type;
		tablasimbolos[TOPE].nParam=0;

		// Se aumenta el contador de entradas
		TOPE++;
		return true;
	} else {
		printSemanticError("desbordamiento de pila.");
		return false;
	}

}	

// Comprobación de la operación +, - como signo unario
void compruebaSigno(attrs op, attrs o, attrs* res){

    if ((o.type != REAL && o.type != ENTERO) ) {
		printSemanticError("el signo solo valido para entero o real");
	}
	else{
		res->type = o.type;
	}
	
}


// Realiza la comprobación de la operación +, - binaria
void compruebaSumaBin(attrs o1, attrs op, attrs o2, attrs* res){

	// Si el operador izquierdo es una lista, comprobar el tipo de la lista con el derecho.
	if (esLista(o1) && (getTipoLista(o1.lex) != o2.type)) {
		
		printSemanticError("operando sobre lista tiene que ser del mismo tipo que la lista.");	
		return;
	} 
	// Si el operador derecho es una lista, comprobar que el izquierdo es una lista.
	else if (esLista(o2) && (getTipoLista(o2.lex) != o1.type)) {
		
		printSemanticError("operando sobre lista tiene que ser del mismo tipo que la lista.");	
		return;
	}
	else if (esLista(o1) || esLista(o2)) {
		if (esLista(o1) && esLista(o2)) {
			printSemanticError("operador no valido para dos listas.");
			return;
		}
		else if (esLista(o1)) {
			if (tipoDeListaATipoDeDato(o1.type) != ENTERO && tipoDeListaATipoDeDato(o1.type) != REAL) {
				printSemanticError("operandos de tipo invalido, esperaba lista de ENTERO o REAL.");
				return;				
			}
			if (o2.type != ENTERO && o2.type != REAL) {
				printSemanticError("operandos de tipo invalido, esperaba ENTERO o REAL.");
				return;
			}

			res->type = o1.type;
			return;
		}
		else if (esLista(o2)) {
			// printf("este es el simbolo: %s",op.lex);
			if ( strcmp(op.lex,"-") == 0) {
				printSemanticError("operandos de tipo invalido, no se puede restar una lista.");
				return;				
			}	
			if (tipoDeListaATipoDeDato(o2.type) != ENTERO && tipoDeListaATipoDeDato(o2.type) != REAL) {
				printSemanticError("operandos de tipo invalido, esperaba lista de ENTERO o REAL.");
				return;
			}
			if (o1.type != ENTERO && o1.type != REAL) {
				printSemanticError("operandos de tipo invalido, esperaba ENTERO o REAL.");
				return;
			}

			res->type = o2.type;
			return;
		}
	}
	// Comprobar mismo tipo o operacion sobre lista
    else if (o1.type != o2.type) {
		printSemanticError("ambos operandos tienen que ser del mismo tipo.");	
		
		return;
	}	
	// Si no es ENTERO o REAL
	else if ((o1.type != ENTERO && o1.type != REAL) || (o2.type != ENTERO && o2.type != REAL)) {
		printSemanticError("operandos de tipo invalido, esperaba ENTERO o REAL.");	
		return;
	}

	res->type = o1.type;
}


// Realiza la comprobación de la operaciónes binarias de listas
void compruebaListaBin(attrs o1, attrs op, attrs o2, attrs* res){

    if (!esLista(o1)) {
	    printSemanticError("el primer elemento debe ser una lista");
  	}
	else if(o2.type != ENTERO){
		printSemanticError("el segundo elemento debe ser entero");		
	}

	if(strcmp(op.lex,"@@") ==0){
		res->type = tipoDeListaATipoDeDato(o1.type);		
	}	
	else{
		res->type = o1.type;
	}
}

// Realiza la comprobación de la operaciónes binarias de listas
void compruebaListaConca(attrs o1, attrs op, attrs o2, attrs* res){

    if (!esLista(o1) || !esLista(o2)) {
		printSemanticError("el operador de concatenar solo para dos lsitas");		
  	}
	else if( o1.type != o2.type){
		printSemanticError("solo se pueden concatenar listas del mismo tipo");				
	}
	else{
		res->type = o1.type;		
	}	  
}
void compruebaCondicion(attrs o1){
	if(o1.type != BOOLEANO){
        printSemanticError("expresion de condicion no es logica");
    }
}
// Realiza la comprobación de la operación || y && o xor
void compruebaBooleanos(attrs o1, attrs op, attrs o2, attrs* res){

    if (o1.type != o2.type) {
		printSemanticError("ambos operandos deben der del mismo tipo, se esperaba BOOLEANO");
	}
	else if (o1.type != BOOLEANO) {
		printSemanticError("operandos de tipo invalido, ambos tienen que ser iguales, esperaba BOOLEANO.");	
	}
	else{
		res->type = BOOLEANO;				
	}
}

// Realiza la comprobación de la operación <, >, <=, >=, <> y el ==
void compruebaRel(attrs o1, attrs op, attrs o2, attrs* res){

	//printTS();
	//fprintf(stderr,"tipo bool1%d ",o1.type);
	//fprintf(stderr,"tipobool2%d",o2.type);

    if (o1.type != o2.type) {

		printSemanticError("diferentes tipos en la relacion");
	}
	else{
		res->type = BOOLEANO;
	}

}

/**
 * Comprueba la integridad semantica de los operadores en una operacion de producto. 
 * @param attrs  o1  Operando izquierdo.
 * @param attrs  op
 * @param attrs  o2  Operando derecho.
 * @param attrs* res Parte derecha de la produccion.
 */
void compruebaProducto(attrs o1, attrs op, attrs o2, attrs* res) {
	// Si el operador izquierdo es una lista, comprobar el tipo de la lista con el derecho.
	//fprintf(stderr,"el tipo del1 %d el tipo del2 %d \n",o1.type,o2.type);
	if (esLista(o1) && (getTipoLista(o1.lex) != o2.type)) {
		printSemanticError("operando sobre lista tiene que ser del mismo tipo que la lista.");	
		return;
	} 
	// Si el operador derecho es una lista, comprobar que el izquierdo es una lista.
	else if (esLista(o2) && (getTipoLista(o2.lex) != o1.type)) {
		printSemanticError("operando sobre lista tiene que ser del mismo tipo que la lista.");	
		return;
	}
	else if (esLista(o1) || esLista(o2)) {
		if (esLista(o1) && esLista(o2)) {
			printSemanticError("operador * no valido para dos listas.");
			return;
		}
		else if (esLista(o1)) {
			if (tipoDeListaATipoDeDato(o1.type) != ENTERO && tipoDeListaATipoDeDato(o1.type) != REAL) {
				printSemanticError("operandos de tipo invalido, esperaba lista de ENTERO o REAL.");
				return;
			}
			if (o2.type != ENTERO && o2.type != REAL) {
				printSemanticError("operandos de tipo invalido, esperaba ENTERO o REAL.");
				return;
			}

			res->type = o1.type;
			return;
		}
		else if (esLista(o2)) {
			if (strcmp(op.lex,"/") == 0) {
				printSemanticError("operandos de tipo invalido, no se puede dividir entre lista.");
				return;
			}

			if (tipoDeListaATipoDeDato(o2.type) != ENTERO && tipoDeListaATipoDeDato(o2.type) != REAL) {
				printSemanticError("operandos de tipo invalido, esperaba lista de ENTERO o REAL.");
				return;
			}
			if (o1.type != ENTERO && o1.type != REAL) {
				printSemanticError("operandos de tipo invalido, esperaba ENTERO o REAL.");
				return;
			}

			res->type = o2.type;
			return;
		}
	}
	// Comprobar mismo tipo o operacion sobre lista
    else if (o1.type != o2.type) {
		printSemanticError("ambos operandos tienen que ser del mismo tipo.");	
		return;
	}
	// Si no es ENTERO o REAL
	else if ((o1.type != ENTERO && o1.type != REAL) || (o2.type != ENTERO && o2.type != REAL)) {
		printSemanticError("operandos de tipo invalido, esperaba ENTERO o REAL.");	
		return;
	}

	res->type = o1.type;
}

// Realiza la comprobación de la operaciónes get de listas
void compruebaListaGet(attrs o1, attrs o2, attrs o3, attrs* res){

    if (!esLista(o1)) {
	    printSemanticError("debe ser una lista.");
  		return;
  	}
	else if(tipoDeListaATipoDeDato(o1.type) != o2.type ){
		printSemanticError("el elemento debe ser del mismo tipo que la lista");
	}
	else if(o3.type != ENTERO){
		printSemanticError("el indice debe ser un numero entero");
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
			printSemanticError("el parametro ya existia");			
			//printf("Semantic Error(%d): Exist param: %s\n", yylineno, e.lex);
// tipo de 2: 7
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
	//printTS();
	while(i > 0 && !encontrado){
		int cmp = strcmp(tablasimbolos[i].lex, ident.lex);
		if( tablasimbolos[i].tipo_entrada == VAR && cmp == 0){
			encontrado =1;
		}
		else{
			i--;
		}	
	}
	//printf("Encontrado en linea %d",i);
	if (encontrado) {
		res->type = tablasimbolos[i].tipo;
	}
	else {
		//printTS();
		printSemanticError("identificador no declarado");
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
	// printf("\n\nTipo Entrada: %d\nLexema: %s\nTipo Dato: %d\nNum Parametros: %d\n",
	// 	e.tipo_entrada, e.lex, e.tipo, e.nParam);

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
		if(tablasimbolos[j].tipo_entrada == 4)	{ e = "DESCRIPT";}

		if(tablasimbolos[j].tipo == 0) { t = "BOOLEANO"; }
		if(tablasimbolos[j].tipo == 1) { t = "ENTERO"; }
		if(tablasimbolos[j].tipo == 2) { t = "REAL"; }
		if(tablasimbolos[j].tipo == 3) { t = "CARACTER"; }
		if(tablasimbolos[j].tipo == 4) { t = "STRING"; }
		if(tablasimbolos[j].tipo == 5) { t = "LISTA"; }
		if(tablasimbolos[j].tipo == 6) { t = "LISTA_BOOLEANO";}
		if(tablasimbolos[j].tipo == 7) { t = "LISTA_ENTERO";}
		if(tablasimbolos[j].tipo== 8) { t = "LISTA_REAL";}
		if(tablasimbolos[j].tipo == 9) { t = "LISTA_CARACTER";}
		if(tablasimbolos[j].tipo == 10) { t = "LISTA_STRING";}
		if(tablasimbolos[j].tipo == 11) { t = "NA"; }
		printf("----ELEMENTO %d-----------------\n", j);
		printf("-Entrada: %-12s", e);
		printf("-Lexema: %-12s", tablasimbolos[j].lex);
		printf("-type: %-10s", t);
		printf("-nParam: %-4d", tablasimbolos[j].nParam);
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
	if(e.type == 6) { t = "LISTA_BOOLEANO";}
	if(e.type == 7) { t = "LISTA_ENTERO";}
	if(e.type == 8) { t = "LISTA_REAL";}
	if(e.type == 9) { t = "LISTA_CARACTER";}
	if(e.type == 10) { t = "LISTA_STRING";}
	if(e.type == 11) { t = "NA"; }
	printf("------%s-------------------------\n", msg);
	printf("-Atributos: %-4d", e.attr);
	printf("-Lexema: %-12s", e.lex);
	printf("-type: %-10s", t);
	printf("-------------------------------\n");
}

// Prints details about a semantic error.
void printSemanticError(const char* msg) {
	fprintf(stderr, "%sLínea %d:%s error semantico, %s\n", _CC_RED, yylineno, _CC_RESET, msg);
}

/**
 *  Asigna en res el tipo de lista.
 */
void compruebaTipoLista(attrs con, attrs *res) {
	if (con.type == BOOLEANO) {
		res->type = LISTA_BOOLEANO;
	} else if (con.type == ENTERO) {
		res->type = LISTA_ENTERO;
	} else if (con.type == REAL) {
		res->type = LISTA_REAL;
	} else if (con.type == CARACTER) {
		res->type = LISTA_CARACTER;
	} else if (con.type == STRING) {
		res->type = LISTA_STRING;
	}
}

/**
 * Comprueba si es de algun tipo lista.
 */
bool esLista(attrs con) {
	if (con.type == LISTA_BOOLEANO 	|| 
		con.type == LISTA_ENTERO 	|| 
		con.type == LISTA_REAL 		||  
		con.type == LISTA_CARACTER  ||
		con.type == LISTA_STRING ) {
		return true;
	}
	return false;
}
/**
 * Comprueba el tipo de la lista en la tabla de simbolos.
 * @param const char* lex Identificador de la lista.
 */
TipoDato getTipoLista(const char* lex) {

	int i = TOPE-1;
	int encontrado = 0;
	
	while(i > 0 && !encontrado) {
		int cmp = strcmp(tablasimbolos[i].lex, lex);
		if( tablasimbolos[i].tipo_entrada == VAR && cmp == 0){
			encontrado =1;
		}
		else{
			i--;
		}	
	}
	if (encontrado) {
		return tipoDeListaATipoDeDato(tablasimbolos[i].tipo);
	} else {
		printSemanticError("declaracion implicita de lista.");
		return -1;
	}
}

/**
 * Relaciona los tipos de listas con los tipos de datos basicos.
 */
TipoDato tipoDeListaATipoDeDato(TipoDato tipoLista) {
	if (tipoLista == LISTA_BOOLEANO) {
		return BOOLEANO;
	} else if (tipoLista == LISTA_ENTERO) {
		return ENTERO;
	} else if (tipoLista == LISTA_REAL) {
		return REAL;
	} else if (tipoLista == LISTA_CARACTER) {
		return CARACTER;
	} else if (tipoLista == LISTA_STRING) {
		return STRING;
	}
}

/********************************************
**************generacion codigo**************
*********************************************/
/*FILE *file;
TipoDato tipoTMP = 0;

int temp = 0;
int etiq = 0;
int varPrinc = 1;
int decIF = 0, decElse=0;
int principal =1;

char *temporal(){
	char *cadena;
	cadena = (char *) malloc(20);
	sprintf(cadena, "temp%d", temp);
	temp++;
	return cadena;
}

char *etiqueta(){
	char *cadena;
	cadena = (char *) malloc(20);
	sprintf(cadena, "etiqueta_%d", etiq);
	etiq++;
	return cadena;
}

// Abre un fichero para crear el código intermedio
void generarFichero(){
    file = fopen("generado.c", "w");
	fputs("#include <stdio.h>\n", file);
}

// Cerrar fichero
void cerrarFichero(){
	fputs("}\n", file);
    fclose(file);
}

void generarVariables(attrs a){
	char *sent;
	sent = (char *) malloc(1000);

	if( principal ==1){
	if (tipoTMP == ENTERO){
		sprintf(sent,"int %s;\n", a.lex);
		fputs(sent,file);
	}
	else if (tipoTMP == REAL){
		sprintf(sent,"float %s;\n", a.lex);
		fputs(sent,file);
	}
	else if (tipoTMP == CARACTER){
		sprintf(sent,"char %s;\n", a.lex);
		fputs(sent,file);
	}
	else if (tipoTMP == BOOLEANO){
		
		tablasimbolos[TOPE].tipo_entrada = DESCRIPT;
		tablasimbolos[TOPE].lex = "??";
		tablasimbolos[TOPE].descriptor.EtiquetaSalida = etiqueta();
		TOPE++;
		sprintf(sent, "int %s;\n", a.lex);
		fputs(sent, file);
		
	}
	}
	//printTS();
	free(sent);
}

void insertarCond(int type){

	char * cadena, *sent;
	int topeTMP = TOPE;
	cadena = (char *) malloc(20);
	sent = (char *) malloc(150);


	while(TF[topeTMP].tipo_entrada != DESCRIPT){
		topeTMP--;
	}
	if(type == 1){
		sprintf(cadena, "temp%d",temp-1);
		TF[topeTMP].lex = (char *) malloc(50);
		strcpy(TF[topeTMP].lex,cadena);
		sprintf(sent,"if(!%s) goto %s;\n",cadena,TF[topeTMP].descriptor.EtiquetaElse);
	}
	else if(type == 2){
				sprintf(cadena, "temp%d",temp-1);
				sprintf(sent,"if(!%s) goto %s;\n",cadena,TF[topeTMP].descriptor.EtiquetaSalida);
			}

	fputs(sent,file);
	free(sent);
	free(cadena);
}

void pintaTMP(){
	char *cadena;
	cadena = (char *) malloc(200);
	sprintf(cadena, "valortmp = %i", tipoTMP);
	printSemanticError(cadena);
}*/