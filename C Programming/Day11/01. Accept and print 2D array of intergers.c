
#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 3

int main(void)
{
	//int mat1[][]={{1,2},{3,4}, {5,6}}; //error
	//int mat2[ROW][COL]={{1,2},{3,4}, {5,6}}; //allowed
	int mat2[ROW][COL]={{1,2,3},{4}, {5,6}}; //allowed
	//int mat3[   ][COL]={{1,2},{3,4}, {5,6}}; //allowed
	//int mat4[ROW][   ]={{1,2},{3,4}, {5,6}}; //not allowed
	int r,c ;

	printf("\n Enter elements of matrix2 :: \n");
	for(r=0; r<ROW; r++)
	{
		for(c=0; c<COL; c++)
		{
			printf("\n mat2[%d][%d]", r, c);
			//scanf("%d", &mat2[r][c]);
			scanf("%d", (*(mat2+r)+c));
		}
	}

	printf("\n elements of matrix2 \n");
	for(r=0; r<ROW; r++)
	{
		for(c=0; c<COL; c++)
		{
			//printf("\t %d [%u]", mat2[r][c], &mat2[r][c]);
			printf("%10d [%u]", *(*(mat2+r)+c), (*(mat2+r)+c));
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
// arr[index] == *(arr+index)
// mat2[r][c] == *(*(mat2+r)+c)
            //== *(*(mat2+r)+c)
//mat[i][j][k]== *(mat+i)
           // == *(*(mat+i)+j)
           // == *(*(*(mat+i)+j)+k)
