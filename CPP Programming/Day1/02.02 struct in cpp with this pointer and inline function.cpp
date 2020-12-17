#include<stdio.h>
#pragma pack(1)
struct emp
{
	// variable or data members(cpp) or fields(java)
	private:
		int empno;
		char name[10];
		float sal;

	public:
	// member function(cpp) or methods(java)

	//void AcceptEmpInfo(struct emp * const this)
	void AcceptEmpInfo()
	{
		printf("\n Enter Emp no :: ");
		scanf("%d", &this->empno);
		printf("\n Enter Emp name :: ");
		scanf("%s", this->name);
		printf("\n Enter Emp sal :: ");
		scanf("%f", &this->sal);
		return ;
	}
	//void PrintEmpInfo(struct emp * const this)
	void PrintEmpInfo()
	{
		printf("\n EmpNo name Salary \n");
		printf("%-6d%-10s%-6.2f", this->empno,this->name, this->sal);
		return;

	}
	//void SetSalary(struct emp * const this, float newsal)
	inline void SetSalary( float sal)
	{
		this->sal=sal;
   //data member  local variable
	}
	//float GetSalary(struct emp * const this)
	inline float GetSalary()
	{
		return this->sal;
	}


}; // end of structure emp
int main()
{

	emp e1; //struct emp e1;
	//struct emp e1={100};
	float newsal;

	printf("\n Enter Emp info ::\n");
	e1.AcceptEmpInfo();// AcceptEmpInfo(&e1);

	//e1.sal=-10000; // not allowed as sal is private data member
	printf("\n Emp Info :: \n");
	e1.PrintEmpInfo(); //PrintEmpInfo(&e1);

	printf("\n Enter new salary :: ");
	scanf("%f", &newsal);

	//SetSalary(&e1, newsal);
	e1.SetSalary(newsal);

	printf("\n Updated salary :: \n");
	e1.PrintEmpInfo(); //PrintEmpInfo(&e1);

	//newsal= GetSalary(&e1);
	newsal= e1.GetSalary();
	printf("\n updated salary =%f", newsal);

	//printf("\n updated salary =%f", GetSalary(&e1));
	printf("\n updated salary =%f", e1.GetSalary());

	return 0;
}
