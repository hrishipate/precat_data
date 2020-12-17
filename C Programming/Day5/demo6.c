#include <stdio.h>
#include <stdlib.h>
int factorial(int n);
int main(void)
{
	int no, ans;

	printf("\n Enter No :: ");
	scanf("%d", &no);

	ans= factorial(no); // no is actual argument
	printf("\n %d!=%d",no, ans);

	return EXIT_SUCCESS;
}
// n is formal arguments
int factorial(int n)
{
	int counter, fact;
	for(counter=fact=1;counter<=n; counter++ )
	{
		fact*=counter;//fact=fact*counter;
	}
	return fact;
}
// return 10;    return type int
// return 10.1;    return type double
// return 10.1f;    return type float
// return 10.1F;    return type float
// return 'A';    return type char
//return;          return type void
//return "sunbeam" return ???
