#include<stdio.h>
int main( void)
{
	int n1=2, n2=4, i;

	int sum(int no1, int no2);
	int minus(int no1, int no2);
	int multi(int no1, int no2);

	int (*funptr[3])(int num1, int num2);

	/* funptr is array of 3 function pointers, where each pointer points
	   to a function which receives two parameters of interger types
	   and return  integer	*/
	funptr[0]=sum;
	funptr[1]=minus;
	funptr[2]=multi;

	for(i=0;i<3;i++)
    {
		//  printf("\n%d ", (*funptr[i])(n1,n2));
			printf("\n%d ", funptr[i](n1,n2));
    }
	return 0;
}
int sum(int no1, int no2)
{
    return no1+no2;
}
int minus(int no1, int no2)
{
	return no1-no2;
}
int multi(int no1, int no2)
{
	return no1*no2;
}
