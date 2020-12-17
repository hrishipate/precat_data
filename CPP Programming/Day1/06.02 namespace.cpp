#include<stdio.h>
namespace N1
{
	int no1=1000;
	int no2=2000;
} // end of namespace N1

int no1=100; // global variable
using namespace N1;

int main()
{
	int no1=10; // local  variable

	printf("\n no1=%d [%u] local variable", no1, &no1);
	printf("\n ::no1=%d [%u] global variable", ::no1, &::no1);

	printf("\n N1::no1=%d [%u] variable from namespace N1", N1::no1, &N1::no1);
	printf("\n N1::no2=%d [%u] variable from namespace N1", N1::no2, &N1::no2);

	//using namespace N1;
	printf("\n no1=%d [%u] local variable ", no1, &no1);
	printf("\n no2=%d [%u] variable from namespace N1", no2, &no2);

	return 0;
}
