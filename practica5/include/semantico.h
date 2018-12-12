#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// MACROS
#define true 1
#define false 0
#define bool int

// ESTRUCTURAS Y ENUMERADOS
typedef enum {
	MARCA = 0, /* marca comienzo bloque */
	FUNCION,   /* si es subprograma */
	VAR,       /* si es variable */
	PARAM,     /* si es parametro formal */
	DESCRIPT,
	CADENA
} TipoEntrada;

typedef enum {
	NOT_ASIG = 0,
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
	NA
} TipoDato;

typedef struct {
	char *EtiquetaEntrada;
	char *EtiquetaSalida;
	char *EtiquetaElse;
	char *NombreVarControl;
} DescriptorDeInstrControl;

typedef struct {
	TipoEntrada tipo_entrada;
	char *lex;
	TipoDato tipo;
	int nParam;
	TipoDato tipolista;
	DescriptorDeInstrControl descriptor;
} Entrada;

typedef struct {
	int attr;           /**/
	char *lex;          /**/
	TipoDato type;      /**/
	unsigned int nDim;  /**/
} attrs;

// VARIABLES GLOBALES
#define YYSTYPE attrs
#define MAX_IN 1000

extern long int TOPE;

extern Entrada tablasimbolos[MAX_IN];
extern Entrada otraTabla[MAX_IN];

extern int line;
extern int decVar;
extern unsigned int funcion;
extern int decParam;
extern int decFuncion;
extern TipoDato tipoGlobal;
extern int nParam;
extern int nParamLlamada;

///////////////////////////////////
extern int currentFunction;
extern int aux;

extern FILE *file;
extern TipoDato tipoTMP;

extern int temp;
extern int etiq;
extern int varPrinc;
extern int decIF, decELSE;
///////////////////////////////////

// FUNCIONES
int  addEntrada(Entrada in);
int  eliminarEntrada();
void eliminarBloque();
int  buscaEntrada(attrs e, TipoEntrada tp);




int  addVar(attrs in);

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
