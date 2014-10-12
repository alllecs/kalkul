all: kalkul
kalkul: kalkul.c
	gcc -I . -o kalkul -W -Wall kalkul.c
clean:
	rm -rf *.o kalkul
