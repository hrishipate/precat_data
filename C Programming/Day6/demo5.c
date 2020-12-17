#include <stdio.h>
#include <stdlib.h>
int no1=100; // global variable
int main(void)
{
	int no2=10; // local variable to main fun    //10
	printf("\n no2=%d [%u] local variable main", no2, &no2);
	{
		// block1
		// decl and defincation for local variable
		int no1=25; // local variable to blcok1       //25
		printf("\n no1=%d [%u] local variable block1", no1, &no1);
	}
	{
		// block2
		int no1=50; // local variable to blcok2         //50
		printf("\n no1=%d [%u] local variable in block2", no1, &no1);
	}
	printf("\n no1=%d [%u] global variable block1", no1, &no1);
	return EXIT_SUCCESS;
}
