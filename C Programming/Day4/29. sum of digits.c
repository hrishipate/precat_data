
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int rem, sum , no;

	printf("\n Enter No :: ");
	scanf("%d", &no);

		sum=rem=0;
		while(no!=0)
		{
			rem= no%10;
			no/=10;//no=no/10;
			sum+=rem;//sum=sum+rem;
		}
		printf("\n sum of digits =%d", sum);

	return EXIT_SUCCESS;
}
