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

struct emp AcceptEmpInfo();
void DisplayEmpInfo(const struct emp *e);//e is pointer 4 or 8 or 2
int main(void)
{
	//struct emp e1={1};
	struct emp e1;

	printf("\n Enter Emp info :: ");
	e1=AcceptEmpInfo();

	printf("\n Emp info :: correct value\n");
	DisplayEmpInfo(&e1); // e1 actual argument

	return EXIT_SUCCESS;
}

struct emp AcceptEmpInfo()
{
	struct emp e;
	printf("\n Enter emp no ::");
	scanf("%d", &e.empno);

	printf("\n Enter emp name ::");
	scanf("%s", e.name);

	printf("\n Enter emp sal ::");
	scanf("%f", &e.sal);

	return e;
}
// e is formal argument
void DisplayEmpInfo(const struct emp *e)
{
	//e->sal=-10000;
	printf("\n empno    name    sal\n");
	printf("%-6d%-10s%6.2f", e->empno, e->name, e->sal);
	return;
}
