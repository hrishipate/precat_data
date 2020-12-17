
#include <iostream>
using namespace std;

int main()
{

	const float pi=3.142; //constant variable
	//float *ptr=&pi; // error in cpp  as value of pointer is not const

	const float *ptr=&pi; // allowed int cpp as value of pointer is constant and
	// address of pointer is not constant

	//pi=3.15;// error as pi is constant

	cout<<"\n *ptr"<<*ptr <<" pi"<< pi<<endl;
	//*ptr= 3.15; // not allowed in cpp as value of pointer is  constant
	cout<<"\n *ptr"<<*ptr <<" pi"<< pi<<endl;
	return 0;
}
