#include <stdio.h>
#include <stdlib.h>
#define SIZE 7
int main(void)
{
	//int arr[ 5 ];
	int arr[ SIZE ]={1,2}, index;
	//int arr[]={11,12,13,14,15}, index;
	printf("\n Enter elements of array :: \n");
	for(index=0; index<SIZE; index++)
	{
		printf("\n arr[%d] :: ", index);
		scanf("%d", &arr[index]);
	}

	printf("\n elements of array \n");
	for(index=0; index<SIZE; index++)
	{
		printf("\n arr[%d] %-16d [%u]", index, arr[index], &arr[index]);
	}

	printf("\n &arr[0] =%u &arr=%u arr=%u", &arr[0], &arr, arr);
	printf("\n &arr[0]+1 =%u &arr+1=%u arr+1=%u", &arr[0]+1, &arr+1, arr+1);

	//arr++; lvalue req
	//++arr;
	//--arr;
	//arr--;

	printf("\n *arr=%d", *arr);
	printf("\n %d %d %d", ++arr[0], ++arr[0], ++arr[0]); //cdecl
	                     //    14        13          12           //right left

	printf("\n\n\n");
	return EXIT_SUCCESS;
}
