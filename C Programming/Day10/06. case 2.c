#include <stdio.h>
#include <stdlib.h>
//case 2 variable is constant
         // value of pointer is  constant &
         // address of pointer is not constant

int main(void)
{
	const float pi=3.142f;
	float pj=10.5f;
	//const float *ptr=&pi;
	float const * ptr=&pi; // value of pointer is constant
	//addree of pointer is not cosntant

	//pi=3.13; //error as pi is constant
	//++pi;
	//pi++;
	//--pi;
	//pi--;
	//pi+=10;
	//pi-=10;
	//pi*=10;
	//pi/=10;
	printf("\n pi=%.3f *ptr=%.3f", pi, *ptr);

	//*ptr=3.13f; //not allowed as value of pointer is  constant
	printf("\n pi=%.3f *ptr=%.3f", pi, *ptr);


	ptr=&pj; // allowed as address of pointer is not constant
	printf("\n pi=%.3f pj=%.3f *ptr=%.3f", pi,pj, *ptr);

	return EXIT_SUCCESS;
}
