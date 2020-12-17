#include <iostream>
using namespace std;
#include<cstdlib> //or //#include<stdlib.h>
namespace NComplex
{
	class Complex
	{
		private:
			int real;
			int imag;
		public:

			//void AcceptInputFromConsole(Complex * const this)
			//1.1 input
			void AcceptInputFromConsole()
			{
				cout<<"this->real :: ";
				cin>>this->real;
				cout<<"this->imag :: ";
				cin>>this->imag;
			}
			//1.2 output
			//void PrintOutputOnConsole(Complex * const this)
			void PrintOutputOnConsole()
			{
				cout<<"this->real :: "<<this->real<<" [ "<< &this->real <<" ] "<<endl;
				cout<<"this->imag :: "<<this->imag<<" [ "<< &this->real <<" ] "<<endl;
			}
			//2.0 setter methods or mutators
			//mutators -->> modify state of objects

			//void SetReal(Complex * const this,int real)
			void SetReal(int real)
			{
				this->real=real;
			}
			//void SetImag(Complex * const this, int imag)
			void SetImag(int imag)
			{
				this->imag=imag;
			}

			// 3.0 getter methods or inspectors
			// inspcetors - dont modify state of the object
			//int GetReal(Complex *const this)
			int GetReal()
			{
				return this->real;
			}

			//int GetImag(Complex * const this)
			int GetImag()
			{
				return this->imag;
			}

			//4.1 parameterless ctor or no argument ctor
			//Complex (Complex * const this)
			Complex ()
			{
				this->real=10;
				this->imag=20;
				cout<<"inside parameterless ctor of Complex class"<<endl;
			}

			//4.2 parameterized ctor or 1 argument ctor
			//Complex (Complex * const this,int value)
			Complex (int value)
			{
				this->real=value;
				this->imag=value;
				cout<<"inside parameterized (1 argument ctor)ctor of Complex class"<<endl;
			}

			//4.3 parameterized ctor or 2 argument ctor
			//Complex (Complex * const this,int real, int imag)
			Complex (int real, int imag)
			{
				this->real=real;
				this->imag=imag;
				cout<<"inside parameterized (2 arguments ctor)ctor of Complex class"<<endl;
			}
			//5.0 dtor
			~Complex()
			{
				cout<<"================================"<<endl;
				this->PrintOutputOnConsole();
				cout<<"================================"<<endl;
				this->real=0;
				this->imag=0;
				cout<<" inside dtor of Complex class"<<endl;
			}


	};//end of class Complex
}//end of namespace NComplex
using namespace NComplex;
//Complex c2;
int main()
{
	Complex *ptr1= (Complex*)malloc(sizeof(Complex)*1);
	cout<<"ptr1="<<endl;
	ptr1->PrintOutputOnConsole();

	free(ptr1);
	ptr1=NULL;
	cout<<"Memory is freed"<<endl;

	cout<<"==========================================="<<endl;

	Complex *ptr2= new Complex; // parameterless ctor

	cout<<"ptr2="<<endl;
	ptr2->PrintOutputOnConsole();

	delete ptr2;
	ptr2=NULL;
	cout<<"Memory is freed"<<endl;

	cout<<"==========================================="<<endl;

	//Complex *ptr3= new Complex(111,222); // parameterized ctor
	int r, i;
	cout<<"Enter real no ::  ";
	cin>>r;
	cout<<"Enter imag no :: ";
	cin>>i;

	Complex *ptr3= new Complex(r,i); // parameterized ctor

	cout<<"ptr3="<<endl;
	ptr3->PrintOutputOnConsole();

	delete ptr3;
	ptr3=NULL;
	cout<<"Memory is freed"<<endl;

	cout<<"==========================================="<<endl;

	return 0;
}
