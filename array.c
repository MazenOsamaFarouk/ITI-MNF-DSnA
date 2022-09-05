// array.c

#include <stdio.h>


void array_print(int array[], int size)
{
	for(int i=0; i<size; i++)
	{
		printf("%d\n", array[i]);
	}
	printf("\n");
}


void array_insert(int array[], int size, int value, int index)
{
	if(index < size)
	{
		// shift array to right
		for(int i=size-2; i>=index; i--)
		{
			array[i+1] = array[i];
		}
		array[index] = value ;
	}
}

void array_delete(int array[], int size, int index)
{
	if(index < size)
	{
		// shift array to right
		for(int i=index; i < size-2; i++)
		{
			array[i] = array[i+1];
		}
	}
}
