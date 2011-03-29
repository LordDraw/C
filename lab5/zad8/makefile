cc = gcc

CFLAGS = -Wall

main : main.c lib.o
cc -o main main.o lib.o

main.o : main.c lib.o lib.h

lib.o : lib.c

clean:
rm -f *.o
