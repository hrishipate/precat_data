#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int no, counter;

	printf("\n Enter No1 :: ");
	scanf("%d",&no);

	printf("\n=========================\n");
	//1. print 1 to no
	/*counter=0; // init
	while(counter<no)
	{
		++counter;//counter++; //counter=counter+1;
		printf("%5d", counter);
		if(counter%15==0)
			printf("\n");
	}
	*/
	printf("\n=========================\n");
	//2. print no to 1
	/*counter=no; // init
	while(counter>=1) //while(counter>0)
	{
		printf("%5d", counter);
		--counter;//counter--; //counter=counter-1;
		if(counter%15==0)
			printf("\n");
	}*/

	printf("\n=========================\n");
	//3. print 1 to no
	/*
	counter=0; // init
	while(1)
	{
		++counter;//counter++; //counter=counter+1;
		printf("%5d", counter);
		if(counter%15==0)
			printf("\n");
		if(counter>=no)
			break; // break will go out loop
	}*/

	printf("\n=========================\n");
	//4. print 1 to no
	/*counter=0; // init
	while(counter<no);  // infinte loop
	{
		++counter;//counter++; //counter=counter+1;
		printf("%5d", counter);
		if(counter%15==0)
			printf("\n");
	}*/

	printf("\n end=========================\n");

	counter=0; // init
	while(counter<no && ++counter);  // print last value 5
	{
		++counter;//counter++; //counter=counter+1;
		printf("%5d", counter);
		if(counter%15==0)
			printf("\n");
	}
	printf("\n end=========================\n");

	return EXIT_SUCCESS;
}
