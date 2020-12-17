#include <stdio.h>
int main(void)
{
	{
		char *s1="SUNBEAM";
		printf("\n s1=%s", s1);
		printf("\n s1=%s", *&*&*&*&s1);
	}
	{
		char name[]="SUNBEAM";
		char *s1=name;
		printf("\n s1=%s", s1);
		printf("\n s1=%s", *&*&*&*&s1);
	}
	printf("\n============================================\n");
	{
		char name[]={'X','Y','Z','P','Q', '\0'};

		{
			char *s1=(int*)name+1;
			printf("\n *s1=%c  %d", *s1, *s1);
			printf("\n *s1=%c  %d", *(char*)s1, *(char*)s1);
		}
		printf("\n============================================\n");
		{
			char *s1=(short int*)name+1;
			printf("\n *s1=%c  %d", *s1, *s1);
			printf("\n *s1=%c  %d", *(char*)s1, *(char*)s1);
		}
		printf("\n============================================\n");
		{
			char *s1=(char*)name+1;
			printf("\n *s1=%c  %d", *s1, *s1);
			printf("\n *s1=%c  %d", *(char*)s1, *(char*)s1);
		}
		printf("\n============================================\n");
	}

	return 0;
}
