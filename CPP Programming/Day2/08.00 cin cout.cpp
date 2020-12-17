#include <iostream>
using namespace std;

int main()
{
	{
		int no1, no2;
		std:: cout<<" int data type ::"<<std::endl;
		std::cout<<" Enter No1 :: ";
		//std::cin>>&no1; //error in cpp  scanf("%d",&no1); allowed in c
		std::cin>>no1; // allowed

		std::cout<<" Enter No2 :: ";
		std::cin>>no2; // allowed

		std::cout<<" no1 = "<<no1<<" \t ["<< &no1<<" ] "<<std::endl;
		std::cout<<" no2 = "<<no2<<" \t ["<< &no2<<" ] "<<std::endl;
	}
	cout<<"\n====================================\n"<<endl;
	//using namespace std;
	{
		float no1, no2;
		cout<<" float data type ::"<<endl;
		cout<<" Enter No1 :: ";
		//std::cin>>&no1; //error in cpp  scanf("%d",&no1); allowed in c
		cin>>no1; // allowed
		cout<<" Enter No2 :: ";
		cin>>no2; // allowed

		cout<<" no1 = "<<no1<<" \t ["<< &no1<<" ] "<<endl;
		cout<<" no2 = "<<no2<<" \t ["<< &no2<<" ] "<<endl;
	}
	cout<<"\n====================================\n"<<endl;
	{
		char no1, no2;
		cout<<" char data type ::"<<endl;
		cout<<" Enter No1 :: ";
		//std::cin>>&no1; //error in cpp  scanf("%d",&no1); allowed in c
		cin>>no1; // allowed
		cout<<" Enter No2 :: ";
		cin>>no2; // allowed

		cout<<" no1 = "<<no1<<" \t ["<< (void*)&no1<<" ] "<<endl;
		cout<<" no2 = "<<no2<<" \t ["<< (void*)&no2<<" ] "<<endl;
	}


	return 0;
}
