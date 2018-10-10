#include "ConjuntoEstados.h"

struct ConjuntoEstados ConjuntoEstados_Vacio()
{
	struct ConjuntoEstados conjunto; 
	conjunto.cardinalidad = 0;
	conjunto.ids = NULL;
	return conjunto;
}

bool ConjuntoEstados_Contiene(struct ConjuntoEstados *conjunto, int id)
{
	int i; 
	for(i = 0; i < conjunto -> cardinalidad; i++)
		if(id == conjunto -> ids[i])
			return VERDADERO; 
	return FALSO;

}

void ConjuntoEstados_Insertar(struct ConjuntoEstados *conjunto, int id)
{
	if(ConjuntoEstados_Contiene(conjunto, id))
		return;

	conjunto->ids = realloc(conjunto->ids, (conjunto->cardinalidad + 1) * sizeof(int));	
	conjunto->cardinalidad += 1;
	conjunto->ids[conjunto->cardinalidad - 1] = id;
}

void ConjuntoEstados_Imprimir(struct ConjuntoEstados *conjunto)
{
	putchar('{');
	int i;
	for(i = 0; i < conjunto->cardinalidad - 1; i++)
		printf("%d, ", conjunto->ids[i]);
	printf("%d", conjunto->ids[i]);
	putchar('}');
}



