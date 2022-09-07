

all: dsa_test
#	@ dsa_test.exe


# make rule to generate the final binary
dsa_test:  main.o cArray/cArray.o
	@ gcc main.o cArray/cArray.o -o dsa_test.exe
	

main.o: array.c main.c
	@ gcc -c main.c
	
array.o: array.c
	@ gcc -c array.c
	
cArray/cArray.o: cArray/cArray.c
	@ cd cArray && gcc -c cArray.c
