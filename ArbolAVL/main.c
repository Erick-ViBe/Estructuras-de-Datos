#include "arbolAVL.h"

int main(void) {

   struct Nodo *raiz = NULL;

	raiz = insertar(raiz, 13);
	raiz = insertar(raiz, 2);
	raiz = insertar(raiz, 4);
	raiz = insertar(raiz, 5);
	raiz = insertar(raiz, 36);
	raiz = insertar(raiz, 11);
	raiz = insertar(raiz, 42);
	raiz = insertar(raiz, 0);
	raiz = insertar(raiz, 12);

	mostrar(raiz);

	printf("\n-%d-\n", buscar(raiz, 3));
	printf("-%d-\n\n", buscar(raiz, 5));

	return 0;
}
