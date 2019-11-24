#ifndef __LISTALIGADA_H__
#define __LISTALIGADA_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ListaLigada{

	int dato;
	struct ListaLigada *siguiente;
};

void insertarInicio(struct ListaLigada **l);

void mostrar(struct ListaLigada *l);

struct ListaLigada eliminar(struct ListaLigada *l);

#endif
