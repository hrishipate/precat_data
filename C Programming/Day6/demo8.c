#include <stdio.h>
#include <stdlib.h>
//int no3=no1; error
int no4=100;// allowed with constants
int no5; //// default value is 0
int main(void)
{
	int no1=10;
	//static int no2=no1; error
	static int  no2=10; // allowed with constants
	printf("\n no3=%d", no2);
	static int  no3; // default value is 0
	printf("\n no3=%d", no3);
	printf("\n no4=%d", no4);
	printf("\n no5=%d", no5);

	no3=no1; // assigment allowed
	no5=no1;
	printf("\n no3=%d", no3);
	printf("\n no5=%d", no5);

	no1=no3;// allowed
	no1=no5;
	return EXIT_SUCCESS;
}
