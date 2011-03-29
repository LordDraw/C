cc = gcc

CFLAGS = -Wall

main : main.c lib.o
cc -o main main.o lib.o

main.o : main.c lib.o

lib.o : lib.c lib.h

clean:
rm -f *.o
