// Aquí van las cabeceras de las funciones declaradas

#ifndef __PILA_H__
#define __PILA_H__

#include <stdio.h>
#include <stdlib.h>

struct Pila{
  int dato;
  struct Pila *siguiente;
};

void push(struct Pila **mipila, int num);
int pop(struct Pila **mipila);
int top(struct Pila *mipila);
void mostrarpila(struct Pila **mipila);

#endif
