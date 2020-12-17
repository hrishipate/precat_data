
#include <iostream>
using namespace std;

int main()
{
	const int a=100;
	const int &r=a;
	// const int * const r=&a;

	cout<<"a= "<<a<<" &a = " <<&a<<endl;
	cout<<"r= "<<r<<" &r = " <<&r<<endl;
	// r=1000; not allowed as ref is const
	// a=1000; not allowed as object is const
	return 0;
}
