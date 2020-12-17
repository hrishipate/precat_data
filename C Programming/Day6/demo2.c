#include <stdio.h>
#include <stdlib.h>
int binary(int n);
int main(void)
{
	int no=33, ans;

	ans= binary(no);

	printf("\n ans=%d ", ans);



	return EXIT_SUCCESS;
}
int binary(int n)
{
	int ans=0;
	//getchar();
	//printf("\n n=%d", n);
	if(n==1)
	{
		ans=1;
		printf("\n n=%d [%u] ans=%d [%u] ", n, &n, ans, &ans);
		return 1;
	}
	else
	{
		//ans= binary(n/2)*10+ n%2;
		//ans= 10*binary(n/2)+ n%2;
		ans= n%2 + 10*binary(n/2);
		//getchar();
		printf("\n n=%d [%u] ans=%d [%u] ", n, &n, ans, &ans);
	}
	return ans;
}
