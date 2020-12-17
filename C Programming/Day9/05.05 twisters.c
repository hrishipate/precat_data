#include <stdio.h>
int main(void)
{
	int a[5] = {45, 1, 7, 10, 35};
             //     2
             //     3
	int x, y, z;
	x = ++a[1]; // 2 3
	y = a[1]++; //2
	z = a[x++]; //7
	printf("%d, %d, %d", x, y, z);
                       //3  2  7
	return 0;
}
