#include "generacion.h"

FILE *archivo_compilado, *aux;
int hay_principal = 0;
int contador_temporales = 0;
int contador_etiquetas = 0;
int nivel_tab = 0;
int nivel_func = 0;
int declar_funciones = 0;
int primera_vez = 1;
int var_control = 0;
int nivel_dec_fun = 0;
attrs control_name;
attrs coma;


// Abre un fichero para crear el código intermedio
void generarFichero(){
    archivo_compilado = fopen("./gen/generado.c", "w");
	coma.lex = ", ";
	//archivo_compilado2 = fopen("dec_fun.c", "w");
}

// Cerrar fichero
void cerrarFichero(){
	escribirTabulaciones();
	fprintf(archivo_compilado, "return 0;\n");
	cerrarBloque();

    fclose(archivo_compilado);
}

// Abre fichero temporal para crear código intermedio
void generarTemporal() {
	aux = archivo_compilado;
	archivo_compilado = fopen("./gen/temp.c", "w");
}

// Cierra un fichero temporal
void cerrarTemporal() {
	fclose(archivo_compilado);
	archivo_compilado = aux;
}

// Pasamos la información del fichero temporal al principal
void rescatarInfoTemporal(){
	int leido;

	aux = fopen("./gen/temp.c", "r");

	while ((leido = fgetc(aux)) != EOF) 
		fputc(leido, archivo_compilado);

	fclose(aux);

	// Volvemos a abrir truncando a 0 y cerramos
	aux = fopen("./gen/temp.c", "w+");
	fclose(aux);
}

void generarFunciones() {
	if (!nivel_dec_fun) {
		aux = archivo_compilado;
		archivo_compilado = fopen("./gen/dec_fun.c", "a");
	}

	nivel_dec_fun++;
}

void cerrarFunciones() {
	nivel_dec_fun--;

	if (!nivel_dec_fun){
		fclose(archivo_compilado);
		archivo_compilado = aux;
	}
}

char *temporal() {
	char *nombre = malloc(8*sizeof(char)) ;
	sprintf(nombre, "temp%d", contador_temporales);
	++contador_temporales;
	return nombre;
}

char *etiqueta() {
	char *nombre = malloc(11*sizeof(char)) ;
	sprintf(nombre, "etiqueta%d", contador_etiquetas);
	contador_etiquetas++;
	return nombre;
}

void guardarControl(attrs ident){
	control_name.attr = ident.attr;
	control_name.lex = ident.lex;
	control_name.type = ident.type;
	control_name.nDim = ident.nDim; 
}

void compruebaTipos(attrs izq, attrs der){
    if (izq.type != der.type)
        printSemanticError("controlador y expresión de paso tienen que ser del mismo tipo.");
}

void escribirLibrerias() {
	fprintf(archivo_compilado, "#include <stdlib.h>\n#include <stdio.h>\n\n");
}

void escribirSaltoLinea() {
	fprintf(archivo_compilado, "\n");
}

void escribirTabulaciones() {
	int nivel = (nivel_dec_fun > 0) ? nivel_func : nivel_tab;

	for (int i = 0; i < nivel; i++)
		fprintf(archivo_compilado, "\t");
}

void escribirReturn(attrs expr){
	escribirTabulaciones();
	fprintf(archivo_compilado, "return %s;\n", expr.lex);
}

void abrirBloque() {
	if (hay_principal) {
		escribirTabulaciones();
		fprintf(archivo_compilado, "{\n");

		if (nivel_dec_fun > 0)
			nivel_func += 1;
		else
			nivel_tab += 1;
    }
}

void cerrarBloque() {
	if (nivel_dec_fun > 0)
		nivel_func -= 1;
	else
		nivel_tab -= 1;
	
	escribirTabulaciones();
	fprintf(archivo_compilado, "}\n");
	escribirSaltoLinea();
}

void escribirParentesis(int tipo){
	if (!tipo)
		fprintf(archivo_compilado, "(");
	else
		fprintf(archivo_compilado, ")");
}

void declararTipo(attrs tip) {
	TipoDato tipo = tip.type;

	if (!decParam)
		escribirTabulaciones();

	if (tipo == ENTERO || tipo == BOOLEANO) {
		fprintf(archivo_compilado, "int ");
	}
	else if (tipo == REAL) {
		fprintf(archivo_compilado, "float ");
	}
	else if (tipo == CARACTER) {
		fprintf(archivo_compilado, "char ");
	}

	// TO-DO: Parte optativa: añadir listas
}

void declararVariable(attrs variable) {
    if(decVar != -1){
        fprintf(archivo_compilado, "%s", variable.lex);
    }   
}

void escribirComa() {
	fprintf(archivo_compilado, ", ");
}

void escribirPuntoYComa() {
	fprintf(archivo_compilado, ";\n");
}

void ampliarLexFuncion(attrs ori, attrs ampl, attrs *res){
	char *original = ori.lex;
	char *amp = ampl.lex;
	res->lex = (char*) malloc((strlen(original) + strlen(amp)) * sizeof(char));
	strcpy(res->lex, original);
	strcat(res->lex, amp);
}

void introducirMain(){
	fprintf(archivo_compilado, "int main(int argc, char *argv[]) {\n");
	nivel_tab += 1;
	hay_principal = 1;
}

void generarAsignacion(attrs id, attrs exp) {
	escribirTabulaciones();
	fprintf(archivo_compilado, "%s = %s;\n", id.lex, exp.lex);
}

void addATabla(attrs expresion) {
	DescriptorDeInstrControl control;
	control.NombreVarControl = expresion.lex;
	control.EtiquetaElse = etiqueta();
	control.EtiquetaSalida = etiqueta();

	tablasimbolos[TOPE].tipo_entrada = DESCRIPT;
	tablasimbolos[TOPE].descriptor = control;
    tablasimbolos[TOPE].lex = "??";
    //printTS();
	TOPE++;
}

