#include <stdio.h>
#include <stdlib.h>
int** CreateMatrix(int row, int col);
void ReadMatrix(int **mat, int row, int col);
void PrintMatrix(int **mat, int row, int col);
void FreeMatrix(int **mat, int row);

int main(void)
{
	int **ptr=NULL, rows, cols, r,c;

	printf("\n How Many Rows You Want :: ");
	scanf("%d", &rows);
	printf("\n How Many Cols You Want :: ");
	scanf("%d", &cols);

	ptr= CreateMatrix(rows, cols);
	// allocate memory for matrix

	printf("\n Enter Elements of matrix ::\n ");
	ReadMatrix(ptr, rows, cols);

	printf("\n Elements of matrix :: \n");
	PrintMatrix(ptr, rows, cols);

	//free memory for matrix
	FreeMatrix(ptr, rows);

	return EXIT_SUCCESS;
}
int** CreateMatrix(int row, int col)
{
	int r, c;
	int **ptr= (int**)malloc(sizeof(int*)*row);
	for(r=0; r<row; r++)
	{
		ptr[r]= malloc(sizeof(int)*col);
	}
    return ptr;
}
void ReadMatrix(int **mat, int row, int col)
{
	int r,c;
	for(r=0; r<row; r++)
	{
		for(c=0; c<col ; c++)
		{
			printf("mat[%d][%d]",r,c);
			//scanf("%d", &mat[r][c]);
			scanf("%d", (*(mat+r)+c));
		}
	}
	return;
}
void PrintMatrix(int **mat, int row, int col)
{
	int r,c;
	printf("\n &mat=%u mat=%u\n", &mat, mat);
	for(r=0; r<row; r++)
	{
		printf("\n &mat[%d] [%u] mat[%d] [%u] \n ", r, &mat[r],r, mat[r]);
		for(c=0; c<col; c++)
		{
			//printf("\t\t%d [%u]", mat[r][c], &mat[r][c]);
			printf("\t\t%d [%u]", *(*(mat+r)+c),  (*(mat+r)+c));
		}
		printf("\n");
	}
	return;
}
void FreeMatrix(int **mat, int row)
{
	int r;
	for(r=0; r<row; r++)
	{
		free(mat[r]);
		mat[r]=NULL;
	}
	free(mat);
	mat=NULL;
	printf("\n memory is free");
	return;
}
