#include <stdio.h>
#include <stdlib.h>

struct Nodo{

	int dato;
	struct Nodo *hijoDerecho;
	struct Nodo *hijoIzquierdo;
};

void insertar();

int main(void) {

   struct Nodo *raiz = NULL;

	insertar(&raiz);

	printf("%d\n", raiz->dato);

   return 0;
}

void insertar(struct Nodo **raizArbol) {

   int datoRecibido;

   if (*raizArbol == NULL) {
      *raizArbol = malloc(sizeof(struct Nodo));
      scanf("%d", &datoRecibido);
      (*raizArbol)->dato = datoRecibido;
      return;
   }else{

		// struct Nodo *nuevo = malloc(sizeof(struct Nodo));
		printf("ajhsouaos\n");

   }
}
