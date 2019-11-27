#ifndef __ARBOLAVL_H__
#define __ARBOLAVL_H__

#include <stdio.h>
#include <stdlib.h>

struct Nodo{

	int dato;
	int fe;
	struct Nodo *hijoDerecho;
	struct Nodo *hijoIzquierdo;
};

struct Nodo* insertar(struct Nodo *raizArbol, int datoInsertar);
struct Nodo* rotacionDerecha(struct Nodo *raizDesbalanceada);
struct Nodo* rotacionIzquierda(struct Nodo *raizDesbalanceada);
int calcularAltura(struct Nodo *raiz);
int calcularFE(struct Nodo *raiz);
int buscar(struct Nodo *raiz, int datoABuscar);
void mostrar (struct Nodo *raiz);

#endif
