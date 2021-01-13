CC=gcc
CFLAGS=-I. -Wall -Werror -fpic -std=c11
DEPS = Phantom.h
OBJ = Phantom.o Phantom/class.o Phantom/token/method.o Phantom/method.o
PROJECT = Phantom

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

Phantom: $(OBJ)
	$(CC) -o $(PROJECT)/object/$@.x86_64 $^ $(CFLAGS)
	./$(PROJECT)/object/$@.x86_64
