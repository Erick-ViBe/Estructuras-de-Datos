#include "listaCircular.h"

int main(void){

	struct Lista* milista=NULL;
	struct Lista* finalmilista=NULL;

	insertar(&milista, &finalmilista);
	insertar(&milista, &finalmilista);
	insertar(&milista, &finalmilista);
	insertar(&milista, &finalmilista);
	insertar(&milista, &finalmilista);

	printf("------------------------\n");

	*milista = eliminar(milista, &finalmilista);
	*milista = eliminar(milista, &finalmilista);

	printf("------------------------\n");

	mostrar(milista, finalmilista);
}
