
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	struct node *prev;
	int data;
	struct node *next;
}NODE;

NODE *head;
NODE* CreateNode(int value);
void DisplayList();
void AddLast(int value);

int main(void)
{
	AddLast(10);
	AddLast(20);
	AddLast(30);
	DisplayList();
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
void AddLast(int value)
{
	NODE *newnode=NULL;
	newnode=CreateNode(value);
	if(head==NULL)
	{
		head=newnode;
		newnode->next=head;
		newnode->prev=head;
	}
	else
	{
		NODE *trav=NULL;
		trav=head;
		while(trav->next!=head)
		{
			trav=trav->next;
		}
		newnode->prev=trav;
		newnode->next=head;
		trav->next=newnode;
		head->prev=newnode;
	}
	return;
}
void DisplayList()
{
	NODE *trav=NULL,*temp=NULL;
	trav=head;

	printf("\n for word direction :\n");
	do
	{
		temp=trav;
		printf("%d->>", trav->data);
		trav=trav->next;
	}while(trav!=head);


	trav=temp; // start from last
	printf("\n bacl word direction :\n");
	do
	{
		printf("%d->>", trav->data);
		trav=trav->prev;
	}while(trav!=temp);


	return;
}
