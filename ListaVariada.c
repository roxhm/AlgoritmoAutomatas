#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Lista.h"

#define INT 0
#define FLOAT 1
#define CADENA 2

struct NodoListaVariada
{
	struct NodoListaVariada *siguiente;
	void* dato;
	int tipo;
};

typedef struct NodoListaVariada *pNodoListaVariada;

pNodoListaVariada ListaVariada_Vacia()
{
	return NULL;
}

pNodoListaVariada ListaVariada_Insertar(int tipo, void* dato, pNodoListaVariada lista)
{
	pNodoListaVariada nueva_cabeza = malloc(sizeof(*nueva_cabeza));
	nueva_cabeza->siguiente = lista;
	nueva_cabeza->dato = dato;
	nueva_cabeza->tipo = tipo;
	return nueva_cabeza;
}

int ListaVariada_Prueba()
{
	printf("%d %d %d\n", INT, FLOAT, CADENA);
	pNodoListaVariada lista = ListaVariada_Vacia();
	lista = ListaVariada_Insertar(INT, nuevo_int(4), lista);
	lista = ListaVariada_Insertar(FLOAT, nuevo_float(3.1415), lista);
	lista = ListaVariada_Insertar(CADENA, nueva_cadena("esto es una cadena, te amo. <3"), lista);

	for(pNodoListaVariada nodo = lista; nodo != NULL; nodo = nodo->siguiente)
	{
		switch(nodo->tipo)
		{
		case INT:
			printf("entero %d ", *((int*)nodo->dato));
			break;
		case FLOAT:
			printf("float %f ", *((float*)nodo->dato));
			break;
		case CADENA:
			printf("cadena %s ", *((char**)nodo->dato));
			break;
		}
	}
	return 0;
}
