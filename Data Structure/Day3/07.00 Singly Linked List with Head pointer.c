#include <stdio.h>
#include <stdlib.h>
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
void ClearList();
int main(void)
{
	int data;
	/* addfirst check
	DisplayList();
	AddFirst(30);
	DisplayList();
	AddFirst(20);
	DisplayList();
	AddFirst(10);
	DisplayList();*/

	// checking AddLast
	/*DisplayList();
	AddLast(10);
	DisplayList();
	AddLast(20);
	DisplayList();
	AddLast(30);
	DisplayList();
	AddLast(40);
	DisplayList();*/

	// checking add 1st with addatposition
	/*AddLast(20);
	DisplayList();
	AddAtPosition(1, 10);
	DisplayList();*/

	// checking add last with addatposition
		/*AddLast(10);
		AddLast(20);
		AddLast(30);
		AddLast(40);
		DisplayList();
		AddAtPosition(4, 44);
		DisplayList();

		//addat 3 position (25)
		AddAtPosition(3, 25);
		DisplayList();

		AddAtPosition(6, 66);
		DisplayList();
		*/

/*	AddLast(10);
	AddLast(20);
	AddLast(30);
	AddLast(40);
	DisplayList();
	printf("\n print rev \n");
	TravRev(head);
	printf("\n print list\n");
	DisplayList();
*/
	// check del 1st
	/*AddLast(10);
	AddLast(20);
	AddLast(30);
	DisplayList();
	data= DelFirst();
	printf("\n node deleted whose data is %d -->>\n ", data);
	DisplayList();
*/
	//check del last when you have one node
	/*AddFirst(10);
	DisplayList();
	data=DelLast();
	printf("\n node deleted whose data is %d -->>\n ", data);
	DisplayList();
	*/

	//check del last when you have multiple node
	/*	AddFirst(30);
		AddFirst(20);
		AddFirst(10);
		DisplayList();
		data=DelLast();
		printf("\n node deleted whose data is %d -->>\n ", data);
		DisplayList();
*/
// check free list
	/*
	AddLast(10);
	AddLast(20);
	AddLast(30);
	DisplayList();

	FreeList();
	DisplayList();
 */
 //check clear
	/*AddLast(10);
	AddLast(20);
	AddLast(30);
	DisplayList();
 ClearList();*/
// delete last or 1st
	AddLast(10);
	AddLast(20);
	AddLast(30);
	AddLast(40);
	AddLast(50);
	DisplayList();
	data= DelAtPosition(4);
	printf("\n node deleted whose data is %d -->>\n ", data);
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
void AddFirst(int value)
{
	NODE * newnode=NULL;
	newnode=CreateNode(value);
	if(head==NULL) //check head is null
		head=newnode;
	else
	{
		newnode->next=head;//1.1
		head=newnode;//1.2
	}
	return;
}
void DisplayList()
{
	NODE *trav=NULL;
	if(head==NULL)
		printf("\list is empty");
	else
	{
		trav=head;
		while(trav!=NULL)
		{
			printf("%d--->", trav->data);
			trav=trav->next;
		}
	}
	printf("\n");
	return;
}
void AddLast(int value)
{
	NODE *newnode=NULL;
	newnode=CreateNode(value);
	if(head==NULL)
		head=newnode;//2.0
	else
	{
		NODE *trav=NULL;
		trav=head;
		while(trav->next!=NULL)
		{
			trav=trav->next;
		}
		trav->next=newnode; //2.2
	}
	return;
}
void AddAtPosition(int position, int value)
{
	NODE *newnode=NULL, *trav=NULL;
	int i;
	if(head==NULL || position==1)
		AddFirst(value);
	else if(position== (CountNodes()+1))  //6==(5+1)
	{
		AddLast(value);
	}
	else
	{
		newnode=CreateNode(value);
		trav=head;//3.1
		for(i=1; i<position-1; i++)
		{
			trav=trav->next; //3.2
		}
		newnode->next=trav->next;//3.3
		trav->next=newnode;//3.4

	}
	return;
}
int CountNodes()
{
	NODE *trav=NULL;
	int count=0;
	if(head==NULL)
		return 0;
	else
	{
		trav=head;
		while(trav!=NULL)
		{
			count++;
			trav=trav->next;
		}
	}
	return count;
}
void TravRev(NODE *trav)
{
	if(trav==NULL)
		return;
	else
		TravRev(trav->next);
	printf("<----%d", trav->data);
}
int DelFirst()
{
	NODE *temp=NULL;
	int value=0;
	if(head==NULL)
		printf("list is empty");
	else if(head!=NULL)
	{
		temp=head; //4.1
		head=head->next; //4.2
		value=temp->data;//4.3
		free(temp); //4.4
		temp=NULL;//4.5
	}
	return value; //4.6 return 10
}
int DelLast()
{
	int value=0;
	NODE *trav=NULL, *prev=NULL;
	trav=head;//5.1
	while(trav->next!=NULL)
	{
		prev=trav;
		trav=trav->next;
	}
	if(prev==NULL) // i have only 1 node
		head=NULL;//5.2
	else
		prev->next=NULL;
	value=trav->data;//5.3
	free(trav);//5.4
	trav=NULL;//5.5
	return value;//5.6
}
void FreeList()
{
	int data=0;
	while(CountNodes())
	{
		data=DelFirst();
		printf("\n data containing %d is deleted ", data);
	}
	printf("\n");
	return;
}
void ClearList()
{
	NODE *temp=NULL;
	while(head!=NULL)
	{
		temp=head;
		head=head->next;
		printf("\n delete nodes data is %d", temp->data);
		free(temp);
		temp=NULL;
	}
	printf("\n all nodes are deleted\n");

}
int DelAtPosition(int position)
{
	NODE *trav=NULL, *temp=NULL;
	int i, value=0;
	if(position==1)
	{
		value=DelFirst();
	}
	else if(position== CountNodes())
	{
		value=DelLast();
	}
	else
	{
		trav=head;
		for(i=1; i<position-1; i++)
		{
			trav=trav->next;
		}
		temp=trav->next;//6.1
		trav->next=temp->next;
		value=temp->data;
		free(temp);
		temp=NULL;
	}
	return value;
}
