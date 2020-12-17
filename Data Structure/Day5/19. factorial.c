
#include <stdio.h>
#include <stdlib.h>

int factorial(int n); // fun decl

int main(void)
{
	int no=5, ans=0;
	ans=factorial(no) ;// function call
	printf("\n %d ! =%d", no, ans);
	return EXIT_SUCCESS;
}

// fun defination
int factorial(int n)
{
	int counter, fact;
	for(counter=fact=1; counter<=n; counter++)
		fact*=counter;
	return fact;
}
