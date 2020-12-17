#include <stdio.h>
#include <stdlib.h>
//1. function decl or prototype of fun
//output function_name(input);
//return_type function_name(data_type parameter1,data_type parameter1);

float Addition(float n1, float n2); //

//2 function defination (logic of fun)
// n1 and n2 formal arguments
float Addition(float n1, float n2)
{
	float temp=0;
	temp=n1+n2;
	//return temp, n1, n2, n1*n2;
	return (temp, n1, n2, n1*n2);
}


int main(void)
{
	float no1=30, no2=20, ans=0;
	ans=Addition(no1, no2);// 3. function call
	//no1 and no2 actual argument
	printf("%f + %f = %f", no1, no2, ans);
	return 0;
}

