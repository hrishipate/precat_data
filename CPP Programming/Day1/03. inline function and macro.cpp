#include<stdio.h>
#define sq(a) a*a
inline int square(int a);
int main()
{
	int x=5, y=0;

	y=sq(x); // y= x*x ;// y= 5*5=25
	printf("\n x=%d y=%d by marco ::", x, y);

	y= square(x); // y=return x*x;
	printf("\n x=%d y=%d by functions :: ", x, y);

	return 0;
}
inline int square(int a)
{
	return a*a;
}
// g++ -E -o demo4.i demo4.cpp   // in cpp
// gcc -E -o demo4.i demo4.cpp   // in c

