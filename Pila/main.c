#include "pila.h"

int main(void) {

  struct Pila *mipila = NULL;

  push(&mipila, 10);
  push(&mipila, 20);
  push(&mipila, 30);
  push(&mipila, 40);
  push(&mipila, 50);
  push(&mipila, 60);
  push(&mipila, 70);
  push(&mipila, 80);
  push(&mipila, 90);

  printf("El elemento eliminado es: %d\n", pop(&mipila));
  printf("El elemento eliminado es: %d\n", pop(&mipila));
  printf("El elemento eliminado es: %d\n", pop(&mipila));


  printf("El elemento a la cima de la pila es: %d\n", top(mipila));

  mostrarpila(&mipila);

  return 0;
}
