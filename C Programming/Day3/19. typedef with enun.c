
#include <stdio.h>
#include <stdlib.h>
//decl of enum (dont take memory as is logical entity)
// user defined data type

//way 1 type def
/*typedef enum color
{
	RED=0, BLACK, GREEN=5 , YELLOW
	//0     1      5         6
}COLOR;*/

// way2 typedef
enum color
{
	RED=0, BLACK, GREEN=5 , YELLOW
	//0     1      5         6
};
typedef enum color COLOR;
COLOR c;//enum color c;
int main(void)
{
	// enum color is a user defined data type
	// c is a variable of user defined data type enun color will take 4 bytes
	enum color c;
	int no1; // int is data type and no1 is variable will take 4 bytes

	printf("\n 0. Red 1. Black 5. Green 6. Yellow ::");
	printf("\n Enter your color :: ");
	//scanf("%d", &c) ; // way 1 scan enum variable c

	scanf("%d", &no1);// way2 scan int and assign to enum varible c using type case
	//c=(enum color)no1;

	// way3 using int and switch case
	switch(no1)
	{
		case 0: c=RED; break;
		case 1: c=BLACK; break;
		case 5: c=GREEN; break;
		case 6: c=YELLOW; break;
		default : c=3; break; /// other than 0,1,5,6
	}

	switch(c)
	{
		default : printf("\n invalid color"); break;
		case RED: printf("\n red color"); break;
		case BLACK: printf("\n black color"); break;
		case GREEN: printf("\n Green color"); break;
		case YELLOW: printf("\n YELLOW color"); break;


	}

	printf("\n size of c=%d", sizeof(c));
	printf("\n size of enum color=%d", sizeof(enum color));

	return EXIT_SUCCESS;
}
