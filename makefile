all: main.o rando.o
	gcc -o program main.o rando.o

main.o: main.c rando.h
	gcc -c main.c

rando.o: rando.c rando.h
	gcc -c rando.c
