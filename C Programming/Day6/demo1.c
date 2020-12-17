#include <stdio.h>
#include <stdlib.h>
int factorial(int n);
int IsStrongNo(int n);
void StrongNoInRange(int lowerLimit, int upperLimit);
int main(void)
{
	//1. check the factorial using function
	/*int no, ans;
	printf("\n Enter No :: ");
	scanf("%d", &no);

	ans= factorial(no);
	printf("\n %d!=%d", no, ans);
	*/

	// 2. check no is strong or not
	/*int no;

	printf("\n Enter No :: ");
	scanf("%d", &no);

	if(no==IsStrongNo(no))
		printf("\n %d is strong no", no);
	else
		printf("\n %d is not strong no", no);
	*/

	//3. strong no between 1 to 500
	/*int no;
	printf("\n strong between 1 to 500 \n");

	for(no=1; no<=500; no++)
	{
		if(no==IsStrongNo(no))
			printf("%d\n", no);
	}*/

	// 4 write fun to display strong no in range
	int lower,upper;
	printf("\n Enter Lower Limit :: ");
	scanf("%d", &lower);

	printf("\n Enter upper Limit :: ");
	scanf("%d", &upper);

	printf("\n Strong NO from %d to %d \n", lower, upper);
	StrongNoInRange(lower, upper);

	return EXIT_SUCCESS;
}
int factorial(int n)
{
	int fact, counter;
	for(fact=counter=1; counter<=n; counter++ )
	{
		fact*=counter;//fact= fact*counter;
	}
	return fact;
}
int IsStrongNo(int n)
{
	int rem, sum;
	sum=rem=0;
	while(n!=0)
	{
		rem= n%10;
		n/=10;
		sum= sum+factorial(rem);
	}
	return sum;
}
void StrongNoInRange(int lowerLimit, int upperLimit)
{
	int no;
	for(no=lowerLimit; no<=upperLimit; no++)
	{
		if(no==IsStrongNo(no))
			printf("%5d", no);
	}
	return;
}
