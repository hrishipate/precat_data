#include <iostream>
using namespace std;
#include<cstring>
//#include<string.h>

namespace NException
{
	class Exception
	{
		private:
			int errorNo;
			char errorMessage[40];
		public:
			Exception(int errorno, char* errormessage)
			{
				this->errorNo= errorno;
				strcpy(this->errorMessage, errormessage);
			}
			void PrintErrorMessage()
			{
				cout<<"Error No ="<<this->errorNo<<endl;
				cout<<"Error Message ="<<this->errorMessage<<endl;
				cout<<"File Name = "<<__FILE__<<endl;
				cout<<"Date = "<<__DATE__<<endl;
				cout<<"Time = "<<__TIME__<<endl;
			}
	}; // end of class Exception

}// end of namespace Exception
using namespace NException;
int main()
{
	int x=10 , y=0 , result=0;
	try
	{
		//namespaceName::ClassName objectName(parameters)
		//NException::Exception ex(__LINE__+11, "Error! Can not divide by zero ");
		if(y==0)
		{
		       // className (parameters)
			throw Exception(__LINE__+9, "Error! Can not divide by zero " );
			//throw ex;
			//throw true; // bool data type
			//throw 'A'; // char data type
			//throw 10.2; // int data type
			//throw 1; // int data type
		}
		else
		{
			result=x/y;
			cout<<"result="<<result<<endl;
		}
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
	catch(Exception& ex)
	{
		cout<<"inside exception block"<<endl;
		ex.PrintErrorMessage();
	}

	catch(...)
	{
		cout<<"inside Generic block"<<endl;
		cout<<"can not divide by zero"<<endl;
	}

	return 0;
}
