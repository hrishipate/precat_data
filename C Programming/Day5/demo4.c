#include <stdio.h>
#include <stdlib.h>
//1. function decl or prototype of fun
//output function_name(input);
//return_type function_name(data_type parameter1,data_type parameter1);
int Addition(int n1, int n2); //global decl
int main(void)
{
	//int Addition(int n1, int n2); // local decl
	int no1=10, no2=20, ans=0;
	ans=Addition(no1, no2);// 3. function call
	//no1 and no2 actual argument
	printf("%d + %d = %d", no1, no2, ans);
	return 0;
}
//2 function defination (logic of fun)
// n1 and n2 formal arguments
int Addition(int n1, int n2)
{
	int temp=0;
	temp=n1+n2;
	return temp;
}
