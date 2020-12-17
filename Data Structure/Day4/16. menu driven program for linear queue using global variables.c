// linear queue
#include <stdio.h>
#include <stdlib.h>
#define MAX 5
#define TRUE 1
#define FALSE 0

int front;
int rear;
int info[MAX];

int Pick();
void DeleteQueue();
void AddQueue(int value);
void InitQueue();
void PrintQueue();
int IsFull();
int IsEmpty();
int MenuOperations();
int main(void)
{
	int choice, data;

	InitQueue();
	PrintQueue();

	do
	{
	choice= MenuOperations();
	switch(choice)
	{
		default : printf("\n invalid choice :: ");
				continue;
		case 1: // push
				if(!IsFull())
				{
			  	  printf("\n Enter Data :: ");
			  	  scanf("%d", &data);
			  	  AddQueue(data);
				}
				else
					printf("\n Queue is full \n");
			  	  break;
		case 2: // pop
				if(!IsEmpty() )
				{
					data= Pick(); // get top element
					printf("\n poped data  =%d \n", data);
					DeleteQueue(); // remove top element
				}
				else
					printf("\n Queue is empty \n");
				break;

		case 3: // pick
				if(!IsEmpty() )
				{
					data= Pick();
					printf("\n data pick =%d\n", data);
				}
				else
					printf("\n Queue is empty \n");
				break;
		case 4: // print Queue
				PrintQueue();
				break;
	}
		if(choice!=4)
			PrintQueue();

		printf("\n Enter 1 to continue or 0 to exit :: ");
		scanf("%d", &choice);

	}while(choice!= 0);
	return EXIT_SUCCESS;
}

void InitQueue()
{
	rear=front=-1;
	int index;
	for(index=0; index<MAX; index++)
	{
		info[index]=-1;
	}
	return;
}
void PrintQueue()
{
	int index;
	for(index=0; index<MAX; index++)
	{
		printf("%-3d[%d]", info[index], index);
	}
	printf("\t front=%d rear=%d", front, rear);
	return ;
}
int IsFull()
{

	return rear==MAX-1 ?  TRUE : FALSE;
}
int IsEmpty()
{
	return rear==front ? TRUE : FALSE;

}
int Pick()
{
	int value;
	value=info[front+1];
	return value;
}
void DeleteQueue()
{
	front= front+1;
	info[front]=-1;
	return;
}
void AddQueue(int value)
{
	rear=rear +1;
	info[rear]=value;
}
int MenuOperations()
{
	int choice;
	printf("\n 1. Push/AddQueue \n 2. Pop/DeleteQueue \n 3. Pick 4. PrintQueue \n 0. ");

	printf("\n Enter Your choice :: ");
	scanf("%d", &choice);

	return choice;
}
