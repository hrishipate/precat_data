#include <stdio.h>
#include <stdlib.h>
/*
int no1=10; // defination of global variable (memory)
int main(void)
{
	printf("\n no1=%d [%u]", no1, &no1);
	return EXIT_SUCCESS;
}
extern int no1; // decl of global variable
*/

//============================================

/*
extern int no1; // decl of global variable
int main(void)
{
	printf("\n no1=%d [%u]", no1, &no1);
	return EXIT_SUCCESS;
}
int no1=10; // defination of global variable (memory)
*/
//============================================
/*

extern int no1; // decl of global variable
int main(void)
{
	printf("\n no1=%d [%u]", no1, &no1); // error undefined ref
	return EXIT_SUCCESS;
}
*/

//============================================

/*
int no1=10; // defination of global variable (memory)
int main(void)
{
	printf("\n no1=%d [%u]", no1, &no1);
	return EXIT_SUCCESS;
}
*/
/*
int main(void)
{
	printf("\n no1=%d [%u]", no1, &no1);
	return EXIT_SUCCESS;
}
int no1=10; // defination of global variable (memory)
*/


extern int no1; // decl of global variable
int main(void)
{
	printf("\n no1=%d [%u]", no1, &no1);
	return EXIT_SUCCESS;
}






