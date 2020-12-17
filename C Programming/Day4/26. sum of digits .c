
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int no, counter ,sum;

	printf("\n Enter No ::");
	scanf("%d", &no);

	counter=sum=0;
	while(counter<no)
	{
		counter++;//counter= counter+1;
		printf("%5d ", counter);
		if(counter<no)
			printf(" + ");
		sum+=counter;//sum = sum + counter;
	}
	printf(" = %d", sum);
	return EXIT_SUCCESS;
}
