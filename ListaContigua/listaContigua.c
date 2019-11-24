#include <stdio.h>
#include <stdlib.h>

void insertar();
void mostrar();
void eliminar();

struct ListaContigua{

    int actual;
    int tamano;
    int *dato;
};

int main(void){

   struct ListaContigua *milista = NULL;

   insertar (&milista, 7);
   insertar (&milista, 34);
   insertar (&milista, 2);
   printf("%d\n", *milista->dato);
   printf("%d\n", *milista->dato+1);
   printf("%d\n", *milista->dato+2);

   return 0;
}

void insertar(struct ListaContigua **lista, int dato){

   if(*lista == NULL){

      *lista = malloc(sizeof(struct ListaContigua));
      if (*lista==NULL)
         printf ("Error de Memoria");

      (*lista)->dato = (int *)malloc(sizeof(int));
      if ((*lista)->dato==NULL){
         printf ("Error de Memoria");
      }

         *((*lista)->dato) = dato;

         (*lista)->actual++;
         (*lista)->tamano=1;

    } else{

        if ((*lista)->actual < (*lista)->tamano)
        {
            *((*lista)->dato) = dato;
            (*lista)->actual++;
        }else{
            int *temporal = NULL;
            temporal = (int *)malloc((2*((*lista)->tamano))*sizeof(int));
            if (temporal==NULL)
               printf ("Error de Memoria");
            int i;
            for (i = 0; i < (*lista)->tamano; i++){
   	         *(temporal + i) = *((*lista)->dato + i);
   	      }
            free ((*lista)->dato);
            (*lista)->dato = temporal;
            (*lista)->tamano *= 2;

            *((*lista)->dato + (*lista)->actual) = dato;

            (*lista)->actual += 1;
        }
    }
}

void mostrar(struct ListaContigua *l){

    for (int i = 0; i < l->actual; ++i){
        printf("%d\n", *l->dato+i);
    }
}

void eliminar(struct ListaContigua *l, struct ListaContigua *t, int el){


}
