#include <stdlib.h>
#include <stdio.h>

void push();
void pop();
int size();
void imprimir();

struct Pila{

	int dato;
	struct Pila *siguiente;
};

int 
main(void)
{
	
	struct Pila* mipila=NULL;

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
push(struct Pila **pila){

	struct Pila* nuevo = malloc(sizeof(struct Pila));
	scanf("\n%d", &nuevo->dato);
	nuevo->siguiente = *pila;
	*pila = nuevo;
}

void 
pop(struct Pila **pila){

	printf("%d\n",(*pila)->dato);
	*pila = (*pila)->siguiente;
}

int
size(struct Pila *pila){

	int n=0;

	while(pila != NULL){

		n++;

		pila = pila->siguiente;
	}

	return n;
}

void
imprimir(struct Pila *pila){

	while(pila != NULL){

		printf("%d\n", pila->dato);

		pila = pila->siguiente;
	}
}