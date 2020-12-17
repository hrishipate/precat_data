
#include <iostream>
using namespace std;
//void swap(int n1, int n2); // call by value
//void swap(int *n1, int *n2); // call by address
void swap(int &n1, int &n2); // call by reference
int main()
{
	int no1=10, no2=20;
	cout<<"before swap no1="<< no1 <<"["<< &no1 <<"]"<< "\t no2=" <<no2<<"["<<&no1<<"]"<<endl;
	swap(no1, no2); // call by reference
	cout<<"after swap no1="<< no1 <<"["<< &no1 <<"]"<< "\t no2=" <<no2<<"["<<&no1<<"]"<<endl;
	return 0;
}
// n1 is reference of no1
// n2 is reference of no2
void swap(int &n1, int &n2)
{
	int temp;
	cout<<"before swap in swap n1="<< n1 <<"["<< &n1 <<"]"<< "\t n2=" <<n2<<"["<<&n1<<"]"<<endl;
	temp=n1;
	n1=n2;
	n2=temp;
	cout<<"before swap in swap n1="<< n1 <<"["<< &n1 <<"]"<< "\t n2=" <<n2<<"["<<&n1<<"]"<<endl;
}
