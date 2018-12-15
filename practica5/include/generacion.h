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


void generarFichero();
void cerrarFichero();

void escribirTabulaciones();


void intercambiaFichero();


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

#endif