#include "listaLigada.h"

int main(void){

	struct Lista* milista=NULL;

	insertar(&milista);
	insertar(&milista);
	insertar(&milista);
	insertar(&milista);
	insertar(&milista);

	printf("------------------------\n");

	*milista = eliminar(milista);
	*milista = eliminar(milista);

	printf("------------------------\n");

	mostrar(milista);

   return 0;
}
