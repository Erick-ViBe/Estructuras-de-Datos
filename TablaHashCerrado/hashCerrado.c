#include "hashCerrado.h"

int
FuncionHash (char *palabra){

   int numero=0, i;
   int const p=9973, a=509, b=7372, m=200;

   for (i=0; *(palabra+i)!='\0'; i++){

      numero = numero+*(palabra);
   }

   return (((numero*a)+b)%p)%m;
}

void
AgregarDato (struct TablaHash **tabla, char *palabra){

  int posicion=0, i=0, band=0;

   if (tabla==NULL)
      return;

   if (*tabla==NULL){

      *tabla = (struct TablaHash *) malloc (sizeof (struct TablaHash));
      (*tabla)->datos = (char **) malloc (sizeof (char) * 200);	//Creamos un espacio de 200
   }
   posicion = FuncionHash (palabra);

   if (*((*tabla)->datos + posicion) != 0){

      if (posicion == 200)
	      for (i = 0; *((*tabla)->datos + i) != 0; ++i);

      else{

	      for (i = 0; *((*tabla)->datos + posicion + i) != 0; ++i){
	         if (posicion + i < 200){

		         continue;
		      } else {
		         band = 1;
		         break;
		      }
	      }
	      if (band = 1){
	         for (i = 0; *((*tabla)->datos + i) != 0; ++i);
	      }
	   }
   }

   *((*tabla)->datos + posicion + i) = palabra;

   return;
}

int
BuscarDato (struct TablaHash *tabla, char *palabra){

   int posicion, i = 0;
   if (tabla == NULL)
      return 0;

   posicion = FuncionHash (palabra);

   if (*(tabla->datos + posicion) != 0){

      if (strcmp (*(tabla->datos + posicion), palabra) == 0){

	      printf ("%s\n", *(tabla->datos + posicion));
	   } else {

	      if (posicion == 200){

	         for (i = 0; strcmp (*(tabla->datos + i), palabra) != 0; i++);
	            return 1;
	      }

	      for (i = 0; strcmp (*(tabla->datos + posicion + i), palabra) != 0; i++);
	      printf ("%s\n", *(tabla->datos + posicion + i));
	   }
   } else {
      return 0;
   }
}

void
EliminarDato (struct TablaHash **tabla, char *palabra)
{
  printf ("eliminando...\n\t");
  int posicion, i = 0;
  if (tabla == NULL)
    return;

  posicion = FuncionHash (palabra);
  if (*((*tabla)->datos + posicion) != 0)
    {
      if (strcmp (*((*tabla)->datos + posicion), palabra) == 0)
	{
	  *((*tabla)->datos + posicion) = 0;
	  printf ("HECHO\n");
	  return;
	}
      else
	{
	  if (posicion == 200)
	    {
	      for (i = 0; strcmp (*((*tabla)->datos + i), palabra) != 0; i++);
	      *((*tabla)->datos + i) = 0;
	      printf ("HECHO\n");
	    }
	  else
	    {
	      for (i = 0;
		   strcmp (*((*tabla)->datos + posicion + i), palabra) != 0;
		   i++);
	      *((*tabla)->datos + posicion + i) = 0;
	      printf ("HECHO\n");
	    }
	}
    }
  else
    printf ("La palabra no se encontro\n");
}
