#include "cola.h"

void mostrar(struct listaLigada **miCola){

   while ((*miCola) != NULL) {
      printf("%d\n", eliminar(miCola));
   }
}

void insertar(struct listaLigada **miCola, int num){

   struct listaLigada *nodotemporal = malloc(sizeof(struct listaLigada));
   struct listaLigada *ultimo = *miCola;

   nodotemporal->dato = num;
   nodotemporal->siguiente = NULL;

   if (*miCola == NULL) {

      *miCola = nodotemporal;
	   return;
   } else {

      while (ultimo -> siguiente != NULL){
         ultimo = ultimo -> siguiente;
      }
      ultimo -> siguiente = nodotemporal;
   }
}

int eliminar(struct listaLigada **miCola){

   if(*miCola == NULL){
      exit(1);
   }

   int num = (**miCola).dato;

   struct listaLigada *temporal = *miCola;

   *miCola = temporal->siguiente;

   free(temporal);

   return num;
}
