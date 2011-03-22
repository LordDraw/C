CFLAGS = -Wall

comp:
cc -c main.c lib.c

main:
cc -lm main.o lib.o

clean:
rm -f *.o *~ *.in 
