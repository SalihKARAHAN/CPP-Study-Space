# -*- makefile -*-

CC=c++
CFLAGS=-c

compile: program

program: lib main
	$(CC) bin\main.bin bin\sample.lib -o bin\Program.ebf
	.\bin\Program.ebf

main:
	$(CC) $(CFLAGS) main.cpp -o bin\main.bin

lib: lib\sample.cpp
	$(CC) $(CFLAGS) lib\sample.cpp -o bin\sample.lib