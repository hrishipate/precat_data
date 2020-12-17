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


	};//end of class Complex
}//end of namespace NComplex
using namespace NComplex;
int main()
{
	Complex c1;
	cout<<"enter data for c1 :: \n";
	c1.AcceptInputFromConsole();

	cout<<"c1::"<<endl;
	c1.PrintOutputOnConsole();



	return 0;
}
