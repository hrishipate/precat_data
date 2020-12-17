#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setvbuf(stdout,NULL,_IONBF,0);
	int x=5, y=0;
	//pre increment increment value of x by1 then assign to y
	y=++x;
	printf("\n x=%d y=%d", x, y);

	x=5, y=0;
	// post increment
	//assign value of x to y then incremnet value of x by 1
	y= x++;
	printf("\n x=%d y=%d", x, y);

	x=5, y=0;
	// pre decrement
	//decrement value of x by 1 then assign value of x to y
	y= --x;
	printf("\n x=%d y=%d", x, y);

	x=5, y=0;
	// post decrement
	//assign value of x to y then decrement value of x by 1
	y= x--;
	printf("\n x=%d y=%d", x, y);

	//we can not use pre post increments/ decrements with constant
	//y=++4; //

	//we can not use pre post increments/ decrements with expression

	//int z =(x+y)++;


	return EXIT_SUCCESS;
}
