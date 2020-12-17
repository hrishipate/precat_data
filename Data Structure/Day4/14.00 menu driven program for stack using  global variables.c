#include <stdio.h>
#include <stdlib.h>
#define MAX 5
#define TRUE 1
#define FALSE 0

int top;
int info[MAX];
int Pick();
void Pop();
void Push(int value);
void InitStack();
void PrintStack();
int IsFull();
int IsEmpty();
int MenuOperations();
int main(void)
{
	int choice, data;

	InitStack();
	PrintStack();

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
			  	  Push(data);
				}
				else
					printf("\n stack is full \n");
			  	  break;
		case 2: // pop
				if(!IsEmpty() )
				{
					data= Pick(); // get top element
					printf("\n poped data  =%d \n", data);
					Pop(); // remove top element
				}
				else
					printf("\n stack is empty \n");
				break;

		case 3: // pick
				if(!IsEmpty() )
				{
					data= Pick();
					printf("\n data pick =%d\n", data);
				}
				else
					printf("\n stack is empty \n");
				break;
		case 4: // print stack
				PrintStack();
				break;
	}
		if(choice!=4)
			PrintStack();

		printf("\n Enter 1 to continue or 0 to exit :: ");
		scanf("%d", &choice);

	}while(choice!= 0);
	return EXIT_SUCCESS;
}
void InitStack()
{
	top=-1;
	int index;
	for(index=0; index<MAX; index++)
	{
		info[index]=-1;
	}
	return;
}
void PrintStack()
{
	int index;
	for(index=0; index<MAX; index++)
	{
		printf("%-3d[%d]", info[index], index);
	}
	printf("\t top=%d", top);
	return ;
}
int IsFull()
{
	/*if(top==MAX-1)
		return TRUE;
	else
		return FALSE;*/

	//top==MAX-1 ? return TRUE : return FALSE;

	return top==MAX-1 ?  TRUE : FALSE;
}
int IsEmpty()
{
	return top==-1 ? TRUE : FALSE;
	/*if(top==-1)
		return 1;
	else
		return 0;
	*/
}
int Pick()
{
	int value;
	value=info[top];
	return value;
}
void Pop()
{
	info[top]=-1;
	top=top-1; // top--;
	return;
}
void Push(int value)
{
	top=top+1; // ++top
	info[top]=value;
}
int MenuOperations()
{
	int choice;
	printf("\n 1. Push \n 2. Pop \n 3. Pick 4. PrintStack \n 0. ");

	printf("\n Enter Your choice :: ");
	scanf("%d", &choice);

	return choice;
}
