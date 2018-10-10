
struct Estado; 

struct Transicion 
{
	char simbolo; 
	struct Estado *estado; 
};

struct Estado
{
	int id; 
	unsigned no_transiciones; 
	struct Transicion *transiciones; 
	bool es_final;
};

struct AFN
{
	ArbolEstados estados;
	struct Estado *estado_inicial;
};


struct AFN AFN_Vacio();
struct AFN InsertaEstado (struct AFN afn, struct Estado estado);
struct AFN LeerAFNDeArchivo(char* nombre_archivo);
