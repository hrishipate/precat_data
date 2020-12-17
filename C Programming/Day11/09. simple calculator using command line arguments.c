#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int no1, no2 , ans;
	char op;

	if(argc!=4)
	{
		printf("\n no of arguments =%d", argc);
		printf("\n invalid argumments");
		printf("\n ProgName No1 Operator No2");
		 ///          0      1   2        3
	}
	else
	{
		ans=0;
		no1=atoi(argv[1]);
		op=*argv[2]; //op= argv[2][0];
		no2=atoi(argv[3]);
		switch(op)
		{
			case '+' : ans=no1+no2; break;
			case '-' : ans=no1-no2; break;
			case '*' : ans=no1*no2; break;
			case '/' : ans=no1/no2; break;
		}
		printf("\n %d %c %d =%d", no1, op, no2, ans);
	}
	return EXIT_SUCCESS;
}

