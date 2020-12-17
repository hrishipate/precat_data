
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	struct node *prev;
	int data;
	struct node *next;
}NODE;
typedef struct list
{

	NODE *head;
}LIST;
void InitLinkedList(LIST *list);
NODE* CreateNode(int value);
void DisplayList(const LIST *list);
void AddLast(LIST *list, int value);

int main(void)
{
	LIST l1, l2;
	InitLinkedList(&l1);
	AddLast(&l1,10);
	AddLast(&l1,20);
	AddLast(&l1,30);
	printf("\n L1 ::\n");
	DisplayList(&l1);

	InitLinkedList(&l2);
	AddLast(&l2,40);
	AddLast(&l2,50);
	AddLast(&l2,60);
	printf("\n L2 ::\n");
	DisplayList(&l2);

	return EXIT_SUCCESS;
}
NODE* CreateNode(int value)
{
	NODE *newnode=NULL;
	newnode= (NODE*)malloc(sizeof(NODE)*1);
	newnode->prev=NULL;
	newnode->data=value;
	newnode->next=NULL;
	return newnode;
}
void AddLast(LIST *list,int value)
{
	NODE *newnode=NULL;
	newnode=CreateNode(value);
	if( list->head==NULL)
	{
		list->head=newnode;
		newnode->next=list->head;
		newnode->prev=list->head;
	}
	else
	{
		NODE *trav=NULL;
		trav=list->head;
		while(trav->next!=list->head)
		{
			trav=trav->next;
		}
		newnode->prev=trav;
		newnode->next=list->head;
		trav->next=newnode;
		list->head->prev=newnode;
	}
	return;
}
void DisplayList(const LIST *list)
{
	NODE *trav=NULL,*temp=NULL;
	trav=list->head;

	printf("\n for word direction :\n");
	do
	{
		temp=trav;
		printf("%d->>", trav->data);
		trav=trav->next;
	}while(trav!=list->head);


	trav=temp; // start from last
	printf("\n bacl word direction :\n");
	do
	{
		printf("%d->>", trav->data);
		trav=trav->prev;
	}while(trav!=temp);


	return;
}
void InitLinkedList(LIST *list)
{
	list->head=NULL;
}
