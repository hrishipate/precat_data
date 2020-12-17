#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int no1, no2, ans, choice;

	do
	{
		printf("\n Enter no1 :: ");
		scanf("%d", &no1);

		printf("\n Enter no2 :: ");
		scanf("%d", &no2);

		printf("\n 1. Addition \n 2. Minus \n 3. Division \n 4. Multiply \n 0. Exit ");
		printf("\n Enter Your choice ::  ");
		scanf("%d", &choice);

		switch(choice)
		{
			default : printf("\n invalid choice ");
					//break; go out of switch
			        //exit(0); //terminate prog
					continue; // go to next iteration
			case 1: // addition
					ans= no1+no2; break;
			case 2: // minus
					ans= no1-no2; break;
			case 3: // division
					ans= no1/no2; break;
			case 4: // multiply
					ans= no1*no2; break;
		}

		printf("\n ans=%d", ans);

		printf("\n Enter 1 to continue or 0 to Exit :: ");
		scanf("%d", &choice);

	}while(choice!=0);







	return EXIT_SUCCESS;
}
