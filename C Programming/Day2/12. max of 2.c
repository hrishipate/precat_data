
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int no1, no2;

	printf("\n Enter No1 :: ");
	scanf("%d", &no1);
	printf("\n Enter No2 :: ");
	scanf("%d", &no2);

	// simple if
	/*if(no1>no2)
			printf("\n %d no1 is max", no1);
	if(no1==no2)
			printf("%d (no1)is equal to %d (no2)", no1, no2);
	if(no1<no2)
			printf("\n %d no2 is max", no2);
	*/

	// nested if

	if(no1>no2)
		printf("\n %d no1 is max", no1);
	else if(no1==no2)
		printf("%d (no1)is equal to %d (no2)", no1, no2);
	else
		printf("\n %d no2 is max", no2);

	return EXIT_SUCCESS;
}
