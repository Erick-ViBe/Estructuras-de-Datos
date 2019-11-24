#include "listaLigada.h"

void insertar(struct Lista **l){

	struct Lista* nuevo = malloc(sizeof(struct Lista));
	scanf("\n%d", &nuevo->dato);
	nuevo->siguiente = *l;
	*l = nuevo;
}

void mostrar(struct Lista *l){

	while(l != NULL){

		printf("%d\n", l->dato);

		l = l->siguiente;
	}
}

struct Lista eliminar(struct Lista *l){

	struct Lista* a;
	struct Lista* b = l;
	int p=0;

	int numaelim;

	scanf("\n%d", &numaelim);

	while(l->dato != numaelim){

		a = l;
		l = l->siguiente;

		p++;
	}

	if (p == 0)
	{

		l = l->siguiente;
		return *l;
	}else{
		a->siguiente = l->siguiente;
		free(l);
		return *b;
	}
}
