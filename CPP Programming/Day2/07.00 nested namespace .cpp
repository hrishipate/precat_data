#include<stdio.h>
namespace N1
{
	int no1=1000;
	int no2=2000;
	namespace N2
	{
		int no1=5000;
		int no3=7000;
	} //end of name space N2
}// end of name space N1

int no1=100; // global variable

//using namespace N1::N2;

// or
using namespace N1;
using namespace N2;
//using namespace <namespace_name>;
int main()
{
	int no1=10; // local  variable

	printf("\n no1=%d [%u] local variable", no1, &no1);
	printf("\n ::no1=%d [%u] global variable", ::no1, &::no1);

	printf("\n===================================\n");
	printf("\n N1::no1=%d [%u] variable from namespace N1", N1::no1, &N1::no1);
	printf("\n N1::no2=%d [%u] variable from namespace N1", N1::no2, &N1::no2);

	using namespace N1;
	printf("\n no1=%d [%u] local variable ", no1, &no1);
	printf("\n no2=%d [%u] variable from namespace N1", no2, &no2);

	printf("\n===================================\n");

	printf("\n N1::N2::no1=%d variable from namespace N1::N2 [%u]", N1::N2::no1,  &N1::N2::no1);
	printf("\n N1::N2::no3=%d variable from namespace N1::N2 [%u]", N1::N2::no3,  &N1::N2::no3);

	printf("\n no3=%d variable from namespace N1::N2 [%u]", no3,  &no3);
	printf("\n no1=%d local variable  [%u]", no1,  &no1);
	return 0;
}
