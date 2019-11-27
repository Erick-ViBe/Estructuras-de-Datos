#ifndef __ARBOLBINARIOBUSQUEDA_H__
#define __ARBOLBINARIOBUSQUEDA_H__

#include <stdio.h>
#include <stdlib.h>

struct Nodo{

	int dato;
	struct Nodo *hijoDerecho;
	struct Nodo *hijoIzquierdo;
};

struct Nodo* insertar(struct Nodo *raizArbol, int datoInsertar);
int calcularAltura(struct Nodo *raiz);
int buscar(struct Nodo *raiz, int datoABuscar);
void mostrar (struct Nodo *raiz);

#endif
