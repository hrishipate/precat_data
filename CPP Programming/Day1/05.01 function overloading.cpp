#include<stdio.h>
// two data types added in cpp
//1. bool    - 1 byte - false/true
//2. wchar_t - 2 bytes (16 bit) unicode
// char        1 byte  (8 bits) ACSII
/*int f1(int) // f1@@int
{
	printf("\n inside int block");
}*/
void f1(int) // f1@@int
{
	printf("\n inside int block");
}
void f1(float) // f1@@float
{
	printf("\n inside float block");
}
void f1(double) // f1@@double
{
	printf("\n inside double block");
}
void f1(char) // f1@@char
{
	printf("\n inside char block");
}
void f1(bool) // f1@@bool
{
	printf("\n inside bool block");
}
void f1(char*) // f1@@char*
{
	printf("\n inside char* (string) block");
}
void f1(void) // f1@@void
{
	printf("\n inside no arguments block");
}
int main()
{
	f1(10); // int
	f1(10.2); // double
	f1(10.2f); // float
	f1(10.2F); // float
	f1((int)10.2); // int
	f1((float)10.2); // float
	f1('A'); // char
	f1(true); // bool
	f1(false); // bool
	f1("sunbeam"); // char*
	f1(); // inside no arguments block
	return 0;
}
