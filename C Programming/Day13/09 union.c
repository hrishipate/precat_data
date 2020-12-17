#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)
union result
{
	float per;
	char grade[4];
};
struct student
{
	int rollno;
	char name[10];
	int std;
	union result res;
};
int main(void)
{
	struct student s1;
	printf("\n size of s1=%d", sizeof(s1));

	printf("\n Enter Roll No :: ");
	scanf("%d", &s1.rollno);

	printf("\n Enter student name :: ");
	scanf("%s", s1.name);

	printf("\n Enter std :: ");
	scanf("%d", &s1.std);

	if(s1.std>=1 && s1.std<=4)
	{
		printf("\n Enter grade :: ");
		scanf("%s", s1.res.grade);
	}
	else if(s1.std>=5 && s1.std<=10)
	{
		printf("\n Enter per :: ");
		scanf("%f", &s1.res.per);
	}

	printf("\n Rollno =%d", s1.rollno);
	printf("\n Name   =%s", s1.name);
	printf("\n std    =%d", s1.std);
	s1.std>=1 && s1.std<=4 ? printf("\ngrade    =%s", s1.res.grade) : printf("\n per    =%.2f", s1.res.per);

	return EXIT_SUCCESS;
}
