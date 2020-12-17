
#include <iostream>
using namespace std;

namespace NConstDemo
{
	class ConstDemo
	{
		private:
			//const int a=10; //allowed in cpp 11 std
			const int a;
			const int b;
			int c;
			mutable int d;

		public:
		// ctor init list
		ConstDemo():a(10),b(20), c(30), d(40)
		{
			//this->a=10; error as a and b are constant data members
			//this->b=20;
		//	this->c=30;  // allowed as c and d are non constant data members
			//this->d=40;
		}

		ConstDemo(int a, int b, int c,int d):a(a), b(b), c(c), d(d)
		{
			//this->a=a; // error as a and b are constant data members
			//this->b=b;
			//this->c=c;// allowed as  c and d are non constant data members
			//this->d=d;
		}

		// if we make member fun const we can not change the state of object
		// if we make member fun const it change the type this pointer to
		// const classname * const this

		//void Print(const ConstDemo * const this)const
		void Print()const
		{
			//this->a=999; error as a and b are constant data members
			//this->b=999;

			//this->c=999; // erorr as member fun is constant
			this->d=999; // allowed as d is mutable

			cout<<"this->a :: "<<this->a<<endl;
			cout<<"this->b :: "<<this->b<<endl;
			cout<<"this->c :: "<<this->c<<endl;
			cout<<"this->d :: "<<this->d<<endl;
		}

		// non constant member can modify state of object
		// void Display(ConstDemo * const this)
		void Display()
		{
			//this->a=888; // error as a and b is constant
			//this->b=888;
			this->c=888; // allowed as c and d are not constant data members
			this->d=888;
			cout<<"this->a :: "<<this->a<<endl;
			cout<<"this->b :: "<<this->b<<endl;
			cout<<"this->c :: "<<this->c<<endl;
			cout<<"this->d :: "<<this->d<<endl;
		}
		~ConstDemo()
		{
			//this->a=10; error as a and b are constant data members
			//this->b=20;
			this->c=0;  // allowed as c and d are non constant data members
			this->d=0;
		}

	}; //end of ConstDemo class

}// end of namespace NConstDemo

using namespace NConstDemo;
int main()
{
	// ConstDemo * const this;
	ConstDemo c1; // non const object
	cout<<"c1 Print()"<<endl;
	c1.Print();

	// non const object can call both 1. constant as well as
	//2 .non const member function

	cout<<"c1 Display()"<<endl;
	c1.Display();

	cout<<"size of c1 = "<<sizeof(c1)<<endl;



	ConstDemo c2(111,222,333,444);
	cout<<"c2 Print()"<<endl;
	c2.Print();
	cout<<"size of c2 = "<<sizeof(c2)<<endl;


	// const ConstDemo * const this;
	const ConstDemo c3; // object is const

	//constant object can call only constant member fun as there
	// this pointer is same (const ConstDemo * const this)

	//constant object can not call only non constant member fun
	//as there this pointers are different
	// objects this pointer -- const ConstDemo * const this;
	//                               ConstDemo * const this;


	cout<<"c3 print ()"<<endl;
	c3.Print();
	//cout<<"c3 display ()"<<endl;
//	c3.Display();


	return 0;
}
