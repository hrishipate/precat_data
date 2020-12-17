#include<stdio.h>
int main()
{
 	 int n1=2, n2=4, i;
 	 int sum(int no1, int no2);
	 int (*funptr)(int num1, int num2);
     	/* funptr is pointer to function which recives
	    2 parameters of integer type & return integer */

	funptr=sum;
	printf("\n calling using function = %d ", sum(n1,n2));
 	printf("\n new way of calling using function pointer = %d ", (*funptr)(n1,n2));
	printf("\n old way of calling using function pointer ans = %d ", funptr(n1,n2));

	return 0;
}
int sum(int no1, int no2)
{
	return no1+no2;
}


