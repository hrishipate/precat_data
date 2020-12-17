#include <iostream>
using namespace std;
namespace NArray
{
	class Array
	{
		private:
			int *arr;
			int size;

		public:
			//decl of member functions for array class
			Array(int size=5);
			Array(const Array& other);
			void AcceptInputFromConsole();
			void PrintOutputOnConsole();
			~Array();

	};//end of Array class

	//Return_Type className::MemberFunName(dataType Parameters);
	// member function definations of array class
	Array::Array(int size)
	{
		this->size=size;
		this->arr= new int[this->size];
		for(int index=0; index<this->size; index++)
		{
			this->arr[index]=0;
		}
		cout<<"inside ctor of Array class";
	}

	Array:: Array(const Array& other)
	{
		//&a2      other is new name for a1
		this->size=other.size;
		this->arr= new int[other.size];
		for(int index=0; index<other.size; index++)
		{
			this->arr[index]=other.arr[index];
		}
		cout<<"inside copy ctor of Array class";
	}

	void Array:: AcceptInputFromConsole()
	{
		int index;
		for(index=0; index<this->size; index++)
		{
			cout<<"this->arr[ "<<index << " ] :: ";
			cin>>this->arr[index];
		}
	}


	void  Array:: PrintOutputOnConsole()
	{
		int index;
		for(index=0; index<this->size; index++)
		{
			cout<<"this->arr [ "<<index<<" ] \t"<< this->arr[index] <<" \t["<< &this->arr[index]<<" ]" <<endl;
		}
	}

	Array:: ~Array()
	{
		if(this->arr!=NULL)
		{
			delete [] this->arr;
			this->arr=NULL;
		}
		cout<<"inside dtor of Array class"<<endl;
	}



}//end of namespace NArray

using namespace NArray;
int main()
{
	Array a1(6);
	cout<<"a1 :: "<<endl;
	a1.PrintOutputOnConsole();
	a1.AcceptInputFromConsole();

	cout<<"a1 "<<endl;
	a1.PrintOutputOnConsole();

	Array a2=a1; // Array a2(a1);
	cout<<"a2 "<<endl;
	a2.PrintOutputOnConsole();


	return 0;
}