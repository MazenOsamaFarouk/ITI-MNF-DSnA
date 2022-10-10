// cLinklist.h

#ifndef _CLINKLIST_H_
#define  _CLINKLIST_H_

typedef struct node
{
	void* data; // 4-bytes
	unsigned int type_size ;
	struct node*  next; // 8-bytes
}Node_t; 



typedef struct LL_t Linklist_t ;
typedef Linklist_t* cLinklistHandle_t ;

cLinklistHandle_t cLinklist_create( int data );
void cLinklist_destroy(cLinklistHandle_t me);
void cLinklist_insertFront(cLinklistHandle_t me,int data );
void cLinklist_Append(cLinklistHandle_t me, int data);
void cLinklist_deleteNext(cLinklistHandle_t me, Node_t* n );
void cLinklist_find(cLinklistHandle_t me,int key );
void cLinklist_sort(cLinklistHandle_t me );
void cLinklist_Print(cLinklistHandle_t me);
unsigned int cLinklist_GetSize(cLinklistHandle_t me);

















#endif //  _CLINKLIST_H_