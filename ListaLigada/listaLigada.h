#ifndef __LISTALIGADA_H__
#define __LISTALIGADA_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Lista{

	int dato;
	struct Lista *siguiente;
};

void insertar(struct Lista **l);

void mostrar(struct Lista *l);

struct Lista eliminar(struct Lista *l);

#endif
