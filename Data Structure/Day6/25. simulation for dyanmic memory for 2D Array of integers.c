#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int **ptr=NULL, rows, cols, r,c;

	printf("\n How Many Rows You Want :: ");
	scanf("%d", &rows);
	printf("\n How Many Cols You Want :: ");
	scanf("%d", &cols);

	// allocate memory for matrix
	ptr= (int**)malloc(sizeof(int*)*rows);
	for(r=0; r<rows; r++)
	{
		ptr[r]= malloc(sizeof(int)*cols);
	}

	printf("\n Enter elements of matrix :: ");
	for(r=0; r<rows; r++)
	{
		for(c=0; c<cols ; c++)
		{
			printf("ptr[%d][%d]",r,c);
			scanf("%d", &ptr[r][c]);
		}
	}

	printf("\n Elements of matrix :: \n");
	printf("\n &ptr=%u ptr=%u", &ptr, ptr);
	for(r=0; r<rows; r++)
	{
		printf("\n &ptr[%d] [%u] ptr[%d] [%u] \n ", r, &ptr[r],r, ptr[r]);
		for(c=0; c<cols; c++)
		{
			printf("\t%d [%u]", ptr[r][c], &ptr[r][c]);
		}
		printf("\n");
	}

	//free memory for matrix
	for(r=0; r<rows; r++)
	{
		free(ptr[r]);
		ptr[r]=NULL;
	}
	free(ptr);
	ptr=NULL;
	printf("\n memory is free");

	return EXIT_SUCCESS;
}
