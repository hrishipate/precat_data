#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	const float pi=3.142;

	//float *ptr=&pi;
	float *ptr=NULL;
	ptr=&pi;

 	//pi=3.5f; // error as pi is constant
	//pi++;
	//++pi;
	//--pi;
	//pi--;
	//pi+=10;
	//pi-=10;
	//pi*=10;
	//pi/=10;

	printf("\n pi=%.3f *ptr=%.3f", pi, *ptr);
	*ptr=3.5f; // allowed to modify  pi using pointers
	printf("\n pi=%.3f *ptr=%.3f", pi, *ptr);

	return EXIT_SUCCESS;
}
