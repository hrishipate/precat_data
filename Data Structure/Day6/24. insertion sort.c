#include <stdio.h>
#include <stdlib.h>
#define SIZE 8
void ReadArray(int a[], int size);
void PrintArray(const int *a, int size);
void InsertionSort(int arr[], int size);
int main(void)
{
	int arr[SIZE];

	printf("\n enter elements of array :: ");
	ReadArray(arr, SIZE);

	printf("\n Elements of array  before sort asc :: \n");
	PrintArray(arr, SIZE);

	InsertionSort(arr, SIZE);
	printf("\n Elements of array after sort asc :: \n");
	PrintArray(arr, SIZE);


	printf("\n\n\n");

	return 0;
}
void ReadArray(int a[], int size)
{
	int index;
	for(index=0;index<size; ++index)
	{
		printf("\n arr[%d]", index);
		scanf("%d", &a[index]);
	}
	return;
}
void PrintArray(const int *a, int size)
{
	printf("\n================================\n");
	int index;
	for(index=0; index<size; index++)
	{
		printf("\n a[%d] %-10d [%u]", index, a[index], &a[index]);
	}
	printf("\n================================\n");
	return;
}
void InsertionSort(int arr[], int size)
{
	int i;
	for(  i = 1 ; i < size ; i++ )
	{
		int j = i - 1;
		int key = arr[i];

		PrintArray(arr,size);

		while( j >= 0 && key >= arr[j] ) //dec
		//while( j >= 0 && key <= arr[j] )//asc
		{
			//shift ele towards its right side
			arr[j+1] = arr[j];
			j--;
		}

		//insert key into an array
		arr[j+1] = key;
		printf("\n key =%d j=%d", key, j);
	}
}
