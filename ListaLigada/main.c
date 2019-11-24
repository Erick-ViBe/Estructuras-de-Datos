#include "listaLigada.h"

int main(void){

	struct ListaLigada* milista=NULL;

	insertarInicio(&milista);
	insertarInicio(&milista);
	insertarInicio(&milista);
	insertarInicio(&milista);
	insertarInicio(&milista);

	printf("------------------------\n");

	*milista = eliminar(milista);
	*milista = eliminar(milista);

	printf("------------------------\n");

	mostrar(milista);

   return 0;
}
