#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int row , col , rows, counter=1;

	printf("\n enter How many rows u want :: ");
	scanf("%d", &rows);


	for(row=1; row<=rows; row++)
	{
		for(col=1; col<=row; col++)
		{
			//printf("%5d", row);
			//printf("%5d", col);
			//printf("%5c", row+64);
			//printf("%5c", col+64);
			//printf("%5c", row+96);
			//printf("%5c", col+96);

			/*if(row%2==0)
				printf("%5c", 64+row);
			else
				printf("%5c", 96+row);*/

			/*if(col%2==0)
				printf("%5c", 64+col);
			else
				printf("%5c", 96+col);*/

			//printf(" * ");
			printf("%4d", counter++);
		}
		printf("\n");// next line
	}

	return EXIT_SUCCESS;
}

