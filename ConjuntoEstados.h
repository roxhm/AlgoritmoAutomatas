#pragma once

#include "Bool.h"

struct ConjuntoEstados
{
	int cardinalidad;
	int *ids;
};

/*
 * Construye un conjunto vacío.
 * Retorna: 
 * 	el conjunto recién construido.
 */
struct ConjuntoEstados ConjuntoEstados_Vacio();

/*
 * Determina si el conjunto de estados contiene un estado con el id dado.
 * Argumentos: 
 * 	conjunto: conjunto en el que buscar.
 * 	id: id del estado por buscar
 * Retorna: 
 * 	verdadero(1) si el conjunto contiene el estado, falso(0) si no.
 */
bool ConjuntoEstados_Contiene(struct ConjuntoEstados *conjunto, int id);

/*
 * Inserta un estado en forma de id dentro del conjunto de estados dado. 
 * Argumentos:
 * 	conjunto: conjunto en el que se insertará.
 * 	id: id por insertar.
 */
void ConjuntoEstados_Insertar(struct ConjuntoEstados *conjunto, int id);

/*
 * Imprime un conjunto de estados en la forma {a, b, c...}
 * Argumentos: 
 * 	conjunto: conjunto por imprimir
 */
void ConjuntoEstados_Imprimir(struct ConjuntoEstados *conjunto);

