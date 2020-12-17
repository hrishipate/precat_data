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
void FreeList();
void ClearList();
int MenuOperations();
int main(void)
{
	int choice, pos, data;

			do
			{
				choice=MenuOperations();
				switch(choice)
				{
					default : printf("\n invalid case ");
							continue;
					case 0:
						    return 0;
					case 1:	// Add 1st
							printf("\n Enter Data:: ");
							scanf("%d", &data);
							AddFirst(data);
							break;
					case 2: // Add Last
							printf("\n Enter Data:: ");
							scanf("%d", &data);

							AddLast(data);
							break;
					case 3: // add at position
							printf("\n Enter Position :: ");
							scanf("%d", &pos);
							if(pos<0 || pos > (CountNodes()+1))
							{
								printf("\n invalid position ");
							}
							else
							{
								printf("\n Enter Data:: ");
								scanf("%d", &data);
								AddAtPosition(pos,data);
							}
							break;
					case 4 : // del1st
							if(CountNodes()!=0)
							{
								data=DelFirst();
								printf("\n data containing %d data is deleted \n", data);
							}
							else
								printf("\n list is empty");
							break;
					case 5: // del last
							if(CountNodes()!=0)
							{
								data= DelLast();
								printf("\n  data conatining %d data is deleted \n", data);
							}
							else
								printf("\n list is empty");
							break;



					case 7: // display
							DisplayList();
							break;
					case 8:// print rev

							TravRev(head);
							printf("\n");
							break;

				}
				if(choice!=6)
					DisplayList();

				printf("\n Enter 1 to continue ot 0 to exit ::");
				scanf("%d", &choice);

			}while(choice!=0);
			FreeList();

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
int MenuOperations()
{
	int choice;
	printf("\n 1. AddFirst \n 2. AddLast \n 3. AddAtPosition ");
	printf("\n 4. DelFrist \n 5. DelLast \n 6. Del At a Position ");
	printf("\n 7. Display List \n 8. Print Reverse Using Recursion \n");
	printf("\n Enter Your Choice:: ");
	scanf("%d", &choice);
	return choice;
}
