#include "Cola.h"

/*--------------------------------------------------------------------------*/
/* OPERACIONES DEL TAD                                                      */
/*--------------------------------------------------------------------------*/

/* CONSTRUCTURA */
Cola* inicCola( void )
{
	Cola* col = ( Cola* ) malloc( sizeof( Cola ));
	col -> primero = col -> ultimo = NULL; 
	return col;
}

/* MODIFICADORAS */ 
void adicCola( Cola* col, TipoC elem )
{
	pNodoCola p = ( pNodoCola )malloc( sizeof( struct TNodoCola )); 
	p -> info = elem; 
	p -> sig = NULL; 
	if ( col -> primero == NULL )
		col -> primero = col -> ultimo = p;
	else
	{
		col -> ultimo -> sig =  p; 
		col -> ultimo = p; 
	}
}

void elimCola ( Cola* cola )
{
       	pNodoCola p;
	 if( col -> primero = col -> ultimo == NULL )
		 return;
	 else
	 {
		 if( col -> primero -> sig == NULL )
		 {
			 free( col -> primero );
			 col -> primero = col -> ultimo = NULL;
		 }
		 else
		 {
			 p = col -> primero;
			 col -> primero = p -> sig;
			 free( p );
		 }
	 }
}


/* ANALIZADORAS */
TipoC infoCola ( Cola* col )
{
	return col -> primero -> info; 
}

int vaciaCola ( Cola* col )
{
	return col -> primero == NULL; 
}

/* DESTRUCTORAS */ 
void destruirCola ( Cola* col )
{
	pNodoCola p, q; 
	for( p = col -> primero; p != NULL; p = p->sig, free( q ) )
	{
		q = p; 
	}
	free(col); 
}



