# -*- makefile -*-

CC=c++
CFLAGS=-c
# -Wall -g -m64
# -v = verbose

compile: main selection_sort lib_arrays
	$(CC) bin\main.bin bin\selection_sort.lib bin\arrays.lib -o bin\Sort.program
	.\bin\Sort.program

compile2: selection_sort main
	$(CC) ..\..\..\..\lib\dist\x64\arrays.lib bin\selection_sort.lib bin\main.bin -o bin\Sort.program
	.\bin\Sort.program

compile3: lib_arrays selection_sort main
	$(CC) bin\arrays.lib bin\selection_sort.lib bin\main.bin -o bin\Sort.program
	.\bin\Sort.program

lib_arrays: ..\..\..\..\lib\arrays.cpp
	$(CC) $(CFLAGS) ..\..\..\..\lib\arrays.cpp -o bin\arrays.lib

selection_sort: selection_sort.cpp
	$(CC) $(CFLAGS) selection_sort.cpp -o bin\selection_sort.lib

main: main.cpp
	$(CC) $(CFLAGS) main.cpp -o bin\main.bin




# compile: selection_sort.h
# 	$(CC) $(CFLAGS) ..\..\sort.h selection_sort.cpp main.cpp -o bin\x64\test.ebf
# 	.\bin\x64\test.ebf

# compile_all: compile_test

# init:
# 	mkdir bin
# 	mkdir bin\x64

# sort: ..\..\sort.h
# 	$(CC) $(CFLAGS) -c ..\..\sort.h -o bin\x64\sort.hbin

# selection_sort: ..\..\sort.h selection_sort.h selection_sort.cpp
# 	$(CC) $(CFLAGS) -c selection_sort.cpp -o bin\x64\selection_sort.lib
# ## derleme sürecine header dosyasını ekleyince neden aşağıdaki hatayı verdi?
# ## c++ -Wall -g -m64 -c selection_sort.h selection_sort.cpp -o bin\x64\selection_sort.lib
# ## c++: fatal error: cannot specify -o with -c, -S or -E with multiple files
# ## compilation terminated.
# ## make: *** [makefile:17: selection_sort] Error 1

# main:
# 	$(CC) $(CFLAGS) -c main.cpp -o bin\x64\main.bin

# compile_test: selection_sort main
# 	$(CC) $(CFLAGS) -c bin\x64\selection_sort.lib bin\x64\main.bin -o bin\x64\selection_sort_test.ebf
# 	.\bin\x64\selection_sort_test.ebf