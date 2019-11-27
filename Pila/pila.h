#ifndef __PILA_H__
#define __PILA_H__

#include <stdio.h>
#include <stdlib.h>

struct Pila{
   int dato;
   struct Pila *siguiente;
};

void push(struct Pila **miPila, int num);
int pop(struct Pila **miPila);
int top(struct Pila *miPila);
void mostrarpila(struct Pila **miPila);

#endif
