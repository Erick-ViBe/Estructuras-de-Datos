#ifndef __LISTADOBLELIGADA_H__
#define __LISTADOBLELIGADA_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Lista{

	int dato;
	struct Lista *siguiente;
	struct Lista *anterior;
};

void insertar(struct Lista **l);

void mostrar(struct Lista *l);

void revesmostrar(struct Lista *l);

struct Lista eliminar(struct Lista *l);

#endif
