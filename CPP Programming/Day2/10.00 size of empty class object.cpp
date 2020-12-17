#include <iostream>
using namespace std;
#pragma pack(1)
namespace NEmpty
{
	class Empty
	{

	};//end of Empty class
	struct empty
	{

	};//end of empty structure

}// end of namespace NEmpty
using namespace NEmpty;
int main()
{
 //NamespaceName::ClassName objectName;
//	NEmpty::Empty e1;

	//className objectName
	Empty e1;
	cout<<"size of e1="<<sizeof(e1)<<endl;

	empty e2;
	cout<<"size of e2="<<sizeof(e2)<<endl;

	cout<<" &e1 ="<<&e1<<endl; //allowed
	cout<<" &e2 ="<<&e2<<endl;

	//cout<<" &Empty = "<<&Empty <<endl; // not allowed
	//cout<<" &empty = "<<&empty <<endl;


	return 0;
}
