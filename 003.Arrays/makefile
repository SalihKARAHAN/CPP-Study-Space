# -*- MakeFile -*-

#target: dependencies
#	action

CC=c++
ARCH=64 ## İlginç; bu pcdeki mingw64 için -c tanımı açılmayan bir çıktı üretiyor!
CFLAGS=-m$(ARCH)

jupyter:
	$(CC) $(CFLAGS) Arrays_JupyterPage_1.cpp -o Arrays_JupyterPage_1.bin
	.\Arrays_JupyterPage_1.bin

p621: 
	$(CC) $(CFLAGS) Program_6_2_1.cpp -o Program_6_2_1.bin

p652:
	$(CC) $(CFLAGS) Program_6_5_2.cpp -o Program_6_5_2.bin
	.\Program_6_5_2.bin

