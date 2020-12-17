//Types of array
//1. 1-D ARRAY
//2. M-D ARRAY
    //a. 2-D Array
    //b. 3-D Array


#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 2
int main(void)
{
	int mat1[ROW][COL];
	int r,c;

	printf("\n Enter elements of matrix  ::");

	for(r=0; r<ROW; r++)
	{
		for(c=0; c<COL; c++)
		{
			printf("\n mat1[%d][%d] :: ",r,c);
			scanf("%d", &mat1[r][c]);
		}
	}

	printf("\n Elements of array :: \n");
	for(r=0; r<ROW; r++)
	{
		for(c=0; c<COL ;c++)
		{
			printf("%d [%u]\t", mat1[r][c], &mat1[r][c]);		
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}





