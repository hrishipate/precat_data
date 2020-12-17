#include<stdio.h>
//case2 Function having same name and same number of arguments but
//differs in type of arguments

int sum(int n1, int n2)// sum@@int , int
{
	return n1+n2;
}

double sum(int n1, double n2) // sum@int, double
{
	return n1+n2;
}
int main()
{
	int result;
	double result1;

	result = sum (10,20); // sum@@int, int
	printf("\n result=%d", result);

	result1 = sum (10,20.2); // sum@@int, double
	printf("\n result=%.2lf", result1);

	return 0;
}
