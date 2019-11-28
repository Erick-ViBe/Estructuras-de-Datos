a.out: main.o hashCerrado.o
	gcc main.o hashCerrado.o
main.o: main.c
	gcc -c main.c
hash.o: hashCerrado.c
	gcc -c hashCerrado.c
run: a.out
	./a.out
clean:
	rm a.out main.o hashCerrado.o
