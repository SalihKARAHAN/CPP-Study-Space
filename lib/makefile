# -*- makefile -*-

CC=c++
CFLAGS=-Wall -g -c -m64 -v

compile_all: compile_arrays

initialize:
	mkdir dist
	mkdir dist\x64

compile_arrays: arrays.h arrays.cpp
	$(CC) $(CFLAGS) arrays.cpp -o dist\x64\arrays.lib 