
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*{
		int no1=10;
		if(no1)
			printf("\n yes %d", no1);
	}
	{
		int no1=0;
		if(no1)
			printf("\n yes %d", no1);
	}
	{
		int no1=100;
		if(no1)
			printf("\n yes in if %d", no1);
		else
			printf("\n no in if %d", no1);
	}
	{
			int no1=0;
			if(no1)
				printf("\n yes in if %d", no1);
			else
				printf("\n no in if %d", no1);
		}*/
		{
			int no1=10, no2=0;
			if(no1, no2)
				printf("\n yes %d", no1);
		}
		{
			int no1=10, no2=0;
			if(no1, no2, no1)
				printf("\n yes %d", no1);
		}

	{
			int no1=0, no2=10;
			if(no1, no2, no1)
				printf("\n yes in if no1=%d no2=%d", no1, no2);
			else
				printf("\n no in if no1=%d no2=%d", no1, no2);
		}


	return EXIT_SUCCESS;
}
