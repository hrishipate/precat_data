#include <iostream>
using namespace std;
#pragma pack(1)
namespace NDiamondProblem
{
	class A
	{
		private:
			int a;
		public:

			A()
			{
				this->a=10;
				cout<<"inside parameterless ctor of class A"<<endl;
			}
			A(int a)
			{
				this->a=a;
				cout<<"inside parameterized ctor of class A"<<endl;
			}
			void Print()
			{
				cout<<"inside class A :: "<<endl;
				cout<<"this->a :: "<<this->a<<" [ "<<&this->a<<" ]"<<endl;
			}

			~A()
			{
				this->a=0;
				cout<<"inside dtor of class A"<<endl;
			}
	};// End of class A

	class B: virtual public A
	{
		private:
			int b;
		public:
			B()
			{
				this->b=20;
				cout<<"inside parameterless ctor of class B"<<endl;
			}
			B(int a, int b):A(a)
			{
				this->b=b;
				cout<<"inside parameterized ctor of class B"<<endl;
			}
			void Print()
			{
				A::Print();
				cout<<"inside class B::"<<endl;
				cout<<"this->b :: "<<this->b<<" [ "<<&this->b<<" ]"<<endl;
			}
			void PrintOnlyB()
			{
				cout<<"inside class B::"<<endl;
				cout<<"this->b :: "<<this->b<<" [ "<<&this->b<<" ]"<<endl;
			}

			~B()
			{
				this->b=0;
				cout<<"inside dtor of class B"<<endl;
			}


	};//end of class B

	class C: virtual public A
	{
	private:
			int c;
		public:
			C()
			{
				this->c=30;
				cout<<"inside parameterless ctor of class C"<<endl;
			}
			C(int a, int c):A(a)
			{
				this->c=c;
				cout<<"inside parameterized ctor of class C"<<endl;
			}
			void Print()
			{
				A::Print();
				cout<<"inside class C::"<<endl;
				cout<<"this->c :: "<<this->c<<" [ "<<&this->c<<" ]"<<endl;
			}
			void PrintOnlyC()
			{
				cout<<"inside class C::"<<endl;
				cout<<"this->c :: "<<this->c<<" [ "<<&this->c<<" ]"<<endl;
			}

			~C()
			{
				this->c=0;
				cout<<"inside dtor of class C"<<endl;
			}


		};//end of class C

	//class D: public C, public B
	class D: public B, public C
	{
		private:
			int d;
		public:
			D()
			{
				this->d=40;
				cout<<"inside parameterless ctor of class D"<<endl;
			}
			D(int a, int b, int c, int d):B(a, b),C(a,c),A(a)
			{
				this->d=d;
				cout<<"inside parameterized ctor of class D"<<endl;
			}
			void Print()
			{
				A::Print();
				B::PrintOnlyB();
				C::PrintOnlyC();
				cout<<"inside class D "<<endl;
				cout<<"this->d :: "<<this->d<<" [ "<<&this->d<<" ]"<<endl;
			}
			~D()
			{
				this->d=0;
				cout<<"inside dtor of class D"<<endl;
			}



	};//end of class D


}// end of namespace NDiamondProblem
using namespace NDiamondProblem;
int main()
{
	/*A objInstance1; // parameterless ctor of classA
	cout<<"objInstance1 :: "<<endl;
	objInstance1.Print();
	cout<<"size of objInstance1 = "<<sizeof(objInstance1)<<endl;
	cout<<"============================================================"<<endl;


	A objInstance2(100); // parameterized ctor of classA
	cout<<"objInstance2 :: "<<endl;
	objInstance2.Print();
	cout<<"size of objInstance2 = "<<sizeof(objInstance2)<<endl;
	cout<<"============================================================"<<endl;
*/

	B objInstance1; // parameterless ctor of classB
	cout<<"objInstance1 :: "<<endl;
	objInstance1.Print();
	cout<<"size of objInstance1 = "<<sizeof(objInstance1)<<endl;
	cout<<"============================================================"<<endl;


	/*B objInstance2(111,222); // parameterized ctor of classB
	cout<<"objInstance2 :: "<<endl;
	objInstance2.Print();
	cout<<"size of objInstance2 = "<<sizeof(objInstance2)<<endl;
	cout<<"============================================================"<<endl;
*/

	/*C objInstance1; // parameterless ctor of classC
	cout<<"objInstance1 :: "<<endl;
	objInstance1.Print();
	cout<<"size of objInstance1 = "<<sizeof(objInstance1)<<endl;
	cout<<"============================================================"<<endl;
*/

/*	C objInstance1(100,300); // parameterized ctor of classC
	cout<<"objInstance1 :: "<<endl;
	objInstance1.Print();
	cout<<"size of objInstance1 = "<<sizeof(objInstance1)<<endl;
	cout<<"============================================================"<<endl;
*/

	/*D objInstance1; // parameterless ctor of classD
	cout<<"objInstance1 :: "<<endl;
	objInstance1.Print();
	cout<<"size of objInstance1 = "<<sizeof(objInstance1)<<endl;
	cout<<"============================================================"<<endl;
*/

	/*D objInstance2(111,222,333,444); // parameterized ctor of classD
	cout<<"objInstance2 :: "<<endl;
	objInstance2.Print();
	cout<<"size of objInstance2 = "<<sizeof(objInstance2)<<endl;
	cout<<"============================================================"<<endl;
*/
	return 0;
}
