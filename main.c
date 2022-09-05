#include <stdio.h>


#include "array.h"

int main(void)
{
	int arr[20] = {1,2,4,5,6,7};
	
	array_insert(arr, 20, 3, 2 );
	array_insert(arr, 20, 8, 7 );
	
	array_delete(arr, 20, 4);
	
	array_print(arr, 20);
}
