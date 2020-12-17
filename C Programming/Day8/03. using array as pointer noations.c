#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int main(void)
{
	//int arr[ 5 ];
	int arr[ SIZE ]={1,2}, index;

	//int arr[]={11,12,13,14,15}, index;
	printf("\n Enter elements of array :: \n");
	for(index=0; index<SIZE; index++)
	{
		printf("\n arr[%d] :: ", index);
		//scanf("%d", &arr[index]); // array notation
		 //scanf("%d", &index[arr]);
		//scanf("%d", (arr+index)); // pointer notation
		scanf("%d", (index+arr));

	}

	printf("\n elements of array \n");
	for(index=0; index<SIZE; index++)
	{
		// array notation
		//printf("\n arr[%d] \t %-16d [%u]", index, arr[index], &arr[index]);
		//printf("\n [%d]arr \t %-16d [%u]", index, index[arr], &index[arr]);
	   // pointer notation
		//printf("\n *(arr+%d) \t %-16d [%u]", index, *(arr+index),(arr+index));
		printf("\n *(%d+arr) \t %-16d [%u]", index, *(index+arr),(index+arr));
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
