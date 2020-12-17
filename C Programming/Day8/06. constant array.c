#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	const int arr[]={11,22,33};
	int *ptr=arr;

	//arr[0]=100; // error as arr is constant

	printf("\n arr[0]=%d *ptr=%d", arr[0], *ptr);
	*ptr=100; // allowed as we can modify value of constant using pointer
	printf("\n arr[0]=%d *ptr=%d", arr[0], *ptr);

	return EXIT_SUCCESS;
}
