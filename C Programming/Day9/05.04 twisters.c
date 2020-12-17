#include<stdio.h>
#include<string.h>
int main(void)
{
	 {
	    	char s1[]="SunBeam";
	    	char s2[]="Karad";
	    	char s3[30];

	    	strcpy(s3, strcat(s1, s2));
	    	printf("%s ",s3);
	    }

    printf("\n================\n");

	char *str1 ="Sunbeam";
	char *str2= "Karad";
	char *str3= NULL;

    str3=strcat(str1, str2); // error exit value -1

    printf("%s ",str3);


	return 0;
}
