#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	printf("\n int data type \n");
	{
		int z=3;
		//int *z_ptr=&z;
		int *z_ptr=NULL;
		z_ptr=&z;

		printf("\n z=%d &z=%u", z, &z);
		printf("\n z_ptr=%u *z_ptr=%d &z_ptr=%u ", z_ptr, *z_ptr, &z_ptr);
		printf("\n *(&z)=%d", *(&z));

		printf("\n z_ptr=%u z_ptr+1=%u", z_ptr, z_ptr+1);
		printf("\n z_ptr=%u z_ptr-1=%u", z_ptr, z_ptr-1);


		printf("\n z_ptr=%u z_ptr+5=%u", z_ptr, z_ptr+5);
		printf("\n z_ptr=%u z_ptr-5=%u", z_ptr, z_ptr-5);

		*z_ptr=10; //*(&z)=10

		printf("\n z=%d &z=%u", z, &z);
		printf("\n z_ptr=%u *z_ptr=%d &z_ptr=%u ", z_ptr, *z_ptr, &z_ptr);

		printf("\n *(&z)=%d", *(&z));
		printf("\n sizeof zptr=%d",sizeof(z_ptr));
	}
	printf("\n=====================================\n");
	printf("\n char data type \n");
	{
			char z='A';
			//char *z_ptr=&z;
			char *z_ptr=NULL;
			z_ptr=&z;

			printf("\n z=%c &z=%u", z, &z);
			printf("\n z_ptr=%u *z_ptr=%c &z_ptr=%u ", z_ptr, *z_ptr, &z_ptr);
			printf("\n *(&z)=%c", *(&z));
			printf("\n z_ptr=%u z_ptr+1=%u", z_ptr, z_ptr+1);
			printf("\n z_ptr=%u z_ptr-1=%u", z_ptr, z_ptr-1);


			printf("\n z_ptr=%u z_ptr+5=%u", z_ptr, z_ptr+5);
			printf("\n z_ptr=%u z_ptr-5=%u", z_ptr, z_ptr-5);

			*z_ptr='B'; //*(&z)='B';

			printf("\n z=%d &z=%u", z, &z);
			printf("\n z_ptr=%u *z_ptr=%c &z_ptr=%u ", z_ptr, *z_ptr, &z_ptr);

			printf("\n *(&z)=%c", *(&z));
			printf("\n sizeof zptr=%d",sizeof(z_ptr));
		}
	printf("\n=====================================\n");
	printf("\n float data type \n");
		{
			float z=3.2f;
			//float *z_ptr=&z;
			float *z_ptr=NULL;
			z_ptr=&z;

			printf("\n z=%f &z=%u", z, &z);
			printf("\n z_ptr=%u *z_ptr=%f &z_ptr=%u ", z_ptr, *z_ptr, &z_ptr);
			printf("\n *(&z)=%f", *(&z));
			printf("\n z_ptr=%u z_ptr+1=%u", z_ptr, z_ptr+1);
			printf("\n z_ptr=%u z_ptr-1=%u", z_ptr, z_ptr-1);

			printf("\n z_ptr=%u z_ptr+5=%u", z_ptr, z_ptr+5);
			printf("\n z_ptr=%u z_ptr-5=%u", z_ptr, z_ptr-5);

			//printf("\n z_ptr=%u z_ptr/5=%u", z_ptr, z_ptr/5); //error
			//printf("\n z_ptr=%u z_ptr*5=%u", z_ptr, z_ptr*5);  //error

			*z_ptr=2.3; //*(&z)=2.3f;

			printf("\n z=%f &z=%u", z, &z);
			printf("\n z_ptr=%u *z_ptr=%f &z_ptr=%u ", z_ptr, *z_ptr, &z_ptr);

			printf("\n *(&z)=%f", *(&z));
			printf("\n sizeof zptr=%d",sizeof(z_ptr));
		}
		printf("\n=====================================\n");
	return EXIT_SUCCESS;
}
