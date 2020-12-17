/*
 ============================================================================
 Name        : Demo5.c
 Author      : rahul
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main(void)
{
	char ch='A';
	printf("\n sizeof(100)  =%d", sizeof(100));
	printf("\n sizeof(100.3f)=%d", sizeof(100.3f));
	printf("\n sizeof(100.3F)=%d", sizeof(100.3F));
	printf("\n sizeof(100.3)=%d", sizeof(100.3));
	printf("\n sizeof(char)=%d", sizeof(char));
	printf("\n sizeof(ch)=%d", sizeof(ch));
	printf("\n sizeof('A')=%d", sizeof('A'));

	printf("\n int %%d    sizeof(int)    %d    %d to %d ", sizeof(int), INT_MIN, INT_MAX);

	return EXIT_SUCCESS;
}
