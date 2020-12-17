/*
 ============================================================================
 Name        : Demo4.c
 Author      : rahul
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("\n \\n=%d", '\n');
	printf("\n \\t=%d", '\t');
	printf("\n \\r=%d", '\r');
	printf("\n \\b=%d", '\b');
	printf("\n \\a=%d", '\a');

	printf("\n sunbeam ");
	//printf("\n "sunbeam" "); //error
	printf("\n \"sunbeam\" ");
	printf("\n \'sunbeam\' ");
	printf("\n 'sunbeam' ");

	return EXIT_SUCCESS;

}
