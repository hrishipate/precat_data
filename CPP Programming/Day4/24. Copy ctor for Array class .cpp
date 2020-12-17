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
			Array(int size=5)
			{
				this->size=size;
				this->arr= new int[this->size];
				for(int index=0; index<this->size; index++)
				{
					this->arr[index]=0;
				}
				cout<<"inside ctor of Array class";
			}

			//className(const className& other)
			Array(const Array& other)
			{
				//&a2      other is (reference)new name for a1
				this->size=other.size; // step 1 copy size
				this->arr= new int[other.size]; // step2 allocate new memory
				for(int index=0; index<other.size; index++) // step 3 copy data from src to dest object
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
					cout<<"this->arr [ "<<index<<" ] \t"<< this->arr[index] <<" \t["<< &this->arr[index]<<" ]" <<endl;
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
	Array a1(6);
	cout<<"a1 :: "<<endl;
	a1.PrintOutputOnConsole();
	a1.AcceptInputFromConsole();

	cout<<"a1 "<<endl;
	a1.PrintOutputOnConsole();

	// a2 is newly created object , a1 already created object
	Array a2=a1; // Array a2(a1);
	cout<<"a2 "<<endl;
	a2.PrintOutputOnConsole();


	return 0;
}
