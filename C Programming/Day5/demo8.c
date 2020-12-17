#include <stdio.h>
#include <stdlib.h>
int sum(int n);
int main(void)
{
	int a=5, ans=0;

	printf("\n Enter no :: ");
	scanf("%d", & a);
	ans= sum(a);
	printf("\n sum of %d = %d", a, ans);

	return EXIT_SUCCESS;
}
int sum(int n)
{
	int counter, add;
	for(counter=1, add=0; counter<=n; counter++)
		add+=counter;
	return add;
}
// <--- return 0 <----  return 15
// OS---> MAIN() ----> SUM(5)
