#include <stdio.h>
#include <stdlib.h>
int sumRec(int n);
int main(void)
{
	int a=5, ans=0;

	printf("\n Enter no :: ");
	scanf("%d", & a);
	ans= sumRec(a);
	printf("\n sum of %d = %d", a, ans);

	return EXIT_SUCCESS;
}
int sumRec(int n)
{
	int add=0;
	getchar();
	printf("\n n=%d [%u]", n, &n);

	if(n==1) // TC
	{
		add=1;
		printf("\n n=%d [%u] add=%d [%u]", n , &n, add, &add);
		return 1; // return add;
	}
	else
		//add= n+ sumRec(--n); // rf
		  add= n + sumRec(n--); // rf
		//add= n+ sumRec(n-1); // rf
		printf("\n n=%d [%u] add=%d [%u]", n , &n, add, &add);
	return add;
}
// <--- return 0 <---5+10=15         4 +6=10          3+3=6            2+1=3           1
// OS---> main() ----> sumRec(5)---> sumRec(4)----->sumRec(3) --->>> sumRec(2) -- sumRec(1)
