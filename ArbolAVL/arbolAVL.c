#include "arbolAVL.h"

struct Nodo*
insertar(struct Nodo *raizArbol, int datoInsertar) {

	 struct Nodo *nuevo = NULL;

   if (raizArbol == NULL) {

		nuevo = malloc(sizeof(struct Nodo));
 		if (nuevo == NULL) {
 			return NULL;
 		}
		nuevo->dato = datoInsertar;
		nuevo->fe = 0;
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
		raizArbol->fe = calcularFE(raizArbol);
		if ((raizArbol->fe == -2) && (raizArbol->hijoIzquierdo->fe == -1)) {
			raizArbol = rotacionDerecha(raizArbol);
			raizArbol->fe = calcularFE(raizArbol);
			raizArbol->hijoDerecho->fe = calcularFE(raizArbol->hijoDerecho);
			raizArbol->hijoIzquierdo->fe = calcularFE(raizArbol->hijoIzquierdo);
		}

		if ((raizArbol->fe == 2) && (raizArbol->hijoDerecho->fe == 1)) {
			raizArbol = rotacionIzquierda(raizArbol);
			raizArbol->fe = calcularFE(raizArbol);
			raizArbol->hijoDerecho->fe = calcularFE(raizArbol->hijoDerecho);
			raizArbol->hijoIzquierdo->fe = calcularFE(raizArbol->hijoIzquierdo);
		}

		if ((raizArbol->fe > 1) && (raizArbol->hijoDerecho->fe < 0)) {
			raizArbol->hijoDerecho = rotacionDerecha(raizArbol->hijoDerecho);
			raizArbol = rotacionIzquierda(raizArbol);
			raizArbol->fe = calcularFE(raizArbol);
			raizArbol->hijoDerecho->fe = calcularFE(raizArbol->hijoDerecho);
			raizArbol->hijoIzquierdo->fe = calcularFE(raizArbol->hijoIzquierdo);
		}

		if ((raizArbol->fe < -1) && (raizArbol->hijoIzquierdo->fe > 0)) {
			raizArbol->hijoIzquierdo = rotacionIzquierda(raizArbol->hijoIzquierdo);
			raizArbol = rotacionDerecha(raizArbol);
			raizArbol->fe = calcularFE(raizArbol);
			raizArbol->hijoDerecho->fe = calcularFE(raizArbol->hijoDerecho);
			raizArbol->hijoIzquierdo->fe = calcularFE(raizArbol->hijoIzquierdo);
		}

		return raizArbol;
}

struct Nodo*
rotacionDerecha(struct Nodo *raizDesbalanceada) {

	struct Nodo *aux = raizDesbalanceada;
		struct Nodo *aux2 = NULL;
	raizDesbalanceada = raizDesbalanceada->hijoIzquierdo;

	if (raizDesbalanceada->hijoDerecho != NULL) {

		aux2 = raizDesbalanceada->hijoDerecho;
	}

	raizDesbalanceada->hijoDerecho = aux;

	raizDesbalanceada->hijoDerecho->hijoIzquierdo = aux2;

	return raizDesbalanceada;

}

struct Nodo*
rotacionIzquierda(struct Nodo *raizDesbalanceada) {

	struct Nodo *aux = raizDesbalanceada;
		struct Nodo *aux2 = NULL;
	raizDesbalanceada = raizDesbalanceada->hijoDerecho;

	if (raizDesbalanceada->hijoIzquierdo != NULL) {

		aux2 = raizDesbalanceada->hijoIzquierdo;
	}

	raizDesbalanceada->hijoIzquierdo = aux;

	raizDesbalanceada->hijoIzquierdo->hijoDerecho = aux2;

	return raizDesbalanceada;

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

int calcularFE(struct Nodo *raiz){

	int alturaDerecha = 0;
	int alturaIzquierda = 0;

	if (raiz == NULL) {
		return 0;
	}

	alturaIzquierda = calcularAltura(raiz->hijoIzquierdo);
	alturaDerecha = calcularAltura(raiz->hijoDerecho);

	return alturaDerecha - alturaIzquierda;
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
