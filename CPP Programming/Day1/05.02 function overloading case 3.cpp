#include<stdio.h>
//case3 Function having same name ,same number of arguments but order
//of arguments are different

double sum(int n1, double n2)// sum@@int , double
{
	return n1+n2;
}

double sum(double n1, int n2) // sum@double, int
{
	return n1+n2;
}
int main()
{

	double result;

	result = sum (10,20.2); // sum@@int, double
	printf("\n result=%.2lf", result);

	result = sum (10.23,20); // sum@@ double, int
	printf("\n result=%.2lf", result);

	return 0;
}
