#include <iostream>
using namespace std;
#pragma pack(1)
#include<cstring> // or#include<string.h>
namespace Ninheritance
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
			Date birthdate;// objectName
			Address perAddress; // objectName


		public:

			Person()
			{
				strcpy(this->name,"abc");
				cout<<"parameterless ctor of Person (Base) class"<<endl;
			}
			// ctor int list
			//ComposedName(all data member of composed object with data type  ): compleosedObject1(all parameters with out data type)
			Person(char *name, char *perAddress, char *city, int pincode,int dd, int mm, int yy): perAddress(perAddress, city,pincode), birthdate(dd, mm, yy)
			{
				strcpy(this->name,name);
				cout<<"parameterized ctor of Person (Base) class"<<endl;
			}
			void PrintPersonInfo()
			{
				cout<<"person info ::\n";
				cout<<"Name :: "<<this->name<<endl;
				//this->composedObjectName.MethodName();
				//objectName.MethodName();
				this->perAddress.Print();
				this->birthdate.Print();
			}
			~Person()
			{
				strcpy(this->name,"");
				cout<<"inside dctor of Person (Base ) class"<<endl;
			}

	}; //end of person class

	  //derived class       base class
	class Emplyoee : public Person
	{
		private:
			int empno;
			char designation[20];
			float salary;
			static int counter;

		public:
			Emplyoee()
			{
				Emplyoee::counter++;
				this->empno= Emplyoee::counter;
				strcpy(this->designation,"S/W Testing");
				this->salary=12000;
				cout<<"inside parameterless ctor  of Employee class( derived class) "<<endl;
			}
			//ctor init list
			//DerivedclassName(all parmaters of base class + derived class with data types):BaseClassName(all parameters of base class with data types)
			Emplyoee(char *designation, float salary,char *name, char *perAddress, char *city, int pincode,int dd, int mm, int yy):Person( name,perAddress, city, pincode,dd, mm, yy)
			{
				Emplyoee::counter++;
				this->empno= Emplyoee::counter;
				strcpy(this->designation,designation);
				this->salary=salary;
				cout<<"inside parameterized ctor  of Employee class( derived class) "<<endl;
			}

			void PrintEmployeeInfo()
			{
				cout<<"Employee Info :: "<<endl;
				cout<<"Employee No :: "<<this->empno<<endl;
				cout<<"Employee Designation :: "<<this->designation<<endl;
				cout<<"Employee salary :: "<<this->salary<<endl;
				//BaseClassName::MethodName();
				Person::PrintPersonInfo();
			}
			~Emplyoee()
			{
				strcpy(this->designation,"");
				this->salary=0;
				cout<<"inside dtor of Employee class( derived class) "<<endl;
			}

	}; // end of Employee class (derived)
	//int Emplyoee:: counter;
	int Emplyoee:: counter=1000;

}//end of namespace Ninheritancr
using namespace Ninheritance;
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
	/*Person p2("pqr","it park", "new delhi", 654321,1,2,1999);

	cout<<"p2 :: "<<endl;
	p2.PrintPersonInfo();
	cout<<"size of p2="<<sizeof(p2)<<endl; //12+54+20===86
	*/

	Emplyoee e1;
	cout<<"e1 :: "<<endl;
	e1.PrintEmployeeInfo();
	cout<<"size of e1="<<sizeof(e1)<<endl; //12+54+20===86(person)+()employee(4+20+4==28) ==114

	cout<<"============================================="<<endl;
	Emplyoee e2("S/W Dev", 15000,"mnq","IIT park", "Mumbai", 543210,11,12,1991);
	cout<<"e2 :: "<<endl;
	e2.PrintEmployeeInfo();
	cout<<"size of e2="<<sizeof(e2)<<endl; //12+54+20===86(person)+()employee(4+20+4==28) ==114
	cout<<"============================================="<<endl;
	return 0;
}
