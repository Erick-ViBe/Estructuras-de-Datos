#include "hashAbierto.h"

int
main(void)
{
	int busqueda;
	struct TablaHash *tabla = NULL;

	AgregarDato(&tabla,"Adios");
	AgregarDato(&tabla,"Hola");
	AgregarDato(&tabla,"LenguajeC");
	AgregarDato(&tabla,"Progra");

	busqueda = BuscarDato(tabla,"Hola");
	printf("\t%d\n",busqueda);

	EliminarDato(&tabla,"Hola");

	busqueda = BuscarDato(tabla,"Hola");
	printf("\t%d\n",busqueda);

return 0;
}
