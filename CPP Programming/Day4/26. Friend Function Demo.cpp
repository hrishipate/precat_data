#include <iostream>
using namespace std;

namespace NFriendDemo
{
	class FriendDemo
	{
		private:
			int a;
			int b;

		public:
			FriendDemo()
			{
				this->a=10;
				this->b=20;
			}
			FriendDemo(int a, int b)
			{
				this->a=a;
				this->b=b;
			}
			void Print()
			{
				cout<<" this->a :: "<<this->a<<endl;
				cout<<" this->b :: "<<this->b<<endl;
			}
			~FriendDemo()
			{
				this->a=0;
				this->b=0;
			}

			friend int Sum();
	};//end of class FriendDemo

	int Sum()
	{
		FriendDemo objInstance1;
		int result= objInstance1.a + objInstance1.b;
		return result;
	}

}// end of namespace NFriendDemo

using namespace NFriendDemo;

int main()
{
	int result= Sum(); //NFriendDemo::Sum();
	cout<<"result="<<result<<endl;

	return 0;
}
