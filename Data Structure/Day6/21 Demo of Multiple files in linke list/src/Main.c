#include<stdio.h>
#include<stdlib.h>
#include "../include/LinkedList.h"
#include "../include/LinkedList.h"
int main(void)
{

	AddLast(10);
	AddLast(20);
	AddLast(30);
	AddLast(40);
	AddLast(50);
	printf("\n list is :: \n");
	DisplayList();
	ReverseList();
	printf("\n Reverse list is :: \n");
	DisplayList();

	FreeList();
	return EXIT_SUCCESS;
}

