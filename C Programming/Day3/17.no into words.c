#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int no, tenth , unit;

	printf("\n Enter no : ");
	scanf("%d", &no);

	if(no==0)
		printf("zero ");
	else
	{
		unit=no%10;
		tenth=no/10;

		switch(tenth)
		{
			case 1:
					switch(unit)
					{
						case 0: printf(" ten  "); break;
						case 1: printf(" eleven  "); break;
						case 2: printf(" twelve "); break;
						case 3: printf(" thirteen "); break;
					}
					break;
			case 1+1: printf("twenty "); break;
			case 1*2+1: printf("thirty "); break;
		}
		if(tenth!=1)
		{
			switch(unit)
			{
				case 1: printf(" one  "); break;
				case 2: printf(" two "); break;
				case 3: printf(" three "); break;
			}
		}
	}
	return EXIT_SUCCESS;
}
