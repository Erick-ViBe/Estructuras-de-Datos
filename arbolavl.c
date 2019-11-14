#include <stdio.h>
#include <stdlib.h>

struct Nodo{

	int dato;
	struct Nodo *hijoDerecho;
	struct Nodo *hijoIzquierdo;
};

struct Nodo* insertar();

int main(void) {

   struct Nodo *raiz = NULL;

	raiz = insertar(raiz);
	raiz = insertar(raiz);

	printf("%d\n", raiz->dato);

	return 0;
}

struct Nodo*
insertar(struct Nodo *raizArbol) {

   int datoRecibido;

   if (raizArbol == NULL) {

      raizArbol = malloc(sizeof(struct Nodo));
      scanf("%d", &datoRecibido);
      raizArbol->dato = datoRecibido;/* code */
		raizArbol->hijoDerecho = NULL;
		raizArbol->hijoIzquierdo = NULL;
		return raizArbol;
   }else{

		struct Nodo *nuevo = malloc(sizeof(struct Nodo));
		if (nuevo = NULL) {
			return NULL;
		}
		nuevo->hijoDerecho = NULL;
		nuevo->hijoIzquierdo = NULL;
		scanf("%d", &datoRecibido);
		if (raizArbol->dato == datoRecibido) {

			return raizArbol;
		} else if (datoRecibido > raizArbol->dato) {

			raizArbol->hijoDerecho = insertar(raizArbol->hijoDerecho);
		} else if (datoRecibido < raizArbol->dato) {
;
			raizArbol->hijoIzquierdo = insertar(raizArbol->hijoIzquierdo);
		};
   }
}
