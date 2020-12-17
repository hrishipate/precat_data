/*
 ============================================================================
 Name        : demo5.c
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
	int no1, no2, ans;
	char op;

	printf("\n Enter No1:-  ");
	scanf("%d", &no1);

	printf("\n Enter the operator:- ");
	getchar();
	scanf("%c", &op);

	printf("\n Enter no2:- ");
	scanf("%d", &no2);

	ans=0;

	if(op=='+')
		ans=no1+no2;
	if(op=='-')
		ans=no1-no2;
	if(op=='*')
		ans=no1*no2;
	if(op=='/')
	{
		if(no2==0)
		{
			printf("\n Cannot divide by zero");
			exit(0);
		}
		else
			ans=no1/no2;
	}
	else
	{
		printf("\n invalid operator");
		return 0;
	}

	printf("\n %d %c %d = %d", no1, op, no2, ans);


	return EXIT_SUCCESS;
}


