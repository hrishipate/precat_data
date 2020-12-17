#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NO 5
#define LEN 10


int main(void)
{
	//char name[LEN]; to accept one name
	char names[NO][LEN], temp[LEN]; // to accept 5 students

	int index, i, j;

	printf("\n Enter students names ::");
	for(index=0; index<NO; index++)
	{
		printf("\n enter name [%d]", index);
		scanf("%s", &names[index]);
	}

	printf("\n names are ::  \n ");
	for(index=0; index<NO; index++)
	{
		printf("\n names[%d] %-10s [%u]", index, names[index], &names[index]);
	}



	printf("\n size of names =%d", sizeof(names)); // 5(rows)*10(cols)*1(sizeof char)
	return EXIT_SUCCESS;
}
