CC=gcc

all: main

main: main.c dStruct_lib.a
	gcc -o main main.c -L. -ldStruct_lib

dStruct_lib.a: singleLL.h singleLL.o
	ar rcs libdStruct_lib.a singleLL.h singleLL.o

singleLL.o: singleLL.c
	gcc -c singleLL.c

libs: libdStruct_lib.a

clean:
	rm -f main *.o *.a