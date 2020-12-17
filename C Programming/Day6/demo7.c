
#include <stdio.h>
#include <stdlib.h>
//register int no1=0; error we can not decl register globally
int main(void)
{
	register int no1=0;
	printf("\n no1=%d", no1);

	//printf("\n Enter no1 :: ");
	//scanf("%d", &no1); //error as we can get address of register storage class
	//printf("\n no1=%d [%u]", no1, &no1);

	for(no1=1 ; no1<10; no1++)
		printf("\n no1= %d ", no1);



	return EXIT_SUCCESS;
}
