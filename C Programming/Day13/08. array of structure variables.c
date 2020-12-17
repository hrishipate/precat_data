#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
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
int main(void)
{

	struct emp e1[SIZE];

	printf("\n Enter Emp info :: ");
	AcceptEmpInfo(e1, SIZE); // e1 actual argument

	printf("\n Emp info :: garbage value\n");
	DisplayEmpInfo(e1, SIZE); // e1 actual argument

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
