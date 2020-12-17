
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int no, counter ,fact;

	printf("\n Enter No ::");
	scanf("%d", &no);

	counter=0;
	fact=1;

	while(counter<no)
	{
		counter++;//counter= counter+1;
		printf("%5d ", counter);
		if(counter<no)
			printf(" * ");
		fact*=counter;//fact = fact * counter;
	}
	printf(" = %d", fact);

	return EXIT_SUCCESS;
}
