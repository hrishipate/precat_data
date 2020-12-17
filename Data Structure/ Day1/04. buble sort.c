#include <stdio.h>
#define SIZE 5
#define SWAP(a,b, datatype) {datatype temp; temp=a; a=b; b=temp;}

void ReadArray(int a[], int size);
void PrintArray(const int *a, int size);
void BubbleSort(int a[], int size);
void swap(int *n1, int *n2);
int main(void)
{
	int arr[SIZE], find, ans;
    // 2. decl fun pointer

	printf("\n enter elements of array :: ");
	ReadArray(arr, SIZE);

	printf("\n Elements of array  before sort asc :: \n");
	PrintArray(arr, SIZE);

	BubbleSort(arr, SIZE);
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
	int index;
	for(index=0; index<size; index++)
	{
		printf("\n a[%d] %-10d [%u]", index, a[index], &a[index]);
	}
	return;
}
void swap(int *n1, int *n2)
{
	int temp;
	temp=*n1;
	*n1=*n2;
	*n2=temp;
}
void BubbleSort(int a[], int size)
{
	int i, j, temp;
	for(i=0; i<size; i++)
	{
		for(j=0; j<size-i-1; j++)
		{
			printf("\n==============================================\n");
			printf("\n a[%d] %d a[%d] %d ", j, a[j], j+1, a[j+1]);
			//if(a[i]>a[j]) //asc selection
			//if(a[j]>a[j+1]) //asc buble sort
			if(a[j]<a[j+1]) //desc buble sort
			{
				//way1 swap using temp variables
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;

			}
		}
		if(i<size-1)
			printf("\n pass %d", i+1);
		printf("\n==============================================\n");

	}

	return;
}
