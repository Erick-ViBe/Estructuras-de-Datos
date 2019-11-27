arbolAVL.o: arbolBinarioBusqueda.c
	gcc arbolBinarioBusqueda.c -c -Wall

main.o: main.c
	gcc main.c -c -Wall

a.out: main.o arbolBinarioBusqueda.o
	gcc main.o arbolBinarioBusqueda.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o arbolBinarioBusqueda.o
