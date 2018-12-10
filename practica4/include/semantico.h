#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define true 1
#define false 0
#define bool int

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
	LISTA_BOOLEANO,
	LISTA_ENTERO,
	LISTA_REAL,
	LISTA_CARACTER,
	LISTA_STRING,
	NA,
    NOT_ASIG = 0
} TipoDato;

typedef struct {
	TipoEntrada tipo_entrada;
	char *lex;
	TipoDato tipo;
	int nParam;
	TipoDato tipolista;
} Entrada;

//creo que esto por ahora no nos sirve
typedef struct {
	int attr;           /**/
	char *lex;          /**/
	TipoDato type;      /**/
	unsigned int nDim;  /**/
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
extern int nParamLlamada;
// Funciones
int buscaEntrada(attrs e);
int  addEntrada(Entrada);
int addVar(attrs in);
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
void compruebaAsignacion(attrs o1, attrs op, attrs o2,attrs* res  );
void compruebaLlamada(attrs id, attrs* res);
void compruebaSigno(attrs op, attrs o, attrs* res);
void compruebaSumaBin(attrs o1, attrs op, attrs o2, attrs* res);
void compruebaListaBin(attrs o1, attrs op, attrs o2, attrs* res);
void compruebaListaConca(attrs o1, attrs op, attrs o2, attrs* res);
void compruebaBooleanos(attrs o1, attrs op, attrs o2, attrs* res);
void compruebaRel(attrs o1, attrs op, attrs o2, attrs* res);
void compruebaProducto(attrs o1, attrs op, attrs o2, attrs* res);
void compruebaListaGet(attrs o1, attrs o2, attrs o3, attrs* res);
void compruebaCondicion(attrs o1);
void addParametro(attrs e);
bool addPar(attrs in);
void printIn(int row);
void printInType(Entrada type);
void printDataType(TipoDato type);
void printTS();
void printAttr(attrs e, char *msg);
void printSemanticError(const char* msg);
void incrementaNumParametros();
void compruebaTipoIdentificador(attrs,attrs*);
void compruebaTipoLista(attrs, attrs*);
bool esLista(attrs con);
TipoDato getTipoLista(const char* lex);
TipoDato tipoDeListaATipoDeDato(TipoDato tipoLista);