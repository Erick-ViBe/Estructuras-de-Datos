#include "pila.h"

void push(struct Pila **miPila, int num){

   struct Pila *temporal = malloc(sizeof(struct Pila));

   temporal->dato = num;
   temporal->siguiente = *miPila;

   if(miPila==NULL){

      return;
   }

   if(*miPila==NULL){

      *miPila = temporal;
      return;
   } else {

      *miPila = temporal;
   }
}

int pop(struct Pila **miPila){

   if(*miPila==NULL){
      exit(1);
   }
   int valor = (**miPila).dato;

   struct Pila *temporal = *miPila;

   *miPila = temporal->siguiente;

   free(temporal);

   return valor;
}

int top(struct Pila *miPila){

   if(miPila==NULL){
      exit(1);
   }

   int valor = (*miPila).dato;
   return valor;
}

void mostrarpila(struct Pila **miPila){
   while(*miPila!=NULL){
      printf("%d\n", pop(miPila) );
   }
}
