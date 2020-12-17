#include <iostream>
using namespace std;
namespace NArray
{
	template <class Type> // 1 add template before class Name
	class Array
	{
		private:
			Type *arr;
			//int *arr; // 2. change type of int to Type
			int size;

		public:
			Array(int size=5)
			{
				this->size=size;
				//3.0 allocate memory for Type not for int
				this->arr= new Type[this->size];
				//this->arr= new int[this->size];
				for(int index=0; index<this->size; index++)
				{
					this->arr[index]=0;
				}
				cout<<"inside ctor of Array class";
			}
			Array(const Array& other)
			{
				//&a2      other is new name for a1
				this->size=other.size;
				//this->arr= new int[other.size];
				//3.1 allocate memory for Type not for int
				this->arr= new Type[other.size];
				for(int index=0; index<other.size; index++)
				{
					this->arr[index]=other.arr[index];
				}
				cout<<"inside copy ctor of Array class";
			}

			void AcceptInputFromConsole()
			{
				int index;
				for(index=0; index<this->size; index++)
				{
					cout<<"this->arr[ "<<index << " ] :: ";
					cin>>this->arr[index];
				}
			}


			void PrintOutputOnConsole()
			{
				int index;
				for(index=0; index<this->size; index++)
				{
					cout<<"this->arr [ "<<index<<" ] \t"<< this->arr[index] <<" \t["<< (void*)&this->arr[index]<<" ]" <<endl;
				}
			}
			~Array()
			{
				if(this->arr!=NULL)
				{
					delete [] this->arr;
					this->arr=NULL;
				}
				cout<<"inside dtor of Array class"<<endl;
			}
	};//end of Array class

}//end of namespace NArray

using namespace NArray;
int main()
{
	//Array a1(6);
	{
		cout<<"array for int data type:: "<<endl;

	Array<int>a1; //4. add <data type>
	cout<<"a1 :: "<<endl;
	a1.PrintOutputOnConsole();
	a1.AcceptInputFromConsole();
	}
	cout<<"==========================="<<endl;
	{
		cout<<"array for float data type:: "<<endl;

		Array<float>a1; //4. add <data type>
		cout<<"a1 :: "<<endl;
		a1.PrintOutputOnConsole();
		a1.AcceptInputFromConsole();
	}
	cout<<"==========================="<<endl;
	{
		cout<<"array for char data type:: "<<endl;

		Array<char>a1; //4. add <data type>
		cout<<"a1 :: "<<endl;
		a1.PrintOutputOnConsole();
		a1.AcceptInputFromConsole();
		a1.PrintOutputOnConsole();
	}
	cout<<"==========================="<<endl;


	return 0;
}
