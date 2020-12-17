#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int no1=10;

	if(no1==10)
		printf("\n yes no1=%d", no1);

	if(no1==10);
		printf("\n yes no1=%d", no1);

	if(no1==20);
			printf("\n yes no1=%d", no1);

	/*if(no1==10);  //error else with if
		printf("\n yes no1=%d", no1);
	else
		printf("\n yes no1=%d", no1);
*/
			printf("\n===============");
	if(no1==10)
		printf("\n yes no1=%d", no1);
	else;
		printf("\n no no1=%d", no1);

	return EXIT_SUCCESS;
}
