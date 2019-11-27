#include "listaDobleLigada.h"

int main(void)
{

	struct Lista* milista=NULL;

	insertar(&milista);
	insertar(&milista);
	insertar(&milista);
	insertar(&milista);
	insertar(&milista);

	printf("--------\n");

	*milista = eliminar(milista);
	*milista = eliminar(milista);

	printf("--------\n");

	mostrar(milista);

	printf("--------\n");

	revesmostrar(milista);

	printf("--------\n");

	return 0;
}
