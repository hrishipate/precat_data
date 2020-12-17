#include<typeinfo>
#include <iostream>
using namespace std;
//namespace NFunctionOverriding
//{
	class Shape
	{
		protected:
			double area;
			double perimeter;
		public:
			Shape()
			{
				this->area=0;
				this->perimeter=0;
				cout<<"inside parameterless ctor of Shape class"<<endl;
			}
			//virtual returnType FunName(dataType Parameters)=0;
			//pure virtal function
			virtual void AcceptInputFromConsole()=0;
			virtual void PrintOutputOnConsole()
			{
				cout<<"\n inside PrintFun of Shape class";
				cout<<" this->perimeter :: "<<this->perimeter<<endl;
				cout<<" this->area :: "<<this->area<<endl;
			}
			virtual void CalculateArea()
			{

			}
			virtual void CalculatePerimeter()
			{

			}
			virtual ~Shape()
			{
				this->area=0;
				this->perimeter=0;
				cout<<"inside dtor of Shape class"<<endl;
			}
	}; //end of shape class

	class Circle: public Shape
	{
		private:
			double radius;
		public:
			Circle()
			{
				this->radius=0;
				cout<<"inside parameterless ctor of Circle class"<<endl;
			}
			void AcceptInputFromConsole()
			{
				cout<<"Enter Radius :: ";
				cin>>this->radius;
			}
			 void CalculateArea()
			 {
				 this->area= 3.142* this->radius* this->radius;
			 }
			 void CalculatePerimeter()
			 {
				 this->perimeter= 2*3.142*this->radius;
			 }
			 void PrintOutputOnConsole()
			 {
				 cout<<" this->radius :: "<<this->radius<<endl;
				 cout<<" this->perimeter :: "<<this->perimeter<<endl;
				 cout<<" this->area :: "<<this->area<<endl;
			 }
			~Circle()
			{
				this->radius=0;
				cout<<"inside dtor of Circle class"<<endl;
			}
	}; //end of circle class

	class Rectangle : public Shape
	{
		private:
			double l;
			double b;
		public:
			Rectangle()
			{
				this->l=0;
				this->b=0;
				cout<<"inside parameterless ctor of Rectangle class"<<endl;
			}
			void AcceptInputFromConsole()
			{
				cout<<"Enter L :: ";
				cin>>this->l;
				cout<<"Enter B :: ";
				cin>>this->b;
			}
			void PrintOutputOnConsole()
			{
				cout<<"this->l = "<<this->l<<endl;
				cout<<"this->b = "<<this->b<<endl;
				cout<<"this->area = "<<this->area<<endl;
				cout<<"this->perimeter = "<<this->perimeter<<endl;
			}
			void CalculateArea()
			{
				this->area= this->l * this->b;
			}
			void CalculatePerimeter()
			{
				this->perimeter= 2*(this->l + this->b);
			}
			void PrintOutputOnConosle()
			{
				cout<<"this->l ::"<< this->l<<endl;
				cout<<"this->b ::"<< this->b<<endl;
				cout<<"this->area ::"<< this->area <<endl;
				cout<<"this->perimeter ::"<< this->perimeter<<endl;
			}
			~Rectangle()
			{
				this->l=0;
				this->b=0;
				cout<<"inside dtor of Rectangle class"<<endl;
			}


	};// end of Rectangle class

//}//end of namespace NFunctionOverriding
//using namespace NFunctionOverriding;
int MenuChoices();
int main()
{
	//Shape ObjInsatance1; we can can create object of abstract class
	//we can create only pointer or reference of abstract class
	Shape *shptr=NULL;
	int choice;

	do
	{
	choice=MenuChoices();
	switch(choice)
	{
		default : cout<<"invalid choice "<<endl;
					continue;
		case 0 : return 0; // exit(0);

		case 1: // circle
				shptr= new Circle; // up casting
				break;
		case 2: // Rectangle
				shptr= new Rectangle; // up casting
				break;

	}

	cout<<"=========================================="<<endl;
	const type_info& info = typeid(*shptr);
	cout << info.name() << endl;
	cout<<"=========================================="<<endl;

		if(shptr!=NULL)
		{
			shptr->AcceptInputFromConsole();
			shptr->CalculateArea();
			shptr->CalculatePerimeter();
			shptr->PrintOutputOnConsole();

			delete shptr;
			shptr=NULL;
		}
		cout<<"Enter 1 to continue or  0 to Exit :: ";
		cin>>choice;

	}while(choice!=0);

	return 0;
}
int MenuChoices()
{
	int choice;
	cout<<"1. Circle \n 2. Rectangle \n 0. Exit"<<endl;
	cout<<" Enter Your Choice :: ";
	cin>>choice;
	return choice;
}
