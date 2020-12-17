#include<iostream>
using namespace std;

namespace NConstDemo
{
	class ConstDemo
	{
		private:
		// const data member
		//const int a=100; allowed in cpp 11 std
		const int a;
		const int b;
		// non const data member
		int c;
		mutable int d;

		public:
		// ctor init list
		ConstDemo():a(10), b(20), c(30), d(40)
		{
			//this->a=10; error as a and b are const data member
			//this->b=20;
			//this->c=30; // allowed as c and d are non const data member
			//this->d=40;
		}
		// ctor init list
		ConstDemo(int a, int b, int c, int d):a(a), b(b), c(c), d(d)
		{

		}

		// in constant member fun we can not change the state of the object
		//void Print(const  className * const this) const
		//void Print(const ConstDemo * const this) const
		void Print()const
		{
			//	this->a=1; // error as a and b are const
			//	this->b=2;
				//this->c=3; // error as member fun is const
				this->d=4; // as d is mutable
			cout<<"this->a :: "<<this->a<<endl;
			cout<<"this->b :: "<<this->b<<endl;
			cout<<"this->c :: "<<this->c<<endl;
			cout<<"this->d :: "<<this->d<<endl;


			//this->Display();// error

			cout<<"***inside print ***"<<endl;

			ConstDemo * const ptr=const_cast<ConstDemo*const>(this);
			ptr->Display();



		}

		//void Display( className * const this)
		//void Display( ConstDemo * const this)
		void Display()
		{
			cout<<"***inside display ***"<<endl;
			//	this->a=1; // error as a and b are const
			//	this->b=2;
			this->c=3; // allowed as display is non const member fun
			this->d=4;
			cout<<"this->a :: "<<this->a<<endl;
			cout<<"this->b :: "<<this->b<<endl;
			cout<<"this->c :: "<<this->c<<endl;
			cout<<"this->d :: "<<this->d<<endl;
		}


		~ConstDemo()
		{
			//this->a=0;  error as a and b are const data member
			//this->b=0;
			this->c=0; // allowed as c and d are non const data member
			this->d=0;
		}

	};//end of class ConstDemo
}//end of namespace NConstDemo

using namespace NConstDemo;
int main()
{

	const ConstDemo c3(11,22,33,44);
	cout<<"size of c3= "<<sizeof(c3)<<endl;
	cout<<"c3:: print"<<endl;
	// const object can call  const member fun of class
	c3.Print();


	//cout<<"c3:: display"<<endl;
	// const object can not call  non const member fun of class
	//c3.Display();


	return 0;
}
