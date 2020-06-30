# -*- MakeFile -*-

#target: dependencies
#	action

CC=c++
ARCH=32
CFLAGS=-c -m$(ARCH)

compile: clear-all initialize main lib clear
	$(CC) bin\Functions.bin bin\lib\sum.lib -o bin\Functions.program
	cp bin\Functions.program dist\x$(ARCH)\Functions_x$(ARCH).program
	make clear

initialize: 
	mkdir bin
	mkdir bin\lib
	mkdir dist
	mkdir dist\x$(ARCH)

main: Functions.cpp lib\sum.h
	$(CC) $(CFLAGS) Functions.cpp -o bin\Functions.bin

lib: lib\sum.cpp
	$(CC) $(CFLAGS) lib\sum.cpp -o bin\lib\sum.lib

clear:
	rm -rf bin

clear-all: clear 
	rm -rf bin\Functions.program
