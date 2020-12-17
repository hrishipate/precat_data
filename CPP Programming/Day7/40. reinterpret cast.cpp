
#include <iostream>
using namespace std;

namespace NComplex
{
	class Complex
	{
		private:
			// variable or data members or fields
			int real;
			int imag;
		public:
			// member function or methods
			//1.1 input
			//void AcceptInputFromConsole(className * const this)
			//void AcceptInputFromConsole(Complex * const this)
			//c1.AcceptInputFromConsole() ---> this=&c1;
			void AcceptInputFromConsole()
			{
				cout<<"Enter Real :: ";
				cin>>this->real;
				cout<<"Enter Imag :: ";
				cin>>this->imag;
			}

			//1.2 output
			//void PrintOutputOnConsole(Complex * const this )
			void PrintOutputOnConsole()
			{
				cout<<"this->real="<<this->real<<"\t["<< &this->real<<" ] "<<endl;
				cout<<"this->imag="<<this->imag<<"\t["<< &this->imag<<" ] "<<endl;
			}

			//2. getter methods or inspectors
			// dont modify the state of the object
			//int GetReal(Complex * const this)
			int GetReal()
			{
				return this->real;
			}
			int GetImag()
			{
				return this->imag;
			}

			//3. setter methods or mutators
			// modify state of the object
			//void SetReal(Complex * const this,int real)
			void SetReal(int real)
			{
				this->real= real;
			}

			//void SetImag(Complex * const this,int imag)
			void SetImag(int imag)
			{
				this->imag= imag;
			}

			// 4.1 parameterless ctor or no arguments ctor
			//Complex(Complex * const this)
			Complex()
			{
				this->real=10;
				this->imag=20;
				cout<<"inside parameterless ctor of Complex class"<<endl;
			}

			// 4.2 parameterized ctor or( 2 arguments ctor)
			//Complex(Complex * const this,int real, int imag)
			Complex(int real, int imag)
			{
				this->real=real;
				this->imag=imag;
				cout<<"inside parameterized ctor of Complex class"<<endl;
			}

			// 5 dtor
			//~Complex(Complex *const this)
			~Complex()
			{
				this->real=0;
				this->imag=0;
				cout<<"inside dtor of Complex class"<<endl;
			}
	};//end of Complex class

}//end of namespace

using namespace NComplex;
int main()
{
	Complex c1;
	Complex *ptrComplex=&c1;

	cout<<"c1 ::"<<endl; // before update
	c1.PrintOutputOnConsole();

	int *ptr=reinterpret_cast<int*>(ptrComplex);

	*ptr=200;
	ptr=ptr+1;
	*ptr=300;

	cout<<"c1 ::"<<endl; //after update
	c1.PrintOutputOnConsole();


	return 0;
}
