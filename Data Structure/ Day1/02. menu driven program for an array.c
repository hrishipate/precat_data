#include <stdio.h>
#include <stdlib.h>
#define SIZE 6

void Read_Array(int a[], int size);
void Print_Array(const int *a, int size);
void PrintRev(const int a[], int size);
int ArraySum(const int *a,int size);
int ArrayMax(const int *a,int size);
void ArrayMaxMin(const int *a,int size, int *pMax,int *pMin);
int LinearSearch(const int *a, int size, int key);
int* SeqSearch(const int *a, int size, int key);
void ArrayRev(int *a, int size);
int MenuChoice();
void swap(int *n1, int *n2);
int main(void)
{
	int arr[SIZE], choice, ans=0, ans1=0, find, *ptr=NULL;

	do
	{
		choice= MenuChoice();
		switch(choice)
		{
			case 1: // accept (read) array
					printf("\n enter elements of array :: \n");
					Read_Array(arr,SIZE );
					break;
			case 2: //print array elements
					printf("\n elements of array are :: ");
					Print_Array(arr, SIZE);
					break;
			case 3:// print rev
					printf("\n elements of array are :: ");
					Print_Array(arr, SIZE);
					printf("\n print  elements of array in rev :: ");
					PrintRev(arr, SIZE);
					break;
			case 4: // array sum
					printf("\n elements of array are :: \n");
					Print_Array(arr, SIZE);

					ans= ArraySum(arr, SIZE);
					printf("\n sum of array=%d", ans);
					break;
			case 5: // array Max
					printf("\n elements of array are :: \n");
					Print_Array(arr, SIZE);
					ans= ArrayMax(arr, SIZE);
					printf("\n Max of array=%d", ans);
					break;
			case 6: // array Max Min
					printf("\n elements of array are :: \n");
					Print_Array(arr, SIZE);
					ArrayMaxMin(arr, SIZE, &ans, &ans1);
					printf("\n Max of array=%d", ans);
					printf("\n Min of array=%d", ans1);
					break;
			case 7: // linear search
					printf("\n Enter element to search :: ");
					scanf("%d", &find);
					ans= LinearSearch(arr, SIZE,find);
					if(ans==-1)
						printf("\n %d is not found in array", find);
					else
						printf("\n %d is found in array ar %d location", find, ans);

					break;
			case 8: // seq search
					printf("\n Enter element to search :: ");
					scanf("%d", &find);

					ptr= SeqSearch(arr, SIZE,find);
					if(ptr==NULL)
						printf("\n %d is not found in array", find);
					else
						printf("\n %d is found in array ar %d location", find, ptr-arr);
					break;
			case 9: // rev array
					printf("\n elements of array before rev :: ");
					Print_Array(arr, SIZE);
					ArrayRev(arr, SIZE);
					printf("\n elements of array after rev :: ");
					Print_Array(arr, SIZE);
					break;



			case 0: //exit
					return 0; // exit(0);
		}

		printf("\n Enter 1 to continue or 0 to exit");
		scanf("%d", &choice);

	}while(choice!=0);


	return EXIT_SUCCESS;
}
int MenuChoice()
{
	int choice;
	printf("\n 1. Read Array \n 2. Print Array \n 3. PrintRev \n 4. Array Sum \n 0. Exit");
	printf("\n 5. Max Array \n 6. Max Min Array \n 7. Linear search (return position) \n 8. Seq Search(return address) \n 9. Rev array  \n 0. Exit");
	printf("\n Enter Your choice :: ");
	scanf("%d", &choice);
	return choice;
}
int ArraySum(const int *a,int size)
{
	int sum, index;
	for(index=sum=0; index<size; ++index)
	{
		sum+=*(a+index); //sum= sum+a[index];
	}
	return sum;
}
void Read_Array(int a[], int size)
{
	int index;
	for(index=0; index<size; index++)
	{
		printf("\n a[%d]", index);
		//scanf("%d",&a[index] ); // array notation
		scanf("%d",(a+index) ); // pointer notation
	}
	return;
}
void Print_Array(const int *a, int size)
{
	int index;
	for(index=0; index<size; ++index)
	{
		// array notation
		//printf("\n a[%d] %d [%u]", index, a[index], &a[index]);
		// pointer notation
		printf("\n *(a+%d) %d [%u]",index, *(a+index),(a+index));
	}
	return;
}
void PrintRev(const int a[], int size)
{
	int index;
	for(index=size-1;index>=0 ; index--)
	{
		printf("\n a[%d] %d [%u]", index, a[index], &a[index]);
	}
	return;
}
int ArrayMax(const int *a,int size)
{
	int index, max;
	for(index=1, max=*a; index<size ; index++)
	{
		if(max<*(a+index)) // if (max<a[index])
			max= *(a+index); // max= a[index];
	}
	return max;
}
void ArrayMaxMin(const int *a,int size, int *pMax,int *pMin)
{
	int index;
	for(index=1, *pMin = *pMax=*a; index<size ; index++)
	{
		if(*pMax<*(a+index)) // if (*pMax<a[index])
			*pMax= *(a+index); // max= a[index];
		if(*pMin>*(a+index)) // if (*pMin>a[index])
				*pMin= *(a+index); // min= a[index];

	}
	return;

}
int LinearSearch(const int *a, int size, int key)
{
	int index;
	for(index=0; index<size; index++)
	{
		if(*(a+index)== key)
			return index;
	}
	return -1;
}
int* SeqSearch(const int *a, int size, int key)
{
	int index;
	for(index=0; index<size; index++)
	{
		if(*(a+index)== key)
			return (a+index);
	}
	return NULL;
}
void ArrayRev(int *a, int size)
{
	int i, j, temp;
	//for(i=0, j=size-1; i< size/2 ; i++ , j--)
	//for(i=0, j=size-1; i< j ; i++ , j--)
	for(i=0, j=size-1; j>i ; i++ , j--)
	{
		//way1 swap
		/*temp   = *(a+i);
		*(a+i) = *(a+j);
		*(a+j) = temp; */

		//way2 swap using function
		swap(&a[i], &a[j]);	//swap((a+i),(a+j));

	}
	return;
}
void swap(int *n1, int *n2)
{
	*n1 = *n1 + *n2;
	*n2 = *n1 - *n2;
	*n1 = *n1 - *n2;
	return;
}
