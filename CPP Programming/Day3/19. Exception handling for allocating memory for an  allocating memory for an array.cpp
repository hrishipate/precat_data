#include <iostream>
using namespace std;
int main()
{
	int no, *ptr=NULL, index;
	try
	{



		cout<<"Enter How many elements you want :: ";
		cin>>no;

		ptr= new int[no];

		cout<<"&ptr="<<&ptr<<endl;
		cout<<"ptr="<<ptr<<endl;

		cout<<"Enter Elements of array :: "<<endl;
		for(index=0; index<no; index++)
		{
			cout<<"ptr["<<index<<"] ";
			cin>>ptr[index];  //cin>>&ptr[index];error //scanf("%d", &ptr[index]); allowed
		}

		cout<<"Elements of array array:: "<<endl;
		for(index=0; index<no; index++)
		{
			cout<<"ptr[ "<<index<<" ] \t"<<ptr[index] <<" \t[ "<<&ptr[index]<<" ] "<<endl;
		}
		delete [] ptr;
		ptr=NULL;
		cout<<" Memory is freed"<<endl;
	}
	catch(bad_alloc& ex)
	{
		cout<<"unable to allocate memory"<<endl;
		cout<<"inside bad_alloc exception **********"<<endl;
	}
	catch(...)
	{
		cout<<"inside generic catch "<<endl;
	}
	return 0;
}
