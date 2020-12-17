#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}NODE;
NODE *head, *tail;
NODE* CreateNode(int value);
void AddLast(int value);
void DisplayList();
int main(void)
{
	DisplayList();
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
		tail=newnode;
		newnode->next= head;
	}
	else
	{
		newnode->next=head;
		tail->next=newnode;
		tail=newnode;
	}
}
void DisplayList()
{
	NODE *trav=NULL;
	trav=head;
	if(trav==NULL)
		printf("\n list is empty");
	else
	{
		do
		{
			printf("%d->>>", trav->data);
			trav=trav->next;
		}while(trav!=head);
	}
	printf("\n");
	return;
}
