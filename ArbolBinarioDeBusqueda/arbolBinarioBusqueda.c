#include "arbolBinarioBusqueda.h"

struct Nodo*
insertar(struct Nodo *raizArbol, int datoInsertar) {

	 struct Nodo *nuevo = NULL;

   if (raizArbol == NULL) {

		nuevo = malloc(sizeof(struct Nodo));
 		if (nuevo == NULL) {
 			return NULL;
 		}
		nuevo->dato = datoInsertar;
		nuevo->hijoDerecho = NULL;
		nuevo->hijoIzquierdo = NULL;
		return nuevo;
   }

		if (raizArbol->dato == datoInsertar) {

			return raizArbol;
		}
		if (datoInsertar > raizArbol->dato) {

			raizArbol->hijoDerecho = insertar(raizArbol->hijoDerecho, datoInsertar);

		} else {

			raizArbol->hijoIzquierdo = insertar(raizArbol->hijoIzquierdo, datoInsertar);

		}

		return raizArbol;
}

int calcularAltura(struct Nodo *raiz){

	int alturaDerecha = 0;
	int alturaIzquierda = 0;

	if (raiz == NULL) {
		return -1;
	}

	alturaIzquierda = calcularAltura(raiz->hijoIzquierdo);
	alturaDerecha = calcularAltura(raiz->hijoDerecho);

	if (alturaIzquierda > alturaDerecha) {
		return alturaIzquierda+1;
	}
	return alturaDerecha+1;
}

int buscar(struct Nodo *raiz, int datoABuscar){

	if (raiz == NULL) {

		return 0;
	} else if (raiz->dato == datoABuscar) {

		return 1;
	}	else if (datoABuscar < raiz->dato) {

		return buscar(raiz->hijoIzquierdo, datoABuscar);
	} else{

		return buscar(raiz->hijoDerecho, datoABuscar);
	}
}

void
mostrar (struct Nodo *raiz)
{
  if (raiz == NULL)
    {
      return;
    }

  mostrar (raiz->hijoIzquierdo);
  printf ("%d\n", raiz->dato);
  mostrar (raiz->hijoDerecho);
}
