listaLigada.o: listaCircular.c
	gcc listaCircular.c -c -Wall

main.o: main.c
	gcc main.c -c -Wall

a.out: main.o listaCircular.o
	gcc main.o listaCircular.o -lm

run: a.out
	./a.out

clean:
	rm -f a.out main.o listaCircular.o
