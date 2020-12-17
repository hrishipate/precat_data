#include<stdio.h>
#include<string.h>
int main(void)
{
	char str1[] ="Sunbeam";
	char str2[]= "Sunbeam";


	printf("\n src=%s dest =%s", str1, str2);

	if (strcmp(str1,str2)==0)
		printf(" \t both are equal \n");
	else
		printf(" \t both are not equal \n");

	printf("\n=========================\n");

	printf("\n src=%s dest =%s", str1, str2);
	if (strcmp(str1,str2)) // if(0)
		printf(" \t both are equal \n");
	else
		printf(" \t both are not equal \n");

	printf("\n=========================\n");
	printf("\n src=%s dest =%s", str1, str2);
	if (!strcmp(str1,str2)) // if(!0)
		printf(" \t both are equal \n");
	else
		printf(" \t both are not equal \n");

	return 0;
}
