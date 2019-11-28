#ifndef _HASHCERRADO_H_
#define _HASHCERRADO_H_

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

struct TablaHash
{
	char **datos;
	int cuantos;
};

int FuncionHash(char *);
void AgregarDato(struct TablaHash **, char *);
void EliminarDato(struct TablaHash **, char *);
void ImprimirTabla(struct TablaHash *);
int BuscarDato(struct TablaHash*, char *);

#endif
