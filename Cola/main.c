// Aquí van las instrucciones del programa

#include "cola.h"

int main(void) {

  struct Cola *mcola = NULL;

  insertar(&mcola, 10);
  insertar(&mcola, 20);
  insertar(&mcola, 30);
  insertar(&mcola, 40);
  insertar(&mcola, 50);
  insertar(&mcola, 60);
  insertar(&mcola, 70);

  mostrar(&mcola);


  return 0;
}
