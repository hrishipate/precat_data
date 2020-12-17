
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
				cout<<"this->imag :: "<<this->imag<<" [ "<< &this->imag <<" ] "<<endl;
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

			// copy ctor
			Complex (const Complex& other)
			{
				//&c2      // other is a reference of c1
				this->real= other.real;
				this->imag= other.imag;
				cout<<"inside copy ctor of Complex class"<<endl;
			}
			//5.0 dtor
			~Complex()
			{
				this->real=0;
				this->imag=0;
				cout<<" inside dtor of Complex class"<<endl;
			}

			//Complex c3= c1.Minus(C2);

			Complex Minus(Complex &other1)
			{
				Complex temp;
	                      //&c1         other1 is reference of c2
				temp.real= this->real - other1.real;
				temp.imag= this->imag - other1.imag;
				return temp;
			}

			Complex operator-(Complex &other1)
			{
				Complex temp;
			    //&c1         other1 is reference of c2
				temp.real= this->real - other1.real;
				temp.imag= this->imag - other1.imag;
				return temp;
			}



	};//end of class Complex




}//end of name space NComplex
using namespace NComplex;
int main()
{
	// sub of 2 complex no using minus member function (cpp style)
	/*Complex c1(10, 20), c2(30,40);

	cout<<"c1 :: "<<endl;
	c1.PrintOutputOnConsole();

	cout<<"c2 :: "<<endl;
	c2.PrintOutputOnConsole();

	Complex c3= c1.Minus(c2);
	cout<<"c3 :: sub using member function (cpp style) "<<endl;
	c3.PrintOutputOnConsole();
	*/

	// cpp style using member functions
	// sub of 2 complex no using operator overloading as member function
	Complex c1(10, 20), c2(30,40);

	cout<<"c1 :: "<<endl;
	c1.PrintOutputOnConsole();

	cout<<"c2 :: "<<endl;
	c2.PrintOutputOnConsole();

	//Complex c3= c1.Minus(c2);
	//Complex c3= c1.operator-(c2);

	Complex c3= c1-c2;
	cout<<"c3 ::operator overloading using member function "<<endl;
	c3.PrintOutputOnConsole();


	return 0;
}