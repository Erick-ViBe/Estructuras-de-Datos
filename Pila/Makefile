pila.o: pila.c
	gcc pila.c -c -Wall
main.o: main.c
	gcc main.c -c -Wall

a.out: main.o pila.o
	gcc main.o pila.o

run: a.out
	./a.out

clean:
	rm -f *.o a.out
