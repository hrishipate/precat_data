#include <iostream>
using namespace std;
#pragma pack(1)
#include<cstring> // or#include<string.h>
namespace NComposition
{
	class Date
	{
		private:
			int dd;
			int mm;
			int yy;

		public:

			Date()
			{
				this->dd=15;
				this->mm=2;
				this->yy=1999;
				cout<<"inside parameterless ctor of Date class"<<endl;
			}
			Date(int dd, int mm, int yy)
			{
				this->dd=dd;
				this->mm=mm;
				this->yy=yy;
				cout<<"inside parameterized ctor of Date class"<<endl;
			}
			void Print()
			{
				cout<<"date :: "<<endl;
				cout<<this->dd<<"/"<<this->mm<<"/"<<this->yy<<endl;
			}
			~Date()
			{
				this->dd=0;
				this->mm=0;
				this->yy=0;
				cout<<"inside dtor of Date class"<<endl;
			}

	};//end of date class

	class Address
	{
		private:
			char perAddress[30];
			char city[20];
			int pincode;

		public:

			Address()
			{
				strcpy(this->perAddress, "Market Yard");
				strcpy(this->city, "Pune");\
				this->pincode=432156;
				cout<<"inside parameterless ctor of Address class"<<endl;
			}
			Address(char *perAddress, char *city, int pincode)
			{
				strcpy(this->perAddress, perAddress);
				strcpy(this->city, city);\
				this->pincode=pincode;
				cout<<"inside parameterized ctor of Address class"<<endl;
			}
			void Print()
			{
				cout<<"address :: "<<endl;
				cout<<"PerAddress :: "<<this->perAddress<<endl;
				cout<<"City:: "<<this->city<<endl;
				cout<<"Pincode :: "<<this->pincode<<endl;
			}
			~Address()
			{
				strcpy(this->perAddress, " ");
				strcpy(this->city, " ");\
				this->pincode=0;
				cout<<"inside dtor of Address class"<<endl;
			}

	}; //end of address class

	class Person
	{
		private:
			char name[20];
			Address perAddress;
			Date birthdate;


		public:

			Person()
			{
				strcpy(this->name,"abc");
				cout<<"parameterless ctor of Person class"<<endl;
			}
			// ctor int list
			//ComposedName(all data member of composed object with data type  ): compleosedObject1(all parameters with out data type)
			Person(char *name, char *perAddress, char *city, int pincode,int dd, int mm, int yy): perAddress(perAddress, city,pincode), birthdate(dd, mm, yy)
			{
				strcpy(this->name,name);
				cout<<"parameterized ctor of Person class"<<endl;
			}
			void PrintPersonInfo()
			{
				cout<<"person info ::\n";
				cout<<"Name :: "<<this->name<<endl;
				//this->composedObjectName.MethodName();
				this->perAddress.Print();
				this->birthdate.Print();
			}
			~Person()
			{
				strcpy(this->name,"");
				cout<<"inside dctor of Person class"<<endl;
			}


	}; //end of person class
}//end of namespace NComposition
using namespace NComposition;
int main()
{
	/*
	Date d1;
	cout<<"d1 :: "<<endl;
	d1.Print();
	cout<<"size of d1="<<sizeof(d1)<<endl; //4+4+4=12

	Date d2(11,2,2005);
	cout<<"d3 :: "<<endl;
	d2.Print();
	cout<<"size of d2="<<sizeof(d2)<<endl; //4+4+4=12
*/
/*	Address a1;
	cout<<"a1 :: "<<endl;
	a1.Print();
	cout<<"size of a1="<<sizeof(a1)<<endl; //30+20+4==54

	Address a2("it park", "mumbai", 987654);
	cout<<"a2 :: "<<endl;
	a2.Print();
	cout<<"size of a2="<<sizeof(a2)<<endl; //30+20+4==54
*/

/*	Person p1;
	cout<<"p1 :: "<<endl;
	p1.PrintPersonInfo();
	cout<<"size of p1="<<sizeof(p1)<<endl; //12+54+20===86
	*/
	Person p2("pqr","it park", "new delhi", 654321,1,2,1999);

	cout<<"p2 :: "<<endl;
	p2.PrintPersonInfo();
	cout<<"size of p2="<<sizeof(p2)<<endl; //12+54+20===86


	return 0;
}
