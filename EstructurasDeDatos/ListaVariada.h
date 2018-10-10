#pragma once

struct NodoListaVariada
{
	struct NodoListaVariada *siguiente;
	void* dato;
	int tipo;
};
typedef struct NodoListaVariada *pNodoListaVariada;
typedef struct NodoListaVariada *ListaVariada;
pNodoListaVariada ListaVariada_Vacia();
pNodoListaVariada ListaVariada_Insertar(int tipo, void* dato, pNodoListaVariada lista);
int ListaVariada_Prueba();

