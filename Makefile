


all: nup libnup.so

nup: main.o libnup.so
	gcc -o nup main.o -L. -lnup

libnup.so: nup.o
	ld -shared -o libnup.so nup.o

nup.o: nup.c
	gcc -fPIC -g -c nup.c

clean:
	rm nup.o libnup.so main.o

install:
	cp nup.h /usr/local/include
	cp libnup.so /usr/local/lib
