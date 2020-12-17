#include <stdio.h>
#include <stdlib.h>
#define MAX 5
#define TRUE 1
#define FALSE 0
typedef struct stack
{
	int top;
	int info[MAX];
}STACK;
int Pick(const STACK *stck);
void Pop(STACK *stck);
void Push(STACK *stck,int value);
void InitStack(STACK *stck);
void PrintStack(const STACK *stck);
int IsFull(const STACK *stck);
int IsEmpty(const STACK *stck);
int MenuOperations();
int main(void)
{
	int choice, data;
	STACK st1; // struct stack st1
	InitStack(&st1);
	PrintStack(&st1);

	do
	{
	choice= MenuOperations();
	switch(choice)
	{
		default : printf("\n invalid choice :: ");
				continue;
		case 1: // push
				if(!IsFull(&st1))
				{
			  	  printf("\n Enter Data :: ");
			  	  scanf("%d", &data);
			  	  Push(&st1,data);
				}
				else
					printf("\n stack is full \n");
			  	  break;
		case 2: // pop
				if(!IsEmpty(&st1) )
				{
					data= Pick(&st1); // get top element
					printf("\n poped data  =%d \n", data);
					Pop(&st1); // remove top element
				}
				else
					printf("\n stack is empty \n");
				break;

		case 3: // pick
				if(!IsEmpty(&st1) )
				{
					data= Pick(&st1);
					printf("\n data pick =%d\n", data);
				}
				else
					printf("\n stack is empty \n");
				break;
		case 4: // print stack
				PrintStack(&st1);
				break;
	}
		if(choice!=4)
			PrintStack(&st1);

		printf("\n Enter 1 to continue or 0 to exit :: ");
		scanf("%d", &choice);

	}while(choice!= 0);
	return EXIT_SUCCESS;
}
void InitStack(STACK *stck)
{
	stck->top=-1;
	int index;
	for(index=0; index<MAX; index++)
	{
		stck->info[index]=-1;
	}
	return;
}
void PrintStack(const STACK *stck)
{
	int index;
	for(index=0; index<MAX; index++)
	{
		printf("%-3d[%d]", stck->info[index], index);
	}
	printf("\t top=%d", stck->top);
	return ;
}
int IsFull(const STACK *stck)
{
	/*if(top==MAX-1)
		return TRUE;
	else
		return FALSE;*/

	//top==MAX-1 ? return TRUE : return FALSE;

	return stck->top==MAX-1 ?  TRUE : FALSE;
}
int IsEmpty(const STACK *stck)
{
	return stck->top==-1 ? TRUE : FALSE;
	/*if(top==-1)
		return 1;
	else
		return 0;
	*/
}
int Pick(const STACK *stck)
{
	int value;
	value=stck->info[stck->top];
	return value;
}
void Pop(STACK *stck)
{
	stck->info[stck->top]=-1;
	stck->top=stck->top-1; // stck->top--;
	return;
}
void Push(STACK *stck,int value)
{
	stck->top=stck->top+1; // ++top
	stck->info[stck->top]=value;
}
int MenuOperations()
{
	int choice;
	printf("\n 1. Push \n 2. Pop \n 3. Pick 4. PrintStack \n 0. ");

	printf("\n Enter Your choice :: ");
	scanf("%d", &choice);

	return choice;
}
