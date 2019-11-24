#include <stdio.h>
#include <stdlib.h>

void insertar();
void mostrar();
void eliminar();

struct Lista{

    int act;
    int tam;
    int *dato;
};
int main(void)
{

    struct Lista mil;
    mil.act=0;
    struct Lista temp;
    int e;

    insertar(&mil, &temp);
    insertar(&mil, &temp);
    insertar(&mil, &temp);
    insertar(&mil, &temp);
    insertar(&mil, &temp);

    printf("-------------------------------------");

    mostrar(&mil);

    return 0;
}

//maincpy- memory copy

void insertar(struct Lista *l, struct Lista *t){

    if (l->act==0)
    {
        l->dato = (int *)malloc(1*sizeof(int));

        if (l->dato==NULL)
            printf ("Error de Mem.");

        scanf("\n%d",l->dato+l->act);
        l->act++;

        l->tam=1;

    } else{

        if (l->act<l->tam)
        {
            scanf("\n%d",l->dato+l->act);
            l->act++;
        }else{

            t->dato = (int *)malloc((2*(l->tam))*sizeof(int));
            if (t->dato==NULL)
                printf ("Error de Mem.");
            for (int j = 0; j < l->tam; ++j)
            {
                *(t->dato+j) = *(l->dato+j);
            }
            t->act = l->act;
            t->tam = l->tam*2;
            l->act = t->act;
            l->tam = t->tam;
            l->dato = t->dato;

            scanf("\n%d",l->dato+l->act);
            l->act++;
        }
    }
}

void mostrar(struct Lista *l){

    for (int i = 0; i < l->act; ++i)
    {
        printf("\n%d\n", *l->dato+i);
    }
}

void eliminar(struct Lista *l, struct Lista *t, int el){

    
}
