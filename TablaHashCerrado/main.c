#include "hashCerrado.h"

int
main(void)
{
	int busqueda = 0;
	struct TablaHash *tabla = NULL;

	AgregarDato(&tabla,"Hola");
	AgregarDato(&tabla,"Adios");
	AgregarDato(&tabla,"LenguajeC");
	AgregarDato(&tabla,"Progra");

	busqueda = BuscarDato(tabla,"Progra");

	printf("\t%d\n",busqueda);

	EliminarDato(&tabla,"Progra");

	busqueda = BuscarDato(tabla,"Progra");

	printf("\t%d\n",busqueda);

return 0;
}
