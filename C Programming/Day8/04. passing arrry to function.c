#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
//void ReadArray (int a[SIZE], int size);
void ReadArray (int a[ ], int size);
void PrintArray(int *a, int size);
//void PrintArray(int a[SIZE], int size);
int main(void)
{
	int arr[ SIZE ] , arr1[ 7 ];

	printf("\n Enter elements of array :: \n");
	ReadArray(arr,SIZE);

	printf("\n elements of array \n");
	PrintArray(arr,SIZE);

	printf("\n Enter elements of array1 :: \n");
	ReadArray(arr1,7);

	printf("\n elements of array1 \n");
	PrintArray(arr1,7);

	//arr++; lvalue req
	//++arr;
	//--arr;
	//arr--;
	printf("\n size of arr=%d", sizeof(arr)); //5*4=20
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
