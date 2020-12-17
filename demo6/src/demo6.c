/*
 ============================================================================
 Name        : demo6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setvbuf(stdout,NULL,_IONBF,0);
	int x, y;
	printf("\nEnter no1:- ");
	scanf("%d", &x);
	printf("\nEnter no2:- ");
	scanf("%d",&y);

	x = x ^ y;
	y = x ^ y;
	x = x ^ y;

	printf("\n The swapped numbers are %d(x) & %d(y)", x, y);
	return EXIT_SUCCESS;
}