int encontrarUltimoControl() {
	int i = TOPE-1;
	for (; tablasimbolos[i].tipo_entrada != DESCRIPT; --i);
	return i;
}

void emitirSaltoElse() {
	// Recogemos el último control de la tabla de símbolos
	int pos = encontrarUltimoControl();
	escribirSaltoLinea();
	escribirTabulaciones();
	fprintf(archivo_compilado, "if (!%s) goto %s;\n", tablasimbolos[pos].descriptor.NombreVarControl,
			tablasimbolos[pos].descriptor.EtiquetaElse);
}

void emitirSaltoSalida() {
	int pos = encontrarUltimoControl();
	escribirTabulaciones();
	fprintf(archivo_compilado, "goto %s;\n", tablasimbolos[pos].descriptor.EtiquetaSalida);
}

void escribirEtiquetaElse() {
	int pos = encontrarUltimoControl();
	//escribirSaltoLinea();
	escribirTabulaciones();
	fprintf(archivo_compilado, "%s:;\n", tablasimbolos[pos].descriptor.EtiquetaElse);
    //fprintf(archivo_compilado, "%s:\n;\n", tablasimbolos[pos].descriptor.EtiquetaElse);
}

void escribirEtiquetaSalida() {
	int pos = encontrarUltimoControl();
	//escribirSaltoLinea();
	escribirTabulaciones();
	fprintf(archivo_compilado, "%s:;\n", tablasimbolos[pos].descriptor.EtiquetaSalida);
}

void quitarDeTabla() {
	int pos = encontrarUltimoControl();
	TOPE = pos;
}

void escribir(attrs expresion) {
	escribirTabulaciones();

	if (expresion.type== STRING) {
		fprintf(archivo_compilado, "printf(\"%%s\", %s);\n", expresion.lex);
	}
	else if (expresion.type== ENTERO || expresion.type== BOOLEANO) {
		fprintf(archivo_compilado, "printf(\"%%d\", %s);\n", expresion.lex);
	}
	else if (expresion.type==  CARACTER) {
		fprintf(archivo_compilado, "printf(\"%%c\", %s);\n", expresion.lex);
	}
	else if (expresion.type== REAL) {
		fprintf(archivo_compilado, "printf(\"%%f\", %s);\n", expresion.lex);
	}
}

void leer(attrs expresion) {
    if (decVar == -1){
        int pos = buscaEntrada(expresion);

	    escribirTabulaciones();

	    TipoDato tipo = tablasimbolos[pos].tipo;
        if (tipo == STRING) {
            fprintf(archivo_compilado, "scanf(\"%%s\", &%s);\n", expresion.lex);
        }
        else if (tipo == ENTERO || tipo == BOOLEANO) {
            fprintf(archivo_compilado, "scanf(\"%%d\", &%s);\n", expresion.lex);
        }
        else if (tipo ==  CARACTER) {
            fprintf(archivo_compilado, "scanf(\"%%c\", &%s);\n", expresion.lex);
        }
        else if (tipo == REAL) {
            fprintf(archivo_compilado, "scanf(\"%%f\", &%s);\n", expresion.lex);
        }
    }
}

void generarBinario(attrs op, attrs exp1, attrs exp2, attrs* exp) {
	// 1. Cogemos la siguiente variable temporal
	char *variable = temporal();

	// 2. La declaramos
	declararTipo(exp1);
	fprintf(archivo_compilado, "%s;\n",  variable);
	escribirTabulaciones();
    fprintf(archivo_compilado, "%s = %s %s %s;\n", variable, exp1.lex, op.lex, exp2.lex);
	exp->lex = variable;
}

void generarUnario(attrs op, attrs exp1, attrs* exp) {
	char* variable = temporal();

	declararTipo(exp1);
	fprintf(archivo_compilado, "%s; \n", variable);
	escribirTabulaciones();
	fprintf(archivo_compilado, "%s = %s%s", variable, op.lex, exp1.lex);
	exp->lex = variable;
}

void addATablaWhileRepeat(attrs expresion) {
	DescriptorDeInstrControl control;
	control.NombreVarControl = expresion.lex;
	control.EtiquetaEntrada = etiqueta();
	control.EtiquetaSalida = etiqueta();

	tablasimbolos[TOPE].tipo_entrada = DESCRIPT;
	tablasimbolos[TOPE].descriptor = control;
    tablasimbolos[TOPE].lex = "??";
	++TOPE;
}

void escribirEtiquetaEntrada() {
	int pos = encontrarUltimoControl();
	//escribirSaltoLinea();
	escribirTabulaciones();
	fprintf(archivo_compilado, "%s:;\n", tablasimbolos[pos].descriptor.EtiquetaEntrada);
}

void escribirNombreExpresionControl(attrs expresion) {
	int pos = encontrarUltimoControl();
	tablasimbolos[pos].descriptor.NombreVarControl = expresion.lex;
}

void saltoSalidaWhile() {
	int pos = encontrarUltimoControl();
	escribirSaltoLinea();
	escribirTabulaciones();
	fprintf(archivo_compilado, "if (!%s) goto %s;\n", tablasimbolos[pos].descriptor.NombreVarControl,
			tablasimbolos[pos].descriptor.EtiquetaSalida);
}

void saltoEntradaWhileRepeat() {
	int pos = encontrarUltimoControl();
	escribirTabulaciones();
	fprintf(archivo_compilado, "goto %s;\n", tablasimbolos[pos].descriptor.EtiquetaEntrada);
}