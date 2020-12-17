#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//condition ? true part : false part;

	int no=0;
	char ch;

	printf("\n Enter No :: ");
	scanf("%d", &no);

	no%2==0 ? printf("\n %d is even", no) : printf("\n %d is odd", no);

	no%2 ?  printf("\n %d is odd", no) : printf("\n %d is even", no);


	printf("\n enter char :: ");
	scanf("%*c%c", &ch);

	ch>=65 && ch<=90 ? printf("%c", ch+32) : printf("%c", ch);

	// condition ? true part : condition ? true part : false part;
	no>0 ? printf("\n %d is +ve", no) : no==0 ? printf("\n %d is zero", no) : printf("\n %d is -ve", no);

	{
		int no1=30, no2=30;
		no1>no2? printf("\n %d (no1) is max", no1): no1==no2?  printf("\n %d (no1) is equal to %d (no2)", no1, no2):  printf("\n %d (no2) is max", no2);
	}
	return EXIT_SUCCESS;
}
