#pragma once

#include "ConjuntoEstados.h"
struct TransicionesSEstado 
{
	char simbolo; 
	struct SuperEstado *estado; 
}	

struct SuperEstado
{
	char id; 
	ConjuntoEstados estados; 
	struct  SuperEstado *estado; 
	bool es_final; 
}

