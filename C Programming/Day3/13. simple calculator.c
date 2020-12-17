#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int no1, no2, ans;
	char op;

	printf("\n Enter no1 :: ");
	scanf("%d", &no1);

	printf("\n Enter operator :: ");
	getchar();
	scanf("%c", &op);
	//scanf("%*c%c", &op);

	printf("\n Enter no2 :: ");
	scanf("%d", &no2);

	ans=0;

	// simple ifs
	/*if(op=='+')
		ans=no1+no2;
	if(op=='-')
		ans=no1-no2;
	if(op=='*')
		ans=no1*no2;
	if(op=='/')
	{
		if(no2==0)
		{
			printf("\n can not divide by zero");
			exit(0); // fun in stdlib.h
			//return 0; // jump statement
		}
		else
			ans=no1/no2;
	}
	else
	{
		printf("\n invalid operator");
		return 0;
	}*/

	// nested if
	if(op=='+')
			ans=no1+no2;
	else if(op=='-')
			ans=no1-no2;
	else if(op=='*')
			ans=no1*no2;
	else if(op=='/')
	{
		if(no2==0)
		{
			printf("\n can not divide by zero");
			exit(0); // fun in stdlib.h
			//return 0; // jump statement
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
