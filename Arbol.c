#include <stdio.h>
#include <stdlib.h>

#include "EstructurasDeDatos/Arbol.h"

struct Arbol
{
	struct Arbol *derecho, *izquierdo;
	void* dato;
};

typedef struct Arbol *pArbol;

pArbol Arbol_Vacio()
{
	return NULL;
}

pArbol Arbol_Formar(pArbol izquierdo, void* dato, pArbol derecho)
{ 
	pArbol arbol = malloc(sizeof(*arbol));
	arbol->izquierdo = izquierdo;
	arbol->derecho = derecho;
	arbol->dato = dato;
	return arbol;
}

pArbol Arbol_Insertar(pArbol arbol, void* dato, int (*comparar)(void*, void*))
{
	if (arbol == NULL)
    {
        // si se inserta en un arbol vacío, entonces formar uno nuevo con el dato dado
		return Arbol_Formar(NULL, dato, NULL);
    }
	else
	{
		int comparacion = comparar(arbol->dato, dato);

		if (comparacion == 0)
		{
			return arbol;
		}
		else if (comparacion > 0)
        {
            arbol->derecho = Arbol_Insertar(arbol->derecho, dato, comparar);
            return arbol;
        }
        else if (comparacion < 0)
        {
            arbol->izquierdo = Arbol_Insertar(arbol->izquierdo, dato, comparar);
            return arbol;
        }
	}
}

static int* hacer_int(int valor) 
{
	int* ptr = malloc(sizeof(*ptr));
	*ptr = valor;
	return ptr;
}

static int comparar_ints(void* a, void* b)
{
	int a_int = *(int*)a;
	int b_int = *(int*)b;
	if(a_int == b_int)
		return 0;
	else if(b_int > a_int)
		return 1;
	else
		return -1;
}

int Arbol_Prueba()
{
	pArbol arbol = Arbol_Vacio();
	arbol = Arbol_Insertar(arbol, hacer_int(10), comparar_ints);
	arbol = Arbol_Insertar(arbol, hacer_int(12), comparar_ints);
	arbol = Arbol_Insertar(arbol, hacer_int(8), comparar_ints);
	arbol = Arbol_Insertar(arbol, hacer_int(14), comparar_ints);

	printf("raiz %d\n", *(int*)arbol->dato);
	printf("derecho %d\n", *(int*)arbol->derecho->dato);
	printf("izquierdo %d\n", *(int*)arbol->izquierdo->dato);
	printf("derecho del derecho %d\n", *(int*)arbol->derecho->derecho->dato);

	return 0;
}
