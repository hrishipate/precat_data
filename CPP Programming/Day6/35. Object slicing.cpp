#include <iostream>
using namespace std;
#pragma pack(1)
namespace NObjectSlicing
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



}// end of namespace NObjectSlicing
using namespace NObjectSlicing;
int main()
{
	Base obj1; // parameterless ctor of class Base

	cout<<"obj1 :: "<<endl;
	obj1.Print();
	cout<<"size of obj1 :: "<<sizeof(obj1)<<endl;

	Derived obj2(50,60, 70); // parameterized ctor of Derived
	cout<<"obj2 :: "<<endl;
	obj2.Print();
	cout<<"size of obj2 :: "<<sizeof(obj2)<<endl;

	obj1=obj2; //object slicing
	cout<<"============================================"<<endl;
	cout<<"obj1 :: after object slicing "<<endl;
	obj1.Print();
	cout<<"size of obj1 :: "<<sizeof(obj1)<<endl;


	//obj2=obj1; //error


	return 0;
}
