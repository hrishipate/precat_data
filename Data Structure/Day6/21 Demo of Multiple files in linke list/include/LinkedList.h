
#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

typedef struct node
{
	int data; // data part
	struct node *next; // address of next node
}NODE;
NODE *head; // NODE *head=NULL;
NODE* CreateNode(int value);
void AddFirst(int value);
void AddLast(int value);
void AddAtPosition(int position, int value);
void DisplayList();
int CountNodes();
void TravRev(NODE *trav);
int DelFirst();
int DelLast();
int DelAtPosition(int position);
void FreeList();
void ReverseList();
void ClearList();



#endif /* LINKEDLIST_H_ */

//The conditional compilation directives are
/*
#if,
#else,
#elif,
#ifdef,
#ifndef,
#endif,
#undef.
*/
