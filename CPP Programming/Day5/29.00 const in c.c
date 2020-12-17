
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const float pi=3.142; //constant variable
	float *ptr=&pi; // value of pointer is not constant and
	// address of pointer is not constant

	//pi=3.15;// error as pi is constant

	printf("\n *ptr=%f  pi=%f", *ptr, pi);
	*ptr= 3.15; // allowed in c as value of pointer is not constant
	printf("\n *ptr=%f  pi=%f", *ptr, pi);



	return EXIT_SUCCESS;
}
