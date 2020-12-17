#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int no, rem, sum, ono;
	printf("\n Armstrong  No between 1 to 500 :: \n ");

	for(no=1; no<=500; no++)
	{
		for(sum=rem=0, ono=no; ono!=0; ono/=10)
		{
			rem= ono%10;
			sum=sum+rem*rem*rem;
		}
		if(sum==no)
			printf("%5d", no);
	}
	return EXIT_SUCCESS;
}
