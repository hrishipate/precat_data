#include <stdio.h>
#include <stdlib.h>
int i; // global variable
//static int i; //static is decl  globally

int main(void)
{
	//int i;
	//static int i; // static is decl locally

	if(i>=10)
		return 0;
	else
	{
		i++;
		printf("\n i = %-3d  [%u]", i, &i);
		main();
	}
	return EXIT_SUCCESS;
}



