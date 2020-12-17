#include <stdio.h>
void swap(int n1, int n2);
int main(void)
{
	int no1=10, no2=20;
	printf("\n before swap in main no1=%d [%u] no2=%d[%u]", no1, &no1, no2, &no2);
	swap(no1,no2); // call by value
	// no1, no2 actual arguments
	printf("\n after swap in main  no1=%d [%u] no2=%d[%u]", no1, &no1, no2, &no2);
	return 0;
} //n1 n2 are formal argument
void swap(int n1, int n2)
{
	int temp=0;
	printf("\n before swap in swap n1=%d [%u] n2=%d[%u]", n1, &n1, n2, &n2);
	temp=n1;  n1=n2; n2=temp;
	printf("\n after swap in swap n1=%d [%u] n2=%d[%u]", n1, &n1, n2, &n2);
	return;
}
