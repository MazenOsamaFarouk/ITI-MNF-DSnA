#include <stdio.h>


// #include "array.h"
#include "cArray/cArray.h"


typedef struct
{
	char* string;
	Bitfiled_t bits;
	long int;
	int numbers[20];
} Feel_t;



int main(void)
{	
#if 0
	
	int arr[20] = {1,2,4,5,6,7};
	
	array_insert(arr, 20, 3, 2 );
	array_insert(arr, 20, 8, 7 );
	
	array_delete(arr, 20, 4);
	
	array_print(arr, 20);
#endif
	
#if 0
	cArrayHandle_t myarr = array_create(5);


	for(int i=0; i<10; i++)
	{
		array_insert(myarr, (i+1)*(i+1), i);
		
	}
	
	array_set(myarr, 15, 2);
	
	array_print(myarr);
#endif

int x = 0x0A0B0C0D ;

void* ptr = &x ;

*((char*)ptr) = 0x0E ;

printf("%x", x);


}
