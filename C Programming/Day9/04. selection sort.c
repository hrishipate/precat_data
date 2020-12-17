#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
#define SWAP(n1,n2, DataType) {DataType temp; temp=n1; n1=n2; n2=temp;}
//void ReadArray (int a[SIZE], int size);
void ReadArray (int a[ ], int size);
void PrintArray(int *a, int size);
//void PrintArray(int a[SIZE], int size);
void SelectionSortAsc(int a[], int size);
void swap(int *n1, int *n2);
int main(void)
{
	int arr[ SIZE ], find, ans, *ptr=NULL;

	printf("\n Enter elements of array :: \n");
	ReadArray(arr,SIZE);

	printf("\n elements of array before sort \n");
	PrintArray(arr,SIZE);


	SelectionSortAsc(arr, SIZE);
	printf("\n elements of array  after sort asc \n");
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
void SelectionSortAsc(int a[], int size)
{
	int i, j, temp;

	for (i=0; i<size; i++) // selection
	{
		for(j=i+1; j<size; j++) // compare
		{
			printf("\n a[%d] = %d a[%d] = %d ", i, a[i] , j, a[j]);
			if(a[i]>a[j]) // asc
			//if(a[i]<a[j]) // desc
			{
				//way 1 using temp
				/*temp = a[i];
				a[i] = a[j];
				a[j] = temp;*/

				//way2 using function
				//swap(&a[i], &a[j]);

				//way3 using macro
				SWAP(a[i],a[j], int);
			}
		}
		if(i<size-1)
			printf("\n pass[%d]\n", i+1);
	}
	return ;

}
void swap(int *n1, int *n2)
{
	int temp;
	temp=*n1; *n1=*n2; *n2=temp;

}
