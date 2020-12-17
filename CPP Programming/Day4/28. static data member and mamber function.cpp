#include <iostream>
using namespace std;

namespace NStaticDemo
{
	class StaticDemo
	{
		private:
			int id;
			int a;
			int b;
			static int counter;
		public:
			StaticDemo()
			{
				StaticDemo::counter= StaticDemo::counter+1;
				this->id=StaticDemo::counter;
				this->a=10;
				this->b=20;
			}
			StaticDemo(int a, int b)
			{
				StaticDemo::counter= StaticDemo::counter+1;
				this->id=StaticDemo::counter;
				this->a=a;
				this->b=b;

			}
			void Print()
			{
				cout<<"this->id :: "<<this->id<<"["<< &this->id<<"]"<<endl;
				cout<<"this->a :: "<<this->a<<"["<< &this->a<<"]"<<endl;
				cout<<"this->b :: "<<this->b<<"["<< &this->b<<"]"<<endl;
				cout<<"StaticDemo::counter :: "<<StaticDemo::counter<<"["<< &StaticDemo::counter<<"]"<<endl;

			}
			~StaticDemo()
			{
				this->id=0;
				this->a=0;
				this->b=0;
			}


	};//end of class StaticDemp
	int StaticDemo::counter; // global defination
	//int StaticDemo::counter=100;
}

using namespace NStaticDemo;
int main()
{
	StaticDemo s1;

	cout<<"s1 :: "<<endl;
	s1.Print();
	cout<<"size of s1="<<sizeof(s1)<<endl;

	StaticDemo s2;
	cout<<"s2 :: "<<endl;
	s2.Print();
	cout<<"size of s2="<<sizeof(s1)<<endl;

	StaticDemo s3, s4;
	cout<<"s3 :: "<<endl;
	s3.Print();
	cout<<"size of s3="<<sizeof(s3)<<endl;



		cout<<"s4 :: "<<endl;
		s4.Print();
		cout<<"size of s4="<<sizeof(s4)<<endl;

		cout<<"s1 :: "<<endl;
			s1.Print();
			cout<<"size of s1="<<sizeof(s1)<<endl;


	return 0;
}
