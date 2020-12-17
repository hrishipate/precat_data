
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int row, col;
	for( row=1; row<=10; row++) // outer loop
	{
		for(col=1;col<=10; col++) // inner loop
		{
			printf("\n row = %d col=%d", row, col);
			getchar();
		}
		getchar();
	}

	return EXIT_SUCCESS;
}
