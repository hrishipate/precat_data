#include <iostream>
using namespace std;

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

	};//end of class Complex
}//end of namespace NComplex
using namespace NComplex;
int main()
{
	Complex c1;
	int r, i;
	cout<<"enter data for c1 :: "<<endl;

	cout<<"enter real value :: ";
	cin>>r;
	cout<<"enter imag value :: ";
	cin>>i;

	c1.SetReal(r);
	c1.SetImag(i);

	cout<<" c1 :: "<<endl;
	r=c1.GetReal();
	i=c1.GetImag();

	cout<<"real =" <<r<<endl;
	cout<<"imag =" <<i<<endl;



	return 0;
}
