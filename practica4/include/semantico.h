#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef enum {
	MARCA = 0, /* marca comienzo bloque */
	FUNCION,   /* si es subprograma */
	VAR,       /* si es variable */
	PARAM      /* si es parametro formal */

} TipoEntrada;

typedef enum {
    BOOLEANO,
	ENTERO,
	REAL,
	CARACTER,
	STRING,
	LISTA,
	NA,
    NOT_ASIG = 0

} TipoDato;

typedef struct {
	TipoEntrada tipo_entrada;
	char *lex;
	TipoDato tipo;
	int nParam;
} Entrada;

//creo que esto por ahora no nos sirve
typedef struct {

	int attr;
	char *lex;
	TipoDato type;
	unsigned int nDim;

	// Tamaño de la dimensión 1
	int tDim1;

	// Tamaño de la dimensión 2
	int tDim2;

} attrs;
/////////

#define YYSTYPE attrs
#define MAX_IN 1000

Entrada tablasimbolos[MAX_IN];
extern long int TOPE ;
extern int line ;
extern unsigned int funcion;
extern TipoDato tipoGlobal;
extern int currentFunction;
extern int nParam;
extern int decParam;
extern int decVar;

// Funciones
int  addEntrada(Entrada);
int  eliminarEntrada();
void limpiarBloque();
void addMarca();
int  setTipo(attrs);
void addFuncion(attrs);
void actualizarNparam(attrs);
int  encontrarSiguienteFuncion();
void compruebaDevuelve(attrs expr, attrs* res);
void compruebaUnario(attrs op, attrs o, attrs* res);
int  buscaNombre(attrs e);
void compruebaLlamada(attrs id, attrs* res);
void compruebaSigno(attrs op, attrs o, attrs* res);
void compruebaSignoBin(attrs o1, attrs op, attrs o2, attrs* res);
void compruebaListaBin(attrs o1, attrs op, attrs o2, attrs* res);
void compruebaListaConca(attrs o1, attrs op, attrs o2, attrs* res);
void compruebaBooleanos(attrs o1, attrs op, attrs o2, attrs* res);
void compruebaRel(attrs o1, attrs op, attrs o2, attrs* res);
void compruebaProducto(attrs o1, attrs op, attrs o2, attrs* res);
void compruebaListaGet(attrs o1, attrs o2, attrs o3, attrs* res);
void addParametro(attrs e);