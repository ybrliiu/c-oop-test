CFLAGS = -g -Wall -ansi -std=c89 -pedantic
CC = gcc

EXES = c_oop_test

all: $(EXES)

player/player.o: player/player.c player/player.h
	$(CC) $(CFLAGS) -c -o player/player.o player/player.c

main.o: main.c player/player.h
	$(CC) $(CFLAGS) -c -o main.o main.c

$(EXES): main.o player/player.o
	$(CC) -o $(EXES) main.o player/player.o
