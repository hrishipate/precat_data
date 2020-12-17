#include <stdio.h>
#include <stdlib.h>
enum menuchoice
{
	EXIT=0, ADDITION,MINUS,DIVSION,MULTIPLY
};
int main(void)
{
	int no1, no2, ans;
	enum menuchoice choice;

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
			case ADDITION: // addition
							ans= no1+no2; break;
			case MINUS: // minus
							ans= no1-no2; break;
			case DIVSION: // division
				        if(no2==0)
				        {
				        	printf("\n can not divide by zero");
				        	return 0;
				        }
				        else
				        	ans= no1/no2;
				        break;
			case MULTIPLY: // multiply
					ans= no1*no2; break;
		}

		printf("\n ans=%d", ans);

		printf("\n Enter 1 to continue or 0 to Exit :: ");
		scanf("%d", &choice);

	}while(choice!=0);

	return EXIT_SUCCESS;
}
