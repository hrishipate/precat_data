
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int counter , no;

	printf("\n Enter No :: ");
	scanf("%d", &no);

	if( no==0)
		printf("\n no of digits= 1");
	else
	{
		counter=0;
		while(no!=0)
		{
			counter++; //counter=counter+1;
			no/=10;//no=no/10;
		}

		printf("\n no of digits =%d", counter);
	}
	return EXIT_SUCCESS;
}
