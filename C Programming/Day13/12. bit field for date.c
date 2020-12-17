
#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)
struct date1
{
	int dd;
	int mm;
	int yy;
};
struct date2
{
	short int dd;
	short int mm;
	short int yy;
};
struct date3
{
	unsigned dd:5;
	unsigned mm:4;
	unsigned yy:11;
};
struct date4
{
	signed dd:6;
	signed mm:5;
	signed yy:12;
};

int main(void)
{
	printf("\n size of struct date1=%d", sizeof(struct date1));
	printf("\n size of struct date2=%d", sizeof(struct date2));
	printf("\n size of struct date3=%d", sizeof(struct date3));
	printf("\n size of struct date4=%d", sizeof(struct date4));
	return EXIT_SUCCESS;
}
