#include<stdio.h>
//case 1 Function having same name but differs in number of arguments
/*int sum(int n2, int n1) // sum@@int , int
{
}*/
int sum(int n1, int n2) // sum@@int, int
{
	return n1+n2;
}
int sum(int n1, int n2, int n3) // sum@@int, int, int
{
	return n1+n2+n3;
}

int main()
{
	int result=0;
	result= sum(10,20); // sum@@int. int
	printf("\n sum=%d ",result);

	result= sum(10,20, 30); // sum@@int. int, int
	printf("\n sum=%d ",result);


	return 0;
}
