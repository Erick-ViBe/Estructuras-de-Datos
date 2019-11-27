// Aquí van las implementaciones de las funciones declaradas

#include "cola.h"

void mostrar(struct Cola **mcola){

  while ((*mcola) != NULL) {
    printf("%d\n", eliminar(mcola));
  }

}

void insertar(struct Cola **mcola, int num){

  struct Cola *nodotemporal = malloc(sizeof(struct Cola));
  struct Cola *ultimo = *mcola;

  nodotemporal -> dato = num;
  nodotemporal -> siguiente = NULL;

	// Sí la lista no cuenta con ningún nodo, se creará el primero.
  if (*mcola == NULL) {
    *mcola = nodotemporal;
	return;
} else {

  // Recorre toda la lista y liga el nodotemporal al final de la lista.
  while (ultimo -> siguiente != NULL){
    ultimo = ultimo -> siguiente; // el bueno
  }

  ultimo -> siguiente = nodotemporal;
}

}

int eliminar(struct Cola **mcola){

    if(*mcola == NULL){
      exit(1);
    }

    int num = (**mcola).dato;

    struct Cola *temporal = *mcola;

      *mcola = temporal -> siguiente;

      free(temporal);

    return num;
}
