#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int row, col;
	for( row=1; row<=10; row++) // outer loop
	{
		for(col=1;col<=10; col++) // inner loop
		{
			printf("%5d", row + (col-1)*10);
		}
		//getchar();
		printf("\n");
	}

	return EXIT_SUCCESS;
}
