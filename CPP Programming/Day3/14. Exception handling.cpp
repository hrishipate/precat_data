#include <iostream>
using namespace std;

int main()
{
	int x=10 , y=0 , result=0;
	try
	{
		if(y==0)
			throw true; // bool data type
			//throw 'A'; // char data type
			//throw 10.2; // int data type
			//throw 1; // int data type
		result=x/y;
		cout<<"result="<<result<<endl;
	}

	catch(int value)
	{
		cout<<"inside int block1  value= "<<value<<endl;
		cout<<"can not divide by zero"<<endl;
	}
	catch(int value)
	{
		cout<<"inside int block1"<<endl;
		cout<<"can not divide by zero"<<endl;
	}
	catch(float value)
	{
		cout<<"inside float block"<<endl;
		cout<<"can not divide by zero"<<endl;
	}
	catch(double value)
	{
		cout<<"inside double block"<<endl;
		cout<<"can not divide by zero"<<endl;
	}
	catch(bool value)
	{
		cout<<"inside bool block"<<endl;
		cout<<"can not divide by zero"<<endl;
	}
	catch(...)
	{
		cout<<"inside Generic block"<<endl;
		cout<<"can not divide by zero"<<endl;
	}

	return 0;
}
