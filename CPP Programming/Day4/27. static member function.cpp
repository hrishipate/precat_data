#include <iostream>
using namespace std;

namespace NMaths
{
	class Maths
	{

		public:

			static int Sum(int n1, int n2)
			{
				return n1+n2;
			}
			static int Minus(int n1, int n2)
			{
				return n1-n2;
			}
	};//end of maths class

}//end of Namespace NMath
using namespace NMaths;
int main()
{
	int result;

	result = Maths::Sum(10,20);
	cout<<"result = sum using className "<<result<<endl;

	result = Maths::Minus(10,20);
	cout<<"result = minus using className "<<result<<endl;

	Maths objMathsInstance;

	result = objMathsInstance.Sum(10, 20);
	cout<<"result = sum using object Name "<<result<<endl;

	result = objMathsInstance.Minus(10, 20);
	cout<<"result = minus using object Name "<<result<<endl;


	return 0;
}
