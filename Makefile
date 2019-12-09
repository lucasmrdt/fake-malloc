BINARY="echo 'provide BINARY file'"

all:
	gcc -fpic -c malloc.c
	gcc -shared -o libmalloc.so malloc.o
	LD_PRELOAD=`pwd`/libmalloc.so $(BINARY)
