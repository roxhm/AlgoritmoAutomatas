#pragma once
/*--------------------------------------------------------------------------*/
/* TAD: Cola                                                                */
/*--------------------------------------------------------------------------*/
/* ESTRUCTURAS DE DATOS                                                     */
/*--------------------------------------------------------------------------*/

struct TNodoCola
{
	TipoC info;
	struct TNodoCola* sig;
};

typedef struct TNodoCola* pNodoCola;

struct Cola
{
	pNodoCola primero, ultimo;
};

typedef struct Cola Cola;

Cola* inicCola( void );
void adicCola( Cola* col, TipoC elem );
void elimCola ( Cola* cola );
TipoC infoCola ( Cola* col );
int vaciaCola ( Cola* col );
void destruirCola ( Cola* col );
