#include <stdlib.h>
#include <stdio.h>

void push();
void pop();
int size();
void imprimir();

struct Lista{

	int dato;
	struct Lista *siguiente;
};

int 
main(void)
{
	
	struct Lista* mipila=NULL;

	push(&mipila);
	push(&mipila);
	push(&mipila);
	push(&mipila);
	push(&mipila);

	printf("--------\n");

	imprimir(mipila);

	printf("--------\n");

	pop(&mipila);

	printf("--------\n");

	printf("%d\n", size(mipila));

	printf("--------\n");

	imprimir(mipila);

	return 0;
}

void 
push(struct Lista **pila){

	struct Lista* nuevo = malloc(sizeof(struct Lista));
	scanf("\n%d", &nuevo->dato);
	nuevo->siguiente = *pila;
	*pila = nuevo;
}

void 
pop(struct Lista **pila){

	printf("%d\n",(*pila)->dato);
	*pila = (*pila)->siguiente;
}

int
size(struct Lista *pila){

	int n=0;

	while(pila != NULL){

		n++;

		pila = pila->siguiente;
	}

	return n;
}

void
imprimir(struct Lista *pila){

	while(pila != NULL){

		printf("%d\n", pila->dato);

		pila = pila->siguiente;
	}
}