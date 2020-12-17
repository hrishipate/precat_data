
#include <stdio.h>
#include <stdlib.h>

typedef union test
{
	char name[2];
	short int no;
}TEST;


int main(void)
{
	TEST t;//union test t;
	printf("\n size of union = %d", sizeof(t));
	//t.name[0]='a';//'A';
	//t.name[1]='b';//'B';
	//t.no=16961;
	t.no= 25185;
	printf("\n t.name[0]=%c %d [%u]", t.name[0],t.name[0], &t.name[0]);
	printf("\n t.name[1]=%c %d [%u]", t.name[1],t.name[1], &t.name[1]);
	printf("\n t.no= %d [%u]", t.no, &t.no);

	return EXIT_SUCCESS;
}

//    A 65  01000001
//    B 66  01000010

// 16961  0100001001000001
 //BA     0100001001000001

// a  97  01100001
// b  98  01100010
// ba     0110001001100001
// 25185  0110001001100001
