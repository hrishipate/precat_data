
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int result=0;
	float result1=0.0f;

	result= 10/3;
	printf("\n result=%d", result);

	result1= 10/3;
	printf("\n result1=%f", result1);

	result1= 10/3.0f;
	printf("\n result1=%f", result1);
	printf("\n result1=%.2f", result1);
	printf("\n result1=%.0f", result1);

	result1= 11/3.0f;
	printf("\n result1=%f", result1);
	printf("\n result1=%.2f", result1);
	printf("\n result1=%.0f", result1);

	result1= (float)10/3; // type casting
	printf("\n result1=%f", result1);

	return EXIT_SUCCESS;
}
