#include"AFN.h"

struct AFN AFN_Vacio()
{
	struct AFN afn;

	afn.no_estados = 0;
	afn.estados = NULL;
	afn.estado_inicial = NULL;

	return afn;
}


struct AFN InsertaEstado (struct AFN afn, struct Estado estado)
{


struct AFN LeerAFNDeArchivo(char* nombre_archivo)
{
	struct AFN afn = AFN_Vacio();
	FILE *entrada = fopen(nombre_archivo, "r");


