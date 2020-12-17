#include <stdio.h>
int main(void)
{

	int arr[ ]={11,22,33,44,55};


	/*arr++; lvalue req error
	++arr;
	--arr;
	arr--;*/

	printf("\n arr[0]=%d arr[0]=%d arr[0]=%d", ++arr[0],++arr[0],++arr[0] );
                                            //  14        13     //12
	 // due to calling convention cdecl  parameters push in right to left directions

	printf("\n\n arr[3]=%d arr[2]=%d arr[1]=%d", ++arr[3],++arr[2],++arr[1] );
	                                         // 45       34       23
	printf("\n\n\n");



	return 0;
}
