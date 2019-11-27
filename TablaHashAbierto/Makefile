a.out: main.o hashAbierto.o
	gcc main.o hashAbierto.o
main.o: main.c
	gcc -c main.c
hash.o: hashAbierto.c
	gcc -c hashAbierto.c
run: a.out
	./a.out
clean:
	rm -f a.out main.o hashAbierto.o
