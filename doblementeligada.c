#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insertar();
void mostrar();
void revesmostrar();

struct Lista eliminar();

struct Lista{

	int dato;
	struct Lista *siguiente;
	struct Lista *anterior;
};

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

void insertar(struct Lista **l){

	struct Lista* nuevo = malloc(sizeof(struct Lista));

	scanf("\n%d", &nuevo->dato);
	nuevo->siguiente = *l;
	nuevo->anterior = NULL;
	if (*l != NULL)
	{
		(*l)->anterior = nuevo;
	}
	*l = nuevo;
}

void mostrar(struct Lista *l){

	while(l != NULL){

		printf("%d\n", l->dato);

		l = l->siguiente;
	}
}

void revesmostrar(struct Lista *l){

	while(l->siguiente != NULL){
		l = l->siguiente;
	}

	while(l != NULL){

		printf("%d\n", l->dato);

		l = l->anterior;
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

	if (p == 0){

		l = l->siguiente;
		l->anterior = NULL;
		return *l;
	}else{

		a->siguiente = l->siguiente;
		l->siguiente->anterior = a;
		free(l);
		return *b;
	}
}
