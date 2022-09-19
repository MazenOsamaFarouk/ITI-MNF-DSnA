// cLinklist.c

#include <stdio.h>
#include <stdlib.h>
#include "cLinklist.h"

typedef struct LL_t
{
	Node_t* head;
	Node_t* tail;
	unsigned int size;	
}LinkList_t;



cLinklistHandle_t cLinklist_create( int data )
{
	cLinklistHandle_t me = (cLinklistHandle_t)malloc(sizeof(LinkList_t));
	if(me != NULL)
	{
		me->head = (Node_t*)malloc(sizeof(Node_t));
		if(me->head != NULL)
		{
			me->head->data  = data ;
			me->head->next = NULL ;
			me->tail = me->head ;
			me->size++ ;
		}
	}
}

void cLinklist_destroy(cLinklistHandle_t me)
{
	/* Assignment */
}

void cLinklist_insertFront(cLinklistHandle_t me,int data )
{
	Node_t* newnode = (Node_t*)malloc(sizeof(Node_t));
	if(newnode != NULL)
	{
		newnode->data=data ;
		newnode->next = me->head ;
		me->head = newnode ;
		me->size ++ ;
	}
}

void cLinklist_Append(cLinklistHandle_t me, int data)
{
	Node_t* newnode = (Node_t*)malloc(sizeof(Node_t));
	if(newnode != NULL)
	{
		newnode->data=data ;
		newnode->next = NULL ;
		me->tail->next = newnode ;
		me->tail = newnode ;
		me->size++ ;
	}
}

void cLinklist_deleteNext(cLinklistHandle_t me, Node_t* n )
{
	
}

void cLinklist_find(cLinklistHandle_t me,int key )
{
	
}

void cLinklist_sort(cLinklistHandle_t me )
{
	
}

void cLinklist_Print(cLinklistHandle_t me)
{
	Node_t* list = me->head ;
	printf("--------------------------\n");
	while(list != NULL)
	{
		printf("%d\n", list->data); // equivalent to array access arr[i]
		list = list->next ;
	}
	printf("--------------------------\n");
}

unsigned int cLinklist_GetSize(cLinklistHandle_t me)
{
	return me->size ;
}



