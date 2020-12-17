#include<iostream>
#include<cstring>
#pragma pack(1)
using namespace std;
namespace NUpDownCasting
{
	class Base
	{
		private:
			int a;
			int b;
		public:
			Base()
			{
				this->a=0;
				this->b=0;
				cout<<"inside parameterless ctor of Class Base"<<endl;
			}
			Base(int a, int b)
			{
				this->a=a;
				this->b=b;
				cout<<"inside parameterized ctor of Class Base"<<endl;
			}
			virtual void Print()
			{
				cout<<"inside class Base ::"<<endl;
				cout<<"this->a ::"<<this->a<<" ["<<&this->a <<" ]"<<endl;
				cout<<"this->b ::"<<this->b<<" ["<<&this->b <<" ]"<<endl;
			}
			~Base()
			{
				this->a=0;
				this->b=0;
				cout<<"inside dtor of Class Base"<<endl;
			}

	};//end of class Base

	class Derived :public Base
	{
		private:
			int c;
		public:
			Derived()
			{
				this->c=0;
				cout<<"inside parameterless ctor of Class Derived"<<endl;
			}
			Derived(int a, int b, int c):Base(a,b)
			{
				this->c=c;
				cout<<"inside parameterzied ctor of Class Derived"<<endl;
			}
			void Print()
			{
				Base::Print();
				cout<<"inside class Derived :: "<<endl;
				cout<<"this->c ::"<<this->c<<" ["<<&this->c <<" ]"<<endl;
			}

			~Derived()
			{
				this->c=0;
				cout<<"inside dtor of Class Derived"<<endl;
			}
	};//end of class Derived

};//end of
using  namespace NUpDownCasting;
int main()
{
	Base *ptrBase=new Base(10,20);

	Derived * ptrDerived= dynamic_cast<Derived*>(ptrBase); //downcasting

	if(ptrDerived!=NULL)
	{
		ptrDerived->Print();
	}
	else
		cout<<"NULL pointer"<<endl;

	cout<<"================================================"<<endl;
	Base *ptrBase1=new Derived(50,60,70);

	Derived *ptrDerived1= dynamic_cast<Derived*>(ptrBase1); //down casting
	if(ptrDerived1!=NULL)
	{
		ptrDerived1->Print();
	}
	else
		cout<<"NULL pointer"<<endl;


	return 0;
}
