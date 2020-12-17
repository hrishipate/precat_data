#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)
struct emp
{
	// variable or members
	int empno;
	char name[10];
	float sal;
};// end of emp structure
struct emp e1;
void AcceptEmpInfo(void);
void DisplayEmpInfo(void);
int main(void)
{
	//struct emp e1={1};


	printf("\n Enter Emp info :: ");
	AcceptEmpInfo();

	printf("\n Emp info ::correct value\n");
	DisplayEmpInfo();

	return EXIT_SUCCESS;
}

void AcceptEmpInfo()
{
	printf("\n Enter emp no ::");
	scanf("%d", &e1.empno);

	printf("\n Enter emp name ::");
	scanf("%s", e1.name);

	printf("\n Enter emp sal ::");
	scanf("%f", &e1.sal);


	return ;
}

void DisplayEmpInfo()
{
	printf("\n empno    name    sal\n");
	printf("%-6d%-10s%6.2f", e1.empno, e1.name, e1.sal);
	return;
}
