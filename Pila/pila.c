#include "pila.h"

void push(struct Pila **mipila, int num){

  struct Pila *temporal = malloc(sizeof(struct Pila));
  temporal -> dato = num;
  temporal -> siguiente = *mipila;

  if(mipila == NULL){
    return;
  }

  if(*mipila == NULL){
    *mipila = temporal;
    return;
  } else {

    *mipila = temporal;

  }

}

int pop(struct Pila **mipila){

  if(*mipila == NULL){
    exit(1);
  }

  int valor = (**mipila).dato;

  struct Pila *temporal = *mipila;

  *mipila = temporal -> siguiente;

  free(temporal);


  return valor;
}

int top(struct Pila *mipila){

  if(mipila == NULL){
    exit(1);
  }

  int valor = (*mipila).dato;
  return valor;
}

void mostrarpila(struct Pila **mipila){
  while(*mipila != NULL){
    printf("%d\n", pop(mipila) );
  }
}
