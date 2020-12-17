#include <stdio.h>
#include <stdlib.h>
#define sq(a) a*a // not type safe
#define sq1(a) (a)*(a) // macro
int square(int a); // type safe
int main(void)
{
	int x=5, y=0;
	y= sq(x); // y= x*x ;// y=5*5; //25
	printf("\nx=%d y=%d", x, y);

	y=sq(x+x); //  y= x+x*x+x  // y=5+5*5+5; //y=5+25+5;
	printf("\nx=%d y=%d", x, y);

	y= 25/sq(x); // y=25/x*x; y=25/5*5;  y=5*5; //y=25
	printf("\nx=%d y=%d", x, y);

	y=sq1(x+x); // y=(x+x)*(x+x) // y=(5+5)*(5+5)=10*10=100
	printf("\nx=%d y=%d", x, y);

	y=square(x);
	printf("\n function square x=%d y=%d", x, y);
	return EXIT_SUCCESS;
}
int square(int a)
{
	return a*a;
}
// gcc -E -o filename.i filename.c
// gcc -E -o file1.i file1.c

