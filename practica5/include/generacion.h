#ifndef __GENERACION__INCLUIDO
#define __GENERACION__INCLUIDO

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "semantico.h"

extern FILE* archivo_compilado;
extern int hay_principal;
extern int contador_temporales;
extern int contador_etiquetas;
extern int declar_funciones;
extern int var_control;
extern int nivel_dec_fun;
extern attrs control_name;
extern attrs coma;


void generarFichero();
void cerrarFichero();

void generarTemporal();
void cerrarTemporal();
void rescatarInfoTemporal();

void generarFunciones();
void cerrarFunciones(); 


void guardarControl(attrs ident);
void compruebaTipos(attrs izq, attrs der);

void escribirTabulaciones();
void escribirSaltoLinea();
void escribirParentesis(int tipo);
void escribirReturn(attrs expr);

void ampliarLexFuncion(attrs ori, attrs ampl, attrs *res);

void escribirLibrerias();
void abrirBloque();
void cerrarBloque();
void declararTipo(attrs tipo);
void declararVariable(attrs variable);
void escribirComa();
void escribirPuntoYComa();
void introducirMain();

void generarAsignacion(attrs id, attrs exp);

void generarIDoConst(attrs atrib);
void generarBinario(attrs op, attrs exp1, attrs exp2, attrs* exp);
void generarTernario(attrs lista, attrs valor, attrs posicion);
void generarUnario(attrs op, attrs exp1, attrs* exp);
void escribir(attrs expresion);
void leer(attrs expresion);

void addATabla(attrs expresion);
int encontrarUltimoControl();
void emitirSaltoElse();
void emitirSaltoSalida();
void escribirEtiquetaElse();
void escribirEtiquetaSalida();
void quitarDeTabla();

void addATablaWhileRepeat(attrs expresion);
void escribirEtiquetaEntrada();
void saltoSalidaWhile();
void saltoEntradaWhileRepeat();
void saltoSalidaRepeat();
void escribirNombreExpresionControl(attrs expresion);
char* temporal();
char* etiqueta();

void moverposicionlista(attrs op, attrs lista);
void comienzolista(attrs lista);



void generarListaTemporal(attrs expresion, attrs* lista);
void addValorALista(attrs lista, attrs valor);
#endif