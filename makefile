

all: dsa_test
#	@ dsa_test.exe


# make rule to generate the final binary
dsa_test:   cLinklist/cLinklist.o main.o
#	@ gcc main.o cArray/cArray.o -o dsa_test.exe
	@ gcc main.o cLinklist/cLinklist.o -o dsa_test.exe
	

main.o: cLinklist/cLinklist.c main.c
	@ gcc -c main.c
	
array.o: array.c
	@ gcc -c array.c
	
cArray/cArray.o: cArray/cArray.c
	@ cd cArray && gcc -c cArray.c

cLinklist/cLinklist.o: cLinklist/cLinklist.c
	@ cd cLinklist && gcc -c cLinklist.c

