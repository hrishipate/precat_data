#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int no, rem, sum, ono;
	printf("\n Enter No :: ");
	scanf("%d", &no);

	for(sum=rem=0, ono=no; no!=0; no/=10)
	{
		rem= no%10;
		sum=sum+rem*rem*rem;
	}
	printf("\n sum=%d", sum);
	if(sum==ono)
		printf("\n %d is armstrong no", ono);
	else
		printf("\n %d is not armstrong no", ono);

	return EXIT_SUCCESS;
}
