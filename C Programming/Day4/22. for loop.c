
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int counter, no;
	printf("\n Enter No :: ");
	scanf("%d", &no);

	// print 1 to no
	/*for(counter=1; counter<=no; counter++)
	{
		printf("%5d", counter);
	}*/

	// print no to 1
	/*for( counter=no; counter>=1; --counter)
	{
		printf("%5d", counter);
	}*/

	// print 1 to no
	/*counter=1;
	for( ; ; )
	{
		printf("%5d", counter);
		counter++;
		if(counter>no) // condition for exit
			break;
	}*/

	/*for(counter=1; counter<=no; counter++); // print last value of counter
	{
		printf("%5d", counter);
	}*/

	/*for(counter=1; counter<=no; ); // infinite loop
	{
		printf("%5d", counter);
		counter++;
	}*/
	printf("\n end");
	for(counter=1; counter<=no; printf("%5d", counter++))
	{}

		return EXIT_SUCCESS;
}
