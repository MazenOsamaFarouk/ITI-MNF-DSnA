

all: dsa_test
	@ dsa_test.exe


# make rule to generate the final binary
dsa_test:  main.o array.o
	@ gcc main.o array.o -o dsa_test.exe
	

main.o: array.c main.c
	@ gcc -c main.c
	
array.o: array.c
	@ gcc -c array.c