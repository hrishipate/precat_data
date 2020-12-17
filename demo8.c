#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
//void PrintArray(char *a, int size);
void PrintArray(int a[SIZE], int size);

// step 2 for asc or desc sort
int asc(const void *p1, const void *p2);
int desc(const void *p1, const void *p2);
int main(void)
{
	float arr[ SIZE ]={15.00,-16.0231,16.012,8.5432,9.0012};

	// step 1 function pointer can store adress of asc/ desc

	int (*funptr)(const void *p1, const void *p2);


	printf("\n elements of array before sort \n");
	PrintArray(arr,SIZE);

	funptr=asc; //step4
	//SelectionSortAsc(arr, SIZE, funptr); //for asc sort
	qsort(arr,SIZE, sizeof(float), funptr);
	printf("\n elements of array  after sort asc \n");
	PrintArray(arr,SIZE);

	funptr=desc;//step4
	//SelectionSortAsc(arr, SIZE, funptr); //for desc sort
	printf("\n elements of array  after sort desc \n");
	qsort(arr,SIZE, sizeof(float), funptr);
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
		//printf("\n *(%d+a) \t %-16c [%u]", index, *(index+a),(index+a));
		printf("\n *(%d+a) \t %-16f [%u]", index, *(index+a),(index+a));
	}
	return;
}
int asc(const void *p1, const void *p2)
{
	if(*(const float*)p1 < *(const float*)p2)
		return -1;
	return *(const float*)p1 > *(const float*)p2;
}
int desc(const void *p1, const void *p2)
{
	if(*(const float*)p1 > *(const float*)p2)
		return -1;
	return *(const float*)p1 < *(const float*)p2;
}
