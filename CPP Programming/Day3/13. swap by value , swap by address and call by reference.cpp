#include <iostream>
using namespace std;
//void swap(int n1, int n2); //1. call value
void swap(int *n1, int *n2); //2. call address
void swap(int &n1, int &n2); //3. call reference
int main(void)
{
	// 1 .call by value
	{
	/*int no1=10, no2=20;
	cout<<"1 .call by value"<<endl;
	cout<<"\n before swap in main no1 ="<< no1 <<" [ "<< &no1 <<" ] "<<" no2 = "<< no2<<" ["<< &no2<<"]"<<endl;
	swap(no1,no2); // call by value
	swap(no1,no2); // call by reference
	// no1, no2 actual arguments
	cout<<"\n after swap in main no1 ="<<no1<<" ["<< &no1<<"] "<<" no2 = "<< no2<<" ["<< &no2<<"]"<<endl;
*/
	}
	cout<<"=============================================="<<endl;
	// 2 .call by address

	{
		int no1=10, no2=20;
		cout<<"2 .call by address"<<endl;
		cout<<"\n before swap in main no1 ="<< no1 <<" [ "<< &no1 <<" ] "<<" no2 = "<< no2<<" ["<< &no2<<"]"<<endl;

		swap(&no1,&no2); // call by address
		// no1, no2 actual arguments
		cout<<"\n after swap in main no1 ="<<no1<<" ["<< &no1<<"] "<<" no2 = "<< no2<<" ["<< &no2<<"]"<<endl;

	}
	cout<<"=============================================="<<endl;
	//3 .call by reference
	{

		int no1=10, no2=20;
		cout<<"3 .call by reference"<<endl;
		cout<<"\n before swap in main no1 ="<< no1 <<" [ "<< &no1 <<" ] "<<" no2 = "<< no2<<" ["<< &no2<<"]"<<endl;
		swap(no1,no2); // call by reference
		// no1, no2 actual arguments
		cout<<"\n after swap in main no1 ="<<no1<<" ["<< &no1<<"] "<<" no2 = "<< no2<<" ["<< &no2<<"]"<<endl;

	}
	cout<<"=============================================="<<endl;


	return 0;
}
//n1 n2 are formal argument //1. call by value
/*void swap(int n1, int n2)
{
	int temp=0;
	cout<<"\n before swap in swap n1 ="<<n1<<" ["<< &n1<<"] "<<" n2 = "<< n2<<" ["<< &n2<<"]"<<endl;
	temp=n1;  n1=n2; n2=temp;
	cout<<"\n after swap in swap n1 ="<<n1<<" ["<< &n1<<"] "<<" n2 = "<< n2<<" ["<< &n2<<"]"<<endl;
	return;
}*/

//n1 n2 are formal argument //2. call by address
void swap(int *n1, int *n2)
{
	int temp=0;
	cout<<"\n before swap in swap *n1 ="<<*n1<<" ["<< n1<<"] "<<" *n2 = "<< *n2<<" ["<< n2<<"]"<<endl;
	temp=*n1;  *n1=*n2; *n2=temp;
	cout<<"\n after swap in swap *n1 ="<<*n1<<" ["<< n1<<"] "<<" *n2 = "<< *n2<<" ["<< n2<<"]"<<endl;
	return;
}

//n1 is reference of no1 , n2 is reference of no2
//3. call by reference
void swap(int &n1, int &n2)
{
	int temp=0;
	cout<<"\n before swap in swap n1 ="<<n1<<" ["<< &n1<<"] "<<" n2 = "<< n2<<" ["<< &n2<<"]"<<endl;
	temp=n1;  n1=n2; n2=temp;
	cout<<"\n after swap in swap n1 ="<<n1<<" ["<< &n1<<"] "<<" n2 = "<< n2<<" ["<< &n2<<"]"<<endl;
	return;
}

