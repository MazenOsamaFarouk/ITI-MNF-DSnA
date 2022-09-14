#include <stdio.h>
#include <stdlib.h>

// #include "array.h"
// #include "cArray/cArray.h"

typedef struct node
{
	int data; // 4-bytes
	struct node*  next; // 8-bytes
}Node_t; 


/**
	@brief This function creates a linked list from scratch, containing only one node.
	@param num input integer for the first node
	@return Node_t* pointer to the first (head) Node, NULL if malloc failed.
	@note  This function calls malloc in the background, so make sure to check
	for NULL return if the list cann not be created.
*/
Node_t* List_Create(int num)
{
	Node_t* head = (Node_t*)malloc(sizeof(Node_t));
	
	if(head != NULL)
	{		
		head->data = num ;
		head->next = NULL ;	
	}
	else
	{
		printf("Error: in file %s:in function %s: malloc failed to allocate a new node\n",__FILE__, __FUNCTION__  );
	}
	
	return head ;
}

Node_t* List_insertFront(Node_t* head, int num)
{
	Node_t* newnode = (Node_t*)malloc(sizeof(Node_t));
	if(newnode != NULL)
	{
		newnode->data = num ;
		newnode->next = head;
		head = newnode;
	}
	
	return head ;
}


void List_Print(Node_t* list)
{
	printf("--------------------------\n");
	while(list != NULL)
	{
		printf("%d\n", list->data); // equivalent to array access arr[i]
		list = list->next ;
	}
	printf("--------------------------\n");
}

void List_Append(Node_t* head, int num)
{
	Node_t* newnode = (Node_t*)malloc(sizeof(Node_t));
	
	if(newnode != NULL)
	{
		Node_t* list = head;
		while(list != NULL)
		{
			
			if(list -> next == NULL)
			{
				newnode->data = num ;
				newnode->next = list->next;
				list->next =newnode;
				break;
			}
			list = list -> next ;
		}
	}
}




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

#if 0
int x = 0x0A0B0C0D ;

void* ptr = &x ;

*((char*)ptr) = 0x0E ;

printf("%x", x);
#endif


	Node_t* mylist = List_Create(0);
	int choice = 0;
	int user_data = 0;
	do{
		printf("1: Prepend\n");
		printf("2: Append\n");
		printf("3: print list\n");
		printf("4: quit program\n");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1:
				printf("enter number to insert: ");
				scanf("%d", &user_data);
				
				mylist = List_insertFront(mylist, user_data);
				
			break;
			
			case 2:
				
				printf("enter number to insert: ");
				scanf("%d", &user_data);
				
				List_Append(mylist, user_data);
				
			break;
			
			
			case 3:
				List_Print(mylist);
			break;
			
			case 4: 
				printf("Thank you bank masr :D \n");
			break;
			
			default:
			printf("Wrong choice!!!\n");
			break;
		}
		
		
		
	}while(choice!=4);
	
	
	
	
	
	
	
	
	
	
	






}
