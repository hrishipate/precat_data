#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	struct node *prev;
	int data;
	struct node *next;
}NODE;
NODE *head, *tail;
NODE* CreateNode(int value);
void DisplayList();
void AddLast(int value);
void AddFirst(int value);
int main(void)
{
	// check addlast
	/*DisplayList();
	AddLast(10);
	AddLast(20);
	AddLast(30);
	AddLast(40);
	DisplayList();
	*/

	//check add 1st
	DisplayList();
	AddFirst(30);
	AddFirst(20);
	AddFirst(10);
	DisplayList();
	AddFirst(5);
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
	NODE* newnode=NULL;
	newnode=CreateNode(value);
	if(head==NULL) //when list is empty
	{
		head=newnode;
		tail=newnode;
	}
	else
	{
		newnode->prev= tail;
		tail->next= newnode;
		tail=newnode;
	}
	return;
}
void DisplayList()
{
	NODE *trav=NULL;
	trav=head;
	if(trav==NULL)
		printf("\n list is empty");
	else
	{
		printf("\n for word display \n");
		while(trav!=NULL)
		{
			printf("%d->>>", trav->data);
			trav=trav->next;
		}
		printf("\n back word display \n");

		trav=tail;
		while(trav!=NULL)
		{
			printf("<---%d", trav->data);
			trav= trav->prev;
		}
	}
	return;
}
void AddFirst(int value)
{
	NODE *newnode=NULL;
	newnode=CreateNode(value);
	if(head==NULL)
	{
		head=newnode;
		tail=newnode;
	}
	else
	{
		newnode->next=head;
		head->prev=newnode;
		head=newnode;
	}
	return;
}
