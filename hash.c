#include <stdlib.h>
#include <stdio.h>

int
main(void){

	//hola xddd

	int tamano_hash = 25;
	int hash[tamano_hash];
	int aux;
	int pos;

	for (int i = 0; i < tamano_hash; ++i){

		hash[i] = 0;
	}

	printf("---------------\n");

	scanf("%d", &aux);

	printf("---------------\n");

	pos = ((aux*124)%tamano_hash)-1;

	hash[pos] = aux;

	for (int i = 0; i < tamano_hash; ++i){

		printf("%d\n", hash[i]);
	}

	return 0;
}
