#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
//void ReadArray (int a[SIZE], int size);
void ReadArray (int a[ ], int size);
void PrintArray(int *a, int size);
//void PrintArray(int a[SIZE], int size);
int SeqSearch(int a[], int size, int key);
int* LinearSearch(int a[], int size, int key);
int main(void)
{
	int arr[ SIZE ], find, ans, *ptr=NULL;

	printf("\n Enter elements of array :: \n");
	ReadArray(arr,SIZE);

	printf("\n elements of array \n");
	PrintArray(arr,SIZE);

	printf("\n enter element to search :: ");
	scanf("%d", &find);

	ans = SeqSearch(arr, SIZE, find);
	if(ans==-1)
		printf("\n%d is not found in array ", find);
	else
		printf("\n%d is found in array at %d position  ", find, ans);

	ptr = LinearSearch(arr, SIZE, find);
	if(ptr==NULL)
		printf("\n%d is not found in array ", find);
	else
		printf("\n%d is found in array at %d position [%u-%u] ", find, ptr-arr, ptr, arr);


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
int SeqSearch(int a[], int size, int key)
{
	int index;
	for(index=0; index<size; index++)
	{
		if(a[index]==key)
			return index; // return index if found
	}
	return -1; // if not found
}
int* LinearSearch(int a[], int size, int key)
{
	int index;
	for(index=0; index<size; index++)
	{
		if(a[index]==key)
			return &a[index]; // return  address if found
	}
	return NULL; // if not found
}
