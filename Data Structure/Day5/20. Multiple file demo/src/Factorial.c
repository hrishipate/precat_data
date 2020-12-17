#include"../include/factorial.h"

// fun defination

int factorial(int n)
{
	int counter, fact;
	for(counter=fact=1; counter<=n; counter++)
		fact*=counter;
	return fact;
}
