#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define SIZE 5
#pragma pack(1)
struct emp
{
	// variable or members
	int empno;
	char name[10];
	float sal;
};// end of emp structure

void AcceptEmpInfo(struct emp e[], int size);
void DisplayEmpInfo(struct emp e[], int size);
void SelectionSortByEmpNoAsc(struct emp e[], int size);
int main(void)
{

	struct emp e1[SIZE];

	printf("\n Enter Emp info :: ");
	AcceptEmpInfo(e1, SIZE);

	printf("\n Emp info :: before sort\n");
	DisplayEmpInfo(e1, SIZE);

	SelectionSortByEmpNoAsc(e1, SIZE);
	printf("\n Emp info :: after sort\n");
	DisplayEmpInfo(e1, SIZE);


	return EXIT_SUCCESS;
}
// e is formal argument
void AcceptEmpInfo(struct emp e[], int size)
{
	int index;
	for(index=0; index<size; index++)
	{
		printf("\n Enter emp no ::");
		scanf("%d", &e[index].empno);

		printf("\n Enter emp name ::");
		scanf("%s", e[index].name);

		printf("\n Enter emp sal ::");
		scanf("%f", &e[index].sal);
	}

	return ;
}
// e is formal argument
void DisplayEmpInfo(struct emp e[], int size)
{
	int index;
	printf("\n empno    name    sal\n");
	for(index=0; index<size ; index++)
		printf("\n%-6d%-10s%6.2f", e[index].empno, e[index].name, e[index].sal);

	return;
}
void SelectionSortByEmpNoAsc(struct emp e[], int size)
{
	struct emp temp;
	int i, j;

	for(i=0; i<size; i++)
	{
		for(j=i+1;j<size;j++ )
		{
			//if(e[i] >e[j]) // not allowed to compare structure variables
			//if(e[i].empno > e[j].empno ) //asc of empno
			//if(e[i].empno < e[j].empno ) //desc of empno
			//if(strcmp(e[i].name , e[j].name )>0) //asc by empname
			if(strcmp(e[i].name , e[j].name )<0) //desc by empname
			{
				temp=e[i];
				e[i]=e[j];
				e[j]=temp;
			}
		}
	}

	return;
}
