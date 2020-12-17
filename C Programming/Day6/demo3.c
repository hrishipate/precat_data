#include <stdio.h>
#include <stdlib.h>
//int i=1; // global variable
static int i=1; //static is decl  globally
void fun();
int main(void)
{
	fun();
	return EXIT_SUCCESS;
}
void fun()
{
	//int i=1;
	//static int i=1; // static is decl locally

	if(i>10)
		return;
	else
	{
		printf("\n i = %-3d  [%u]", i, &i);
		i++;
		fun();
	}

}
