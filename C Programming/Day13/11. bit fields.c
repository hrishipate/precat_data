#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)
struct emp
{
	int empno;
	char name[10];
	float sal;
	// bit fields
	//unsigned comp:7;
	signed comp:3;
	unsigned laptop:3;
	unsigned moible:6;
};

int main(void)
{
	struct emp e1={1, "abc", 12000, 0,1,1};
	int no;
	printf("\n size of e1=%d", sizeof(e1));

	printf("\n %d %s %.2f %d %d %d", e1.empno, e1.name, e1.sal, e1.comp, e1.moible, e1.laptop);
	e1.comp==1 ? printf("\n i have comp ") : printf("\n i don't have comp ");

	printf("\n Enter 1 for having comp or 0 for not having comp \n ");
	//scanf("%d", &e1.comp); //error
	printf("\n enter your choice :: ");
	scanf("%d", &no);

	e1.comp= no;
	e1.comp==1 ? printf("\n i have comp ") : printf("\n i don't have comp ");
	printf("\n e.comp=%d", e1.comp);


	for(no=1; no<=100; no++)
	{
		e1.comp=no;
		e1.laptop=no;
		printf("\n no=%-5d e.comp=%-5d e.laptop=%-5d", no, e1.comp, e1.laptop);
		if(no%8==0)
			getchar();
	}

	return EXIT_SUCCESS;
}
