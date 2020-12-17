#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define SIZE 40
int main(void)
{
	// string
	char city1[ SIZE ]="pune";// \0 added by compiler
	char city2 [ ]={'p', 'u', 'n', 'e','\0'};
	char city3 [ ]={'k', 'a', 'r', 'a','d','\0'};
	char city4[ SIZE ]="karad";// \0 added by compiler

	// array of char
	char city5[]={'a', 'b', 'c'};


	printf("\n length of %s is %d", city1, strlen(city1));
	printf("\n sizeof of %s is %d", city1, sizeof(city1));

	printf("\n length of %s is %d", city2, strlen(city2));
	printf("\n sizeof of %s is %d", city2, sizeof(city2));

	printf("\n length of %s is %d", city3, strlen(city3));
	printf("\n sizeof of %s is %d", city3, sizeof(city3));

	printf("\n length of %s is %d", city4, strlen(city4));
	printf("\n sizeof of %s is %d", city4, sizeof(city4));

	printf("\n Enter city1 :: ");
	//scanf("%s", city1); // %s with scanf scan upto space
	//gets(city1); // scan upto new line char \n

	//scan sets
	//scanf("%[^\n]s", city1); /// scan upto new line char \n
	//scanf("%[^.]s",city1); // scan upto . multiple lines
	//scanf("%[A-Z]s", city1); //scan upto capital letter
	//scanf("%[a-z]s", city1); //scan upto small letter
	//scanf("%[0-9]s", city1); //scan upto digits
	//scanf("%[^0-9]s", city1); //scan upto letter
	scanf("%[^A-Z]s", city1); //scan upto small letter
	scanf("%[^a-z]s", city1); //scan upto capital letter


	printf("\n city1=%s", city1);
	return EXIT_SUCCESS;
}
