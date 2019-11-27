listaLigada.o: listaDobleLigada.c
	gcc listaDobleLigada.c -c -Wall

main.o: main.c
	gcc main.c -c -Wall

a.out: main.o listaDobleLigada.o
	gcc main.o listaDobleLigada.o -lm

run: a.out
	./a.out

clean:
	rm -f a.out main.o listaDobleLigada.o
