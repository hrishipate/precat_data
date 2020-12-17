#include <iostream>
using namespace std;
int main()
{

	int *ptr=NULL;
	//ptr= new int;
	ptr= new int(55); // 55 aasgin by default

	cout<<" &ptr="<<&ptr<<endl;
	cout<<" ptr="<<ptr<<endl;
	cout<<" *ptr="<<*ptr<<endl;
	//*ptr=125;
	cout<<"enter value for ptr ::";
	 cin>>*ptr; // allowed //cin>>ptr; not  allowed in cpp
	// scanf("%d", &ptr); allowed in c
	cout<<" *ptr="<<*ptr<<endl;

	delete ptr;
	ptr=NULL;
	cout<<"memory is freed"<<endl;
	//cout<<" *ptr="<<*ptr<<endl; not allowed to print after delete
	return 0;
}
