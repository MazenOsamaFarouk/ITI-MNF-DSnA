// array.h
#ifndef _ARRAY_H_
#define _ARRAY_H_

#define TYPE int


void array_insert(TYPE array[], int size, TYPE value, int index);
void array_delete(TYPE array[], int size, int index);
void array_print(TYPE array[], int size);

int  array_bFind(int array[], int size, int key);
void array_bubble_sort(int array[], int size);

#endif