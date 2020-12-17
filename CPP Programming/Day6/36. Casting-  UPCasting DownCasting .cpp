#include <iostream>
using namespace std;
#pragma pack(1)
namespace NCasting
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
				cout<<"inside parameterless ctor of class Base"<<endl;
			}
			Base(int a, int b)
			{
				this->a=a;
				this->b=b;
				cout<<"inside parameterized ctor of class Base"<<endl;
			}
			void Print()
			{
				cout<<"inside class Base :: "<<endl;
				cout<<"this->a :: "<<this->a<<" [ "<<&this->a<<" ]"<<endl;
				cout<<"this->b :: "<<this->b<<" [ "<<&this->b<<" ]"<<endl;
			}

			~Base()
			{
				this->a=0;
				this->b=0;
				cout<<"inside dtor of class Base"<<endl;
			}
	};// End of class Base

	class Derived: public Base
	{
		private:
			int c;
		public:
			Derived()
			{
				this->c=30;
				cout<<"inside parameterless ctor of class Derived"<<endl;
			}
			Derived(int a, int b, int  c ):Base(a, b)
			{
				this->c=c;
				cout<<"inside parameterized ctor of class Derived"<<endl;
			}
			void Print()
			{
				Base::Print();
				cout<<"inside class Derived::"<<endl;
				cout<<"this->c :: "<<this->c<<" [ "<<&this->c<<" ]"<<endl;
			}

			~Derived()
			{
				this->c=0;
				cout<<"inside dtor of class Derived"<<endl;
			}


	};//end of class Derived



}// end of namespace NCasting
using namespace NCasting;
int main()
{
	Base *ptrBase1=NULL;
	Derived objDerived1;
	cout<<"objDerived1 :: "<<endl;
	ptrBase1=&objDerived1; // up casting allowed
	ptrBase1->Print();

	Base *ptrBase2= new Derived(11,22,33); // up casting allowed
	cout<<"objDerived2 :: "<<endl;
	ptrBase2->Print();
	delete ptrBase2;
	ptrBase2=NULL;

	Derived *ptrDerived1=NULL;
	Base objBase1;
	cout<<"ptrDerived1 :: "<<endl;
//	ptrDerived1=&objBase1; // down casting error


	//Derived *ptrDerived2=new Base; // down casting error
	//cout<<"ptrDerived1 :: "<<endl;
	//ptrDerived2->Print();
	//delete ptrDerived2;
	//ptrDerived2=NULL;



	return 0;
}
