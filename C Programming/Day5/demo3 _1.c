#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, k, rows;

	printf("\n how many rows u want :: ");
	scanf("%d", &rows);


	for(i=rows; i>=1; i--)
	{
		for(j=rows; j>=i; j--)
		{
			printf(" @ "); // print spaces(#)
		}
		for(k=i; k>=1; k--)
		{
			printf("%3d", k); // print no to 1
		}

		for(k=1; k<=i; k++)
		{
			printf("%3d", k); // print 1 to no
		}

		printf("\n"); // next line
	} // no rows
	return EXIT_SUCCESS;
}
