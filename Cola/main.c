#include "cola.h"

int main(void) {

   struct listaLigada *cola = NULL;

   insertar(&cola, 10);
   insertar(&cola, 20);
   insertar(&cola, 30);
   insertar(&cola, 40);
   insertar(&cola, 50);
   insertar(&cola, 60);
   insertar(&cola, 70);

   mostrar(&cola);

   insertar(&cola, 15);

   printf("---------\n");

   mostrar(&cola);

   return 0;
}
