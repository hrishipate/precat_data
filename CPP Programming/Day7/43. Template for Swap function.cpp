#include <iostream>
using namespace std;

namespace NSwap
{
	template<class Type> // 1 add this befoe funname
	//void Swap(int &n1, int &n2) // 2 replace int with Type
	void Swap(Type &n1, Type &n2)
	{
		//int temp;
		Type temp;
		temp=n1;
		n1=n2;
		n2=temp;
	}
}
int main()
{
	{
		cout<<"int data type "<<endl;
		int no1=10, no2=20;
		cout<<"before swap no1="<<no1<<" no2="<<no2<<endl;
		NSwap::Swap(no1, no2); // int
		cout<<"After swap no1="<<no1<<" no2="<<no2<<endl;
	}
	cout<<"============================================"<<endl;
	{
			cout<<"float data type "<<endl;
			float no1=10.45, no2=20.2;
			cout<<"before swap no1="<<no1<<" no2="<<no2<<endl;
			NSwap::Swap(no1, no2); // float
			cout<<"After swap no1="<<no1<<" no2="<<no2<<endl;
	}
	cout<<"============================================"<<endl;
	{
			cout<<"char data type "<<endl;
			char no1='A', no2='B';
			cout<<"before swap no1="<<no1<<" no2="<<no2<<endl;
			NSwap::Swap(no1, no2); // char
			cout<<"After swap no1="<<no1<<" no2="<<no2<<endl;
	}
	cout<<"============================================"<<endl;
	return 0;
}
