#include <stdio.h>
#include <stdlib.h>

#include "EstructurasDeDatos/ListaVariada.h"

const int INT = 0;

void* NuevoInt(int valor);

int main()
{
	ListaVariada lista = ListaVariada_Vacia();
	lista = ListaVariada_Insertar(INT, NuevoInt(10), lista);
	return 0;
}

void* NuevoInt(int valor) 
{
	int* ptr = malloc(sizeof(*ptr));
	*ptr = valor;
	return ptr;
}
