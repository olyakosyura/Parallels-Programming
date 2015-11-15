# Makefile for Hello World project

hello: main.o print.o
	gcc -o task main.o print.o 

main.o: main.c
	gcc -c main.c

print.o: print.c
	gcc -c print.c
clean:
	rm -f *.o task


