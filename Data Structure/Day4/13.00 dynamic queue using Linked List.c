#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}NODE;
NODE *head; //add tail pointer here in code

NODE* CreateNode(int value);
void AddLast(int value); //push / insert /addqueue
void DisplayList();
int DelFirst(); // pop // delete //removequeue
//please implement pick and isempty functionality
void FreeList();
int main(void)
{
	int data;
	AddLast(10);
	AddLast(20);
	AddLast(30);
	AddLast(40);
	DisplayList();

	data= DelFirst();
	printf("\n %d data node is deleted \n", data);
	DisplayList();

	data= DelFirst();
	printf("\n %d data node is deleted \n", data);
	DisplayList();

	data= DelFirst();
	printf("\n %d data node is deleted \n", data);
	DisplayList();

	data= DelFirst();
	printf("\n %d data node is deleted \n", data);
	DisplayList();

	FreeList();

	return EXIT_SUCCESS;
}
NODE* CreateNode(int value)
{
	NODE* newnode=NULL;
	newnode= (NODE*)malloc(sizeof(NODE)*1);
	newnode->data=value;
	newnode->next=NULL;
	return newnode;
}
void DisplayList()
{
	NODE *trav=NULL;
	if(head==NULL)
		printf("\n linked list is empty\n");
	else
	{
		trav=head;
		while(trav!=NULL)
		{
			printf("%d---->", trav->data);
			trav=trav->next;
		}
	}
	printf("\n");
	return;
}
void AddLast(int value)
{
	NODE* newnode=CreateNode(value);
	NODE* trav=NULL;
	if(head==NULL)
		head=newnode;
	else
	{
		trav=head;
		while(trav->next!=NULL)
		{
			trav=trav->next;
		}
		trav->next=newnode;
	}
	return;
}NODE *head; //add tail pointer here in code
int DelFirst()
{
	int value=0;
	NODE *temp=NULL;
	if(head==NULL)
		printf("\n List is empty ");
	else
	{
		temp=head;//1.1
		head= head->next;//1.2
		value= temp->data;//1.3
		free(temp);//1.4
		temp=NULL; //1.5
	}
	return value;
}
void FreeList()
{
	NODE *temp=NULL;
	int value=0;
	while(head!=NULL)
	{
		temp=head;
		head=head->next;
		value=temp->data;
		free(temp);
		temp=NULL;
		printf("\n node whose data is %d deleted", value);
	}
	return;
}


