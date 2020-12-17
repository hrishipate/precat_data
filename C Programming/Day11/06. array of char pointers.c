#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NO 5
#define LEN 20
int main(void)
{
	char *arr[NO], name[LEN], *temp=NULL;
	int index,i,j;

	for(index=0; index<NO; index++)
	{
		printf("\n Enter Name [%d]::", index);
		scanf("%s", name);
		// allocate memory
		arr[index]= (char*)malloc((strlen(name)+1)*sizeof(char));
		// copy data
		strcpy(arr[index], name);
	}

	printf("\n names are :: \n");

	for(index=0; index<NO; index++)
	{
		printf("\n &arr[%d] %u arr[%d] %u arr[%d]%-10s *arr[%d] %c", index, &arr[index] , index, arr[index], index, arr[index], index, *arr[index]);
	}

	// memory freed
	for(index=0; index<NO; index++)
	{
		free(arr[index]);
		arr[index]=NULL;
	}
	printf("\n memory freed");
	return EXIT_SUCCESS;
}
