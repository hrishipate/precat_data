#include <stdio.h>
int main()
{
	short int a = 12, b = 5;

	short c = a & b;		// bitwise AND

	short d = a | b;		// bitwise OR

	short e = a ^ b;		// biwise XOR

	short f = ~a;			// biwise NOT

	short g = b << 4;		// left shift

	short h = b >> 2;		// right shift

	printf("c=%hd  d=%hd  e=%hd  f=%x  g=%hd  h=%d", c, d, e, f, g, h);
	return 0;

}
