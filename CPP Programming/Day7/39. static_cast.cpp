#include<iostream>
using namespace std;

int main()
{
	double pi=3.142;

	cout<<"pi="<<pi<<endl;

	int no  = static_cast<int>(pi); // cpp style
	int no1 = (int)pi; //c style

	cout<<"pi="<<pi<<endl;
	cout<<"no="<<no<<endl;
	cout<<"no1="<<no1<<endl;


	return 0;
}
