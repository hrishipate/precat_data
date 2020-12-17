#include <stdio.h>
#include <stdlib.h>
/*struct emp
{
	int empno;
	char name[10];
	float sal;
	struct emp *next; // pointer of its own type
};*/
struct emp
{
	int empno;
	char name[10];
	float sal;
	//struct emp next; // not allowed
};
struct emp next; // allowed
int main(void)
{

	return EXIT_SUCCESS;
}
