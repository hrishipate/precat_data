#include <iostream>
using namespace std;
namespace NDiamondProblem
{
	class A
	{
		public:
			int a;

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

	class B: public A
	{
		public:
			int b;

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
				cout<<"this->a :: "<<this->a<<" [ "<<&this->a<<" ]"<<endl;
				cout<<"this->b :: "<<this->b<<" [ "<<&this->b<<" ]"<<endl;
			}
			~B()
			{
				this->b=0;
				cout<<"inside dtor of class B"<<endl;
			}


	};//end of class B

	class C: public A
	{
		public:
			int c;

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
				cout<<"this->a :: "<<this->a<<" [ "<<&this->a<<" ]"<<endl;
				cout<<"this->c :: "<<this->c<<" [ "<<&this->c<<" ]"<<endl;
			}
			~C()
			{
				this->c=0;
				cout<<"inside dtor of class C"<<endl;
			}


		};//end of class C

	//class D: public B, public C
	class D: public C, public B
	{
		public:
			int d;
			D()
			{
				this->d=40;
				cout<<"inside parameterless ctor of class D"<<endl;
			}
			D(int a, int b, int c, int d):B(a, b),C(a,c)
			{
				this->d=d;
				cout<<"inside parameterized ctor of class D"<<endl;
			}
			void Print()
			{
				B::Print();
				C::Print();
				cout<<"inside class D "<<endl;
				// a is ambiguous this is a diamond problem
				//cout<<"this->a :: "<<this->a<<" [ "<<&this->a<<" ]"<<endl;

				//solno1
				cout<<"this->B::a ::  via class B "<<this->B::a<<" [ "<<&this->B::a<<" ]"<<endl;
				cout<<"this->C::a ::  via class C "<<this->C::a<<" [ "<<&this->C::a<<" ]"<<endl;
				cout<<"this->b :: "<<this->b<<" [ "<<&this->b<<" ]"<<endl;
				cout<<"this->c :: "<<this->c<<" [ "<<&this->c<<" ]"<<endl;
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

	/*B objInstance1; // parameterless ctor of classB
	cout<<"objInstance1 :: "<<endl;
	objInstance1.Print();
	cout<<"size of objInstance1 = "<<sizeof(objInstance1)<<endl;
	cout<<"============================================================"<<endl;
	cout<<"in main :: "<<endl;
	cout<<"objInstance1.a :: "<<objInstance1.a<<" [ "<<&objInstance1.a<<" ]"<<endl;
	cout<<"objInstance1.b :: "<<objInstance1.b<<" [ "<<&objInstance1.b<<" ]"<<endl;
	*/

	/*B objInstance2(111,222); // parameterized ctor of classB
	cout<<"objInstance2 :: "<<endl;
	objInstance2.Print();
	cout<<"size of objInstance2 = "<<sizeof(objInstance2)<<endl;
	cout<<"============================================================"<<endl;
	cout<<"in main :: "<<endl;
	cout<<"objInstance2.a :: "<<objInstance2.a<<" [ "<<&objInstance2.a<<" ]"<<endl;
	cout<<"objInstance2.b :: "<<objInstance2.b<<" [ "<<&objInstance2.b<<" ]"<<endl;
*/

	/*C objInstance1; // parameterless ctor of classC
	cout<<"objInstance1 :: "<<endl;
	objInstance1.Print();
	cout<<"size of objInstance1 = "<<sizeof(objInstance1)<<endl;
	cout<<"============================================================"<<endl;
	cout<<"in main :: "<<endl;
	cout<<"objInstance1.a :: "<<objInstance1.a<<" [ "<<&objInstance1.a<<" ]"<<endl;
	cout<<"objInstance1.c :: "<<objInstance1.c<<" [ "<<&objInstance1.c<<" ]"<<endl;
*/

	/*C objInstance1(100,300); // parameterized ctor of classC
	cout<<"objInstance1 :: "<<endl;
	objInstance1.Print();
	cout<<"size of objInstance1 = "<<sizeof(objInstance1)<<endl;
	cout<<"============================================================"<<endl;
	cout<<"in main :: "<<endl;
	cout<<"objInstance1.a :: "<<objInstance1.a<<" [ "<<&objInstance1.a<<" ]"<<endl;
	cout<<"objInstance1.c :: "<<objInstance1.c<<" [ "<<&objInstance1.c<<" ]"<<endl;
*/

	/*D objInstance1; // parameterless ctor of classD
	cout<<"objInstance1 :: "<<endl;
	objInstance1.Print();
	cout<<"size of objInstance1 = "<<sizeof(objInstance1)<<endl;
	cout<<"============================================================"<<endl;
	cout<<"in main :: "<<endl;
	// a is ambiguous this is a diamond problem
	//cout<<"objInstance1.a :: "<<objInstance1.a<<" [ "<<&objInstance1.a<<" ]"<<endl;

	// sol1 of diamondProblem
	cout<<"objInstance1.B::a :: via class B "<<objInstance1.B::a<<" [ "<<&objInstance1.B::a<<" ]"<<endl;
	cout<<"objInstance1.C::a :: via class C "<<objInstance1.C::a<<" [ "<<&objInstance1.C::a<<" ]"<<endl;
	cout<<"objInstance1.b :: "<<objInstance1.b<<" [ "<<&objInstance1.b<<" ]"<<endl;
	cout<<"objInstance1.c :: "<<objInstance1.c<<" [ "<<&objInstance1.c<<" ]"<<endl;
	cout<<"objInstance1.d :: "<<objInstance1.d<<" [ "<<&objInstance1.d<<" ]"<<endl;
*/

	D objInstance2(111,222,333,444); // parameterized ctor of classD
	cout<<"objInstance2 :: "<<endl;
	objInstance2.Print();
	cout<<"size of objInstance2 = "<<sizeof(objInstance2)<<endl;
	cout<<"============================================================"<<endl;
	cout<<"in main :: "<<endl;
	// a is ambiguous this is a diamond problem
	//cout<<"objInstance2.a :: "<<objInstance2.a<<" [ "<<&objInstance2.a<<" ]"<<endl;

	// sol1 of diamondProblem
	cout<<"objInstance2.B::a :: via class B "<<objInstance2.B::a<<" [ "<<&objInstance2.B::a<<" ]"<<endl;
	cout<<"objInstance2.C::a :: via class C "<<objInstance2.C::a<<" [ "<<&objInstance2.C::a<<" ]"<<endl;
	cout<<"objInstance2.b :: "<<objInstance2.b<<" [ "<<&objInstance2.b<<" ]"<<endl;
	cout<<"objInstance2.c :: "<<objInstance2.c<<" [ "<<&objInstance2.c<<" ]"<<endl;
	cout<<"objInstance2.d :: "<<objInstance2.d<<" [ "<<&objInstance2.d<<" ]"<<endl;
	return 0;
}
