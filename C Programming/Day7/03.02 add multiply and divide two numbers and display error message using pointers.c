#include <stdio.h>
#include <stdlib.h>

void SumProdDiv(int n1, int n2, int *ps, int *pp, int *pd, int *pf);
int main(void)
{
	int no1=10, no2=0, sum=0, prod=0, div=0, flag=0;

	SumProdDiv(no1, no2, &sum , &prod, &div, &flag);
	printf("\n %d + %d =%d", no1, no2, sum);
	printf("\n %d * %d =%d", no1, no2, prod);
	if(flag==1)
		printf("\n can not divide by zero");
	else
		printf("\n %d / %d =%d", no1, no2, div);

	return EXIT_SUCCESS;
}
void SumProdDiv(int n1, int n2, int *ps, int *pp, int *pd, int *pf)
{
	*ps = n1 + n2;
	*pp = n1 * n2;
	if(n2==0)
		*pf=1;
	else
		*pd=  n1 / n2;
	return;
}
