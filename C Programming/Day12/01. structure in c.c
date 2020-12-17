#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)  // structure member allignment as 1 byte
// structure decl is logical entity it don't have memory
//slack bytes
struct emp
{
	// variable or members
	int empno;
	char name[10];
	float sal;
};// end of emp structure

int main(void)
{
	// struct emp is a user defined data type
	// e1 is variable(object) of user defined data type struct emp
	// size of e1= sum of size of all members of struct emp
	//struct emp e1={1,"Rahul", 10000};
	//struct emp e1;
	struct emp e1={1};
	//int no1; // int is a data type and no1 is variable of int data type
	// no1 will take 4 bytes
	struct emp *ptr=&e1;

	printf("\n size of ptr=%d", sizeof(ptr));

	printf("\n Enter emp no ::");
	scanf("%d", &e1.empno);

	printf("\n Enter emp name ::");
	scanf("%s", e1.name);

	printf("\n Enter emp sal ::");
	scanf("%f", &e1.sal);


	printf("\n Emp info :: using structure variable e1\n");
	printf("\n empno    name    sal\n");
	printf("%-6d%-10s%6.2f using dot operator", e1.empno, e1.name, e1.sal);
	printf("\n%-6d%-10s%6.2f using arrow operator", (&e1)->empno, (&e1)->name, (&e1)->sal);

	printf("\n size of struct emp =%d", sizeof(struct emp));


	printf("\n size of e1=%d", sizeof(e1));

	printf("\n Emp info :: using pointer ptr\n");
	printf("\n Empno    Name    Sal\n");
	printf("\n%-6d%-10s%-6.2f using arrow operator ", ptr->empno, ptr->name, ptr->sal);
	printf("\n%-6d%-10s%-6.2f using dot operator", (*ptr).empno, (*ptr).name, (*ptr).sal);

	printf("\n &e1=%u &e1+1= %u", &e1, &e1+1);
	printf("\n ptr=%u ptr+1= %u", ptr, ptr+1);

	return EXIT_SUCCESS;
}

