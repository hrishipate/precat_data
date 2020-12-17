#include <stdio.h>
#define SIZE 5
//void ReadArray(int a[SIZE], int size);
void ReadArray(int a[], int size);
void PrintArray(const int *a, int size);
void SelectionSortAsc(int a[], int size);
int BinarySearch(const int a[], int size , int key);
int main(void)
{
	int arr[SIZE], find, ans;

	printf("\n enter elements of array :: ");
	ReadArray(arr, SIZE);
	printf("\n Elements of array before sort :: ");
	PrintArray(arr, SIZE);

	SelectionSortAsc(arr, SIZE);

	printf("\n Elements of array after sort :: ");
	PrintArray(arr, SIZE);

	printf("\n Enter element to search :: ");
	scanf("%d", &find);

	ans=BinarySearch(arr,SIZE, find);
	if(ans==-1)
		printf("\n %d is not found in array", find);
	else
		printf("\n %d is found in array at %d position ", find, ans);

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
	int index;
	for(index=0; index<size; index++)
	{
		printf("\n a[%d] %-10d [%u]", index, a[index], &a[index]);
	}
	return;
}
void SelectionSortAsc(int a[], int size)
{
	int i, j, temp;

	for(i=0; i<size; i++) // outer loop for selection
	{
		for(j=i+1; j<size; j++) // loop for selection
		{
			printf("\n a[%d] %d  a[%d]%d \n",i, a[i], j, a[j] );
			if(a[i]>a[j]) //asc
			//if(a[i]<a[j])//desc
			{

				//way 1 swap
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;



			}
		}
		if(i<size-1)
			printf("\n pass %d\n", i+1);
	}
	return;
}
int BinarySearch(const int a[], int size , int key)
{
	int left=0, right=size-1, mid;

	while(left <= right)
	{
		mid = (left+right) / 2;
		if(key == a[mid])
			return mid; // element found at index "mid"
		if(key <a[mid])
			right = mid - 1;
		else
			left = mid + 1;

	}
	return -1;
}
