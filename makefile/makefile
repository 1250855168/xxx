CC=gcc
FLAGS =-g -Wall -o2

main: main.o dec.o dive.o mux.o sub.o
	${CC} ${FLAGS} -o main main.c dec.o dive.o mux.o sub.o -lm -I/usr/include
 
main.o: main.c dec.h dive.h mux.h sub.h
	${CC} ${FLAGS} -c -o main.o main.c

dec.o: dec.c 
	${CC} -c dec.c

dive.o: dive.c
	${CC} -c  dive.c

mux.o: mux.c
	${CC} -c mux.c

sub.o: sub.c
	${CC} -c sub.c

clean:
	rm -rf *.o main