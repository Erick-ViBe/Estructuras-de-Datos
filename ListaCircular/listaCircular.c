#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insertar();
void mostrar();
struct Lista eliminar();

struct Lista{

	int dato;
	struct Lista *siguiente;
};

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

void insertar(struct Lista **l, struct Lista **finall){
	
	struct Lista* nuevo = malloc(sizeof(struct Lista));
	scanf("\n%d", &nuevo->dato);
	nuevo->siguiente = *l;

	if (*l == NULL)
	{
		(*finall) = nuevo;
	}

	(*finall)->siguiente = nuevo;
	*l = nuevo;

}

void mostrar(struct Lista *l, struct Lista *finall){

	while(l != finall){

		printf("%d\n", l->dato);

		l = l->siguiente;
	}

	printf("%d\n", l->dato);
}

struct Lista eliminar(struct Lista *l, struct Lista **finall){
	
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
	}else if (l == *finall)
	{
		
		a->siguiente = (*finall)->siguiente;
		*finall = a;
	}	 else	{
		a->siguiente = l->siguiente;
		free(l);
		return *b;
	}
}