#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cArray.h"

typedef struct cArray
{
	int* arr;
	int size;
	int capacity;

} cArray_t ;


typedef struct cArray
{
	void* arr;
	int size;
	int capacity;
	int element_size ;
} cArrayGen_t ;



static void CheckCapacity(cArrayHandle_t me)
{
	// extend capacity of array
	if(me->size == me->capacity)
	{
		me->capacity = me->capacity + (me->capacity * 2)/100 +1  ;
		me->arr = realloc(me->arr, me->capacity * sizeof(int)); // #bytes
	}
}

cArrayHandle_t array_create(int capacity ---)
{
	cArrayHandle_t new_array = (cArrayHandle_t)malloc(sizeof(cArray_t));
	if(new_array != NULL)
	{
		new_array->arr = (int*)malloc(sizeof(int)* capacity); // element_size*capacity
		new_array->size = 0;
		new_array->capacity = capacity ;
		/* new_array->element_size = element_size ;  */
	}
	
	return new_array ;
	
}

void array_destroy(cArrayHandle_t me) // this, self
{
	free(me->arr);
	free(me);
}

void array_set(cArrayHandle_t me, void* value, int index)
{
	if(index <= me->size)
	{
		me->arr[index] = value ;
		void* record = ((char *)me->arr + (index*me->element_size)) ;
		/* memcpy( record, value, me->element_size )   */
	}
}

void array_get(cArrayHandle_t me, void* value, int index)
{
	if(index <= me->size)
	{
		*value = me->arr[index];
		/* void* record = ((char *)me->arr + (index*me->element_size)) ;
		   memcpy(value, record, me->element_size);
		*/
	}
}

void array_insert(cArrayHandle_t me, int value, int index)
{
	if(index <= me->size)
	{
		// check if capacity is large enough
		CheckCapacity(me);
		for(int i=me->size-2; i >=index; i--)
		{
			me->arr[i+1] = me->arr[i];
		}
		me->arr[index] = value;
		me->size++ ;
	}
}

void array_append(cArrayHandle_t me, int value)
{
		CheckCapacity(me);
		me->arr[me->size] = value;
		me->size++ ;
}

void array_delete(cArrayHandle_t me, int index)
{
	if(index <= me->size)
	{
		/* optional call  */
		// CheckCapacity(me);
		for(int i=index; i<me->size-2; i++)
		{
			me->arr[i] = me->arr[i+1];
		}
		me->size-- ;
	}
}

void array_sort(cArrayHandle_t me)
{
	
}

void array_find(cArrayHandle_t me)
{
	
}

void array_print(cArrayHandle_t me)
{
	printf("[ ");
	for(int i=0; i< me->size; i++)
	{
		printf("%d, ", me->arr[i]);
	}
	printf(" ]\n");
}


