#include <stdio.h>
int no1=10, no2=20;
void swap();
int main(void)
{
	printf("\n before swap in main no1=%d [%u] no2=%d[%u]", no1, &no1, no2, &no2);
	swap(); // print ans correctly
	printf("\n after swap in main  no1=%d [%u] no2=%d[%u]", no1, &no1, no2, &no2);
	return 0;
} //n1 n2 are formal argument
void swap()
{
	int temp=0;
	printf("\n before swap in swap no1=%d [%u] no2=%d[%u]", no1, &no1, no2, &no2);
	temp=no1;  no1=no2; no2=temp;
	printf("\n after swap in swap no1=%d [%u] no2=%d[%u]", no1, &no1, no2, &no2);
	return;
}
