#include <iostream>
using namespace std;
int main()
{

	int a=10;
	int &r=a;  // r is a reference of a
	//int * const r= &a;

	cout<<"a = "<< a <<" &a = "<<&a<<endl;
	cout<<"r = "<< r <<" &r = "<<&r<<endl;

	cout<<"=========================="<<endl;
	a++;
	cout<<"a = "<< a <<" &a = "<<&a<<endl;
	cout<<"r = "<< r <<" &r = "<<&r<<endl;

	cout<<"=========================="<<endl;
	r++;
	cout<<"a = "<< a <<" &a = "<<&a<<endl;
	cout<<"r = "<< r <<" &r = "<<&r<<endl;

	cout<<"=========================="<<endl;

	r=NULL; // you can assign NULL to reference

	cout<<"a = "<< a <<" &a = "<<&a<<endl;
	cout<<"r = "<< r <<" &r = "<<&r<<endl;

	{
		//we can not init reference to NULL at the time decl.
		//int &r1=NULL;

		//we  can not create reference to constants
		//int &r2=100;
		//we have to create a reference to objects / variables
		int a1=100;
		int &r1=a1;
		cout<<"a1 = "<< a1 <<" &a1 = "<<&a1<<endl;
		cout<<"r1 = "<< r1 <<" &r1 = "<<&r1<<endl;



	}
	return 0;
}
