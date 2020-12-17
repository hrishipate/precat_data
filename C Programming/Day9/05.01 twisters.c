#include<stdio.h>
#include<string.h>
int main(void)
{
	char str1[] ="Sunbeam " ;
	char str2[]= "Karad";
	char str3[30];

                        //dest, src
 	printf("\n%s",strcpy(str3,strcat(str1, str2)));
                                    //dest,  src
               //012
 	strcpy(str1,"sunbeam ");
 	strcpy(str2, "karad");

    printf("\n%s",strcat(&str1[2],&str2[1]));

	return 0;
}
