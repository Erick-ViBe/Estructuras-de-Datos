listaLigada.o: listaLigada.c
	gcc listaLigada.c -c -Wall

main.o: main.c
	gcc main.c -c -Wall

a.out: main.o listaLigada.o
	gcc main.o listaLigada.o -lm

run: a.out
	./a.out

clean:
	rm -f a.out main.o listaLigada.o
