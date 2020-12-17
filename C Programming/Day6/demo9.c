#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int z=3;
	//int *z_ptr=&z;

	int *z_ptr=NULL;
	z_ptr=&z;

	printf("\n z=%d &z=%u", z, &z);
	printf("\n z_ptr=%u *z_ptr=%u &z_ptr=%u ", z_ptr, *z_ptr, &z_ptr);
	printf("\n *(&z)=%u", *(&z));

	*z_ptr=10; //*(&z)=10

	printf("\n z=%d &z=%u", z, &z);
	printf("\n z_ptr=%u *z_ptr=%u &z_ptr=%u ", z_ptr, *z_ptr, &z_ptr);

	printf("\n *(&z)=%u", *(&z));
	printf("\n sizeof zptr=%d",sizeof(z_ptr));

	return EXIT_SUCCESS;
}
