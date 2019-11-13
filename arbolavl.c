#include <stdio.h>
#include <stdlib.h>

struct Nodo{

	int dato;
	struct Nodo *hijoDerecho;
	struct Nodo *hijoIzquierdo;
};

int main(void) {

   struct Nodo *raiz = NULL;

   return 0;
}

void insertar(struct Nodo **raizArbol) {

   int datoRecibido;

   if (*raizArbol == NULL) {
      *raizArbol = malloc(sizeof(struct Nodo));
      scanf("%d\n", aux);
      *raizArbol->dato = datoRecibido;
      return;
   }else{

   }
}
