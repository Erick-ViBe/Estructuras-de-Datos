#include "listaLigada.h"

void insertarInicio(struct ListaLigada **l){

	struct ListaLigada* nuevo = malloc(sizeof(struct ListaLigada));
	scanf("\n%d", &nuevo->dato);
	nuevo->siguiente = *l;
	*l = nuevo;
}

void mostrar(struct ListaLigada *l){

	while(l != NULL){

		printf("%d\n", l->dato);

		l = l->siguiente;
	}
}

int tamanoLista(struct ListaLigada *l){

	int tamano=0;

	while(l != NULL){

		tamano++;
		l = l->siguiente;
	}

	return tamano;
}

struct ListaLigada eliminar(struct ListaLigada *l){

	struct ListaLigada* a;
	struct ListaLigada* b = l;
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
