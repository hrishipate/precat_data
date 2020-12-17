/*
 ============================================================================
 Name        : demo3.c
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
	// data_type variable_name;
	int no1, no2;
	char ch;

	//printf ("\n Enter char :: ");
	//scanf("%c", &ch);

	printf("\n Enter No1 :: ");
	scanf("%d", &no1);

	printf ("\n Enter char :: ");
	getchar(); // take one char \n
	scanf("%c", &ch);
	//scanf("%*c%c", &ch); // %*c skips one char

	printf("\n Enter No2 :: ");
	scanf("%d", &no2);

	printf("\n ch=%d \n ch=%c \t &ch=%u", ch, ch, &ch);
	printf("\n no1=%d \t &no1=%u", no1, &no1);
	printf("\n no2=%d \t &no2=%u", no2, &no2);

	printf("\n no1=%10d no2=%10d", no1, no2);
	printf("\n no1=%-10d no2=%-10d", no1, no2);
	return EXIT_SUCCESS;
}
