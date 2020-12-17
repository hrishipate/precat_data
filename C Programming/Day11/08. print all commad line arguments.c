#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[], char *envp[])
{
	int index;
	printf("\n no of arguments =%d", argc);
	for(index=0; index<argc; index++)
	{
		printf("\n %d] %s", index, argv[index]);
	}
	return EXIT_SUCCESS;
}
//to compile --->> gcc filename.c ---> a.out
// to run prog--> ./a.out abcd hellow 123
