#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int row, col, hundred;

	for(hundred=1; hundred<=10; hundred++)
	{
		for( row=1; row<=10; row++) // outer loop
		{
			for(col=1;col<=10; col++) // inner loop
			{
				printf("%5d",(hundred-1)*100 + row + (col-1)*10);
			}
		//getchar();
			printf("\n");
		}
		printf("\n===============================================\n");
	}
	return EXIT_SUCCESS;
}
