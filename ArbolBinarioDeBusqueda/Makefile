arbolAVL.o: arbolAVL.c
	gcc arbolAVL.c -c -Wall

main.o: main.c
	gcc main.c -c -Wall

a.out: main.o arbolAVL.o
	gcc main.o arbolAVL.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o arbolAVL.o
