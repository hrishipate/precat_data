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

	printf("\n names are :: before sort \n ");
	for(index=0; index<NO; index++)
	{
		printf("\n names[%d] %-10s [%u]", index, names[index], &names[index]);
	}

	for(i=0; i<NO; i++)
	{
		for(j=i+1; j<NO; j++)
		{
			printf("\n names[%d]%s names[%d]%s ", i, names[i], j, names[j]);
			//if(strcmp(names[i], names[j])>0) //asc
			if(strcmp(names[i], names[j])<0) //desc
			{
				strcpy(temp, names[i]);
				strcpy(names[i],names[j]);
				strcpy(names[j],temp);
			}
		}
		if(i+1<NO)
			printf("\n pass %d", i);
	}

	printf("\n names are :: after sort \n ");
	for(index=0; index<NO; index++)
	{
		printf("\n names[%d] %-10s [%u]", index, names[index], &names[index]);
	}


	printf("\n size of names =%d", sizeof(names)); // 5(rows)*10(cols)*1(sizeof char)
	return EXIT_SUCCESS;
}
