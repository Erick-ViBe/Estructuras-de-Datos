cola.o: cola.c
	gcc cola.c -c -Wall
main.o: main.c
	gcc main.c -c -Wall

a.out: main.o cola.o
	gcc main.o cola.o

run: a.out
	./a.out

clean:
	rm -f *.o a.out
