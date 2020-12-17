#include <stdio.h>
#include <stdlib.h>
#define ROW 2
#define COL 2
//void ReadMatrix (int m[ROW][COL], int row, int col);
void ReadMatrix (int m[  ][COL], int row, int col);
void PrintMatrix(int m[  ][COL], int row, int col);
void MatrixAddition(int m1[][COL], int m2[][COL], int res[][COL], int row, int col);
//void PrintMatrix(int m[ROW][COL], int row, int col);

int main(void)
{
	int mat1[ROW][COL],mat2[ROW][COL], ans[ROW][COL]={0};

	printf("\n Enter elements of matrix1 :: \n");
	ReadMatrix(mat1,ROW,COL);

	printf("\n Elements of matrix1 \n");
	PrintMatrix(mat1, ROW,COL);


	printf("\n Enter elements of matrix2 :: \n");
	ReadMatrix(mat2,ROW,COL);

	printf("\n Elements of matrix2 \n");
	PrintMatrix(mat2, ROW,COL);

	MatrixAddition(mat1, mat2, ans, ROW, COL);
	printf("\n Addition of matrix :: \n");
	PrintMatrix(ans, ROW,COL);

	return EXIT_SUCCESS;
}
void MatrixAddition(int m1[][COL], int m2[][COL], int res[][COL], int row, int col)
{
	int r,c;
	for(r=0; r<row; r++)
	{
		for(c=0; c<col; c++)
		{
			//res[r][c]= m1[r][c] + m2[r][c];
			*(*(res+r)+c) = *(*(m1+r)+c)+ *(*(m2+r)+c);
		}
	}
	return;
}
void ReadMatrix (int m[  ][COL], int row, int col)
{
	int r,c;
	for(r=0; r<row; r++)
	{
		for(c=0; c<col; c++)
		{
			printf("\n m[%d][%d]::", r, c);
			//scanf("%d", &m[r][c]);
			scanf("%d", (*(m+r)+c));
		}
	}
	return;
}
void PrintMatrix(int m[  ][COL], int row, int col)
{
	int r,c;
	for(r=0; r<row; r++)
	{
		for(c=0; c<col; c++)
		{
			//printf("\t %d [%u]", m[r][c], &m[r][c]);
			printf("%10d [%u]", *(*(m+r)+c), (*(m+r)+c));
		}
		printf("\n");
	}
	return;
}
// arr[index] == *(arr+index)
// mat2[r][c] == *(*(mat2+r)+c)
            //== *(*(mat2+r)+c)
//mat[i][j][k]== *(mat+i)
           // == *(*(mat+i)+j)
           // == *(*(*(mat+i)+j)+k)
