#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a=10;
	float pi=3.142f;
	char ch='A';
	void *ptr=NULL; // void pointer

	ptr=&a; // store the address of int data type in void pointer
	//printf("\n *ptr=%d", *ptr); //error
	printf("\n a=%d *ptr=%d",a, *(int*)ptr);

	ptr=&pi;
	//printf("\n *ptr=%f", *ptr); //error
	printf("\n pi=%.3f *ptr=%.3f",pi, *(float*)ptr);

	ptr=&ch;
	//printf("\n *ptr=%c", *ptr); //error
	printf("\nch=%c *ptr=%c",ch, *(char*)ptr);

	printf("\n ptr=%u", ptr);
	ptr++; //should give error as ansi std
	// in gcc scale factor of void pointer is consider as 1 byte
	printf("\n ptr=%u", ptr);
	return EXIT_SUCCESS;
}
