#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
void PrintArray(char *a, int size);
//void PrintArray(int a[SIZE], int size);

// step 2 for asc or desc sort
int asc(const void *p1, const void *p2);
int desc(const void *p1, const void *p2);
int main(void)
{
	char arr[ SIZE ]={'A','X','R','B','G'};

	// step 1 function pointer can store adress of asc/ desc

	int (*funptr)(const void *p1, const void *p2);


	printf("\n elements of array before sort \n");
	PrintArray(arr,SIZE);

	funptr=asc; //step4
	//SelectionSortAsc(arr, SIZE, funptr); //for asc sort
	qsort(arr,SIZE, sizeof(char), funptr);
	printf("\n elements of array  after sort asc \n");
	PrintArray(arr,SIZE);

	funptr=desc;//step4
	//SelectionSortAsc(arr, SIZE, funptr); //for desc sort
	printf("\n elements of array  after sort desc \n");
	qsort(arr,SIZE, sizeof(char), funptr);
	PrintArray(arr,SIZE);


	printf("\n\n\n");
	return EXIT_SUCCESS;
}
void PrintArray(char *a, int size)
{
	int index;
	for(index=0; index<size; index++)
	{
		// array notation
		//printf("\n a[%d] \t %-16c [%u]", index, a[index], &a[index]);
		//printf("\n [%d]a \t %-16c [%u]", index, index[a], &index[a]);
	   // pointer notation
		//printf("\n *(a+%d) \t %-16c [%u]", index, *(a+index),(a+index));
		printf("\n *(%d+a) \t %-16c [%u]", index, *(index+a),(index+a));
	}
	return;
}
int asc(const void *p1, const void *p2)
{
	char *ptr1=(char*)p1;
	char *ptr2=(char*)p2;
	return *ptr1-*ptr2;
}
int desc(const void *p1, const void *p2)
{
	char *ptr1=(char*)p1;
	char *ptr2=(char*)p2;
	return *ptr2-*ptr1;
}
