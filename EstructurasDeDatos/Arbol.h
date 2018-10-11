#pragma once

struct Arbol
{
	struct Arbol *derecho, *izquierdo;
	void* dato;
};

typedef struct Arbol *pArbol;

pArbol Arbol_Vacio();
pArbol Arbol_Formar(pArbol izquierdo, void* dato, pArbol derecho);
pArbol Arbol_Insertar(pArbol arbol, void* dato, int (*comparar)(void*, void*));
int Arbol_Prueba();
