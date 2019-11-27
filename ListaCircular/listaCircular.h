#ifndef __LISTACIRCULAR_H__
#define __LISTACIRCULAR_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Lista{

	int dato;
	struct Lista *siguiente;
};

void insertar(struct Lista **l, struct Lista **finall);

void mostrar(struct Lista *l, struct Lista *finall);

struct Lista eliminar(struct Lista *l, struct Lista **finall);

#endif
