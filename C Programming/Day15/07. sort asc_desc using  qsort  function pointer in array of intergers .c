#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
//void ReadArray (int a[SIZE], int size);
void ReadArray (int a[ ], int size);
void PrintArray(int *a, int size);
//void PrintArray(int a[SIZE], int size);

// step 2 for asc or desc sort
int asc(const void *p1, const void *p2);
int desc(const void *p1, const void *p2);
int main(void)
{
	int arr[ SIZE ], find, ans, *ptr=NULL;

	// step 1 function pointer can store adress of asc/ desc

	int (*funptr)(const void *p1, const void *p2);

	printf("\n Enter elements of array :: \n");
	ReadArray(arr,SIZE);

	printf("\n elements of array before sort \n");
	PrintArray(arr,SIZE);

	funptr=asc; //step4
	//SelectionSortAsc(arr, SIZE, funptr); //for asc sort
	qsort(arr,SIZE, sizeof(int), funptr);
	printf("\n elements of array  after sort asc \n");
	PrintArray(arr,SIZE);

	funptr=desc;//step4
	//SelectionSortAsc(arr, SIZE, funptr); //for desc sort
	printf("\n elements of array  after sort desc \n");
	qsort(arr,SIZE, sizeof(int), funptr);
	PrintArray(arr,SIZE);


	printf("\n\n\n");
	return EXIT_SUCCESS;
}
void ReadArray (int a[ ], int size)
{
	int index;
	for(index=0; index<size; index++)
	{
		printf("\n a[%d] :: ", index);
		//scanf("%d", &a[index]); // array notation
		 //scanf("%d", &index[a]);
		//scanf("%d", (a+index)); // pointer notation
		scanf("%d", (index+a));
	}
	a++; // allowed as a is pointer
	printf("\n size of a=%d",sizeof(a) ); // 8 bytes or 4 bytes
	return;
}
void PrintArray(int *a, int size)
{
	int index;
	for(index=0; index<size; index++)
	{
		// array notation
		//printf("\n a[%d] \t %-16d [%u]", index, a[index], &a[index]);
		//printf("\n [%d]a \t %-16d [%u]", index, index[a], &index[a]);
	   // pointer notation
		//printf("\n *(a+%d) \t %-16d [%u]", index, *(a+index),(a+index));
		printf("\n *(%d+a) \t %-16d [%u]", index, *(index+a),(index+a));
	}
	return;
}

int asc(const void *p1, const void *p2)
{
	int *ptr1=(int*)p1;
	int *ptr2=(int*)p2;
	return *ptr1-*ptr2;
}
int desc(const void *p1, const void *p2)
{
	int *ptr1=(int*)p1;
	int *ptr2=(int*)p2;
	return *ptr2-*ptr1;
}
