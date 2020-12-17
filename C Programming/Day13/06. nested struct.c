#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)
//way1 for nested structure
/*struct date
{
	int dd;
	int mm;
	int yy;
};
struct emp
{
	// variable or members
	int empno;
	char name[10];
	float sal;
	struct date doj;
};// end of emp structure
*/
//way2 for nested structure
struct emp
{
	// variable or members
	int empno;
	char name[10];
	float sal;
	struct date
	{
		int dd;
		int mm;
		int yy;
	}doj;
	//struct date doj;
};// end of emp structure

void AcceptEmpInfo(struct emp *e); //e is pointer 4 or 8 or 2
void DisplayEmpInfo(const struct emp *e);//e is pointer 4 or 8 or 2
int main(void)
{
	//struct emp e1={1};
	struct emp e1;

	printf("\n Enter Emp info :: ");
	AcceptEmpInfo(&e1); // e1 actual argument

	printf("\n Emp info :: correct value\n");
	DisplayEmpInfo(&e1); // e1 actual argument

	return EXIT_SUCCESS;
}
// e is formal argument
void AcceptEmpInfo(struct emp *e)
{
	printf("\n Enter emp no ::");
	scanf("%d", &e->empno);

	printf("\n Enter emp name ::");
	scanf("%s", &e->name);

	printf("\n Enter emp sal ::");
	scanf("%f", &e->sal);

	printf("\n Enter doj in DD--MM--YYYY") ;
	scanf("%d%*c%d%*c%d", &e->doj.dd,&e->doj.mm, &e->doj.yy);
	return ;
}
// e is formal argument
void DisplayEmpInfo(const struct emp *e)
{
	//e->sal=-10000;
	printf("\n empno    name    sal    doj \n");
	printf("%-6d%-10s%6.2f\t%d-%d-%d", e->empno, e->name, e->sal, e->doj.dd, e->doj.mm, e->doj.yy);
	return;
}
