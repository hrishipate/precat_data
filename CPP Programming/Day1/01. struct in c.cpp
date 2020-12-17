#include<stdio.h>
#pragma pack(1)
struct emp
{
	// variable or data members or fields(java)
	int empno;
	char name[10];
	float sal;

}; // end of structure emp
void AcceptEmpInfo(struct emp *e); // e is pointer - 4 or 8
//void PrintEmpInfo(struct emp e); // e is variable - 18
void PrintEmpInfo(const struct emp *e);  //e is pointer - 4 or 8
void SetSalary(struct emp *e, float sal);
float GetSalary(const struct emp *e);
int main()
{
	float newsal;
	struct emp e1; // 4+10+4= 18 +2=20
	//struct emp e1={100};

	printf("\n Enter Emp info ::\n");
	AcceptEmpInfo(&e1);

	printf("\n Emp Info :: \n");
	PrintEmpInfo(&e1);

	printf("\n Enter new salary :: ");
	scanf("%f", &newsal);

	SetSalary(&e1, newsal);

	printf("\n Updated salary :: \n");
	PrintEmpInfo(&e1);

	newsal= GetSalary(&e1);
	printf("\n updated salary =%f", newsal);

	printf("\n updated salary =%f", GetSalary(&e1));



	return 0;
}
void AcceptEmpInfo(struct emp *e)
{
	printf("\n Enter Emp no :: ");
	scanf("%d", &e->empno);
	printf("\n Enter Emp name :: ");
	scanf("%s", e->name);
	printf("\n Enter Emp sal :: ");
	scanf("%f", &e->sal);
	return ;
}
void PrintEmpInfo(const struct emp *e)
{
	//e->sal=-10000; // not allowed as e is const variable
	printf("\n EmpNo name Salary \n");
	printf("%-6d%-10s%-6.2f", e->empno,e->name, e->sal);
	return;

}
void SetSalary(struct emp *e, float sal)
{
	e->sal=sal;
}
float GetSalary(const struct emp *e)
{
	return e->sal;
}
