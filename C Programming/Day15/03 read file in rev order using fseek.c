#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch;
	FILE *fpRead=NULL;
	if( (fpRead=fopen("/home/rahul/P89/empinfo.txt", "r"))==NULL)
		printf("\n unable to read file");
	else
	{
		//fseek(fpRead, -1L, 2);
		fseek(fpRead, -1L, SEEK_END); // go to last char in file

		do
		{
			//printf("\n%u\n", ftell(fpRead));
			ch=fgetc(fpRead);
			//if(ch=='\n') // oonly on winodws os
				//fseek(fpRead,-1L,SEEK_CUR);
			printf("%c", ch);
			//getchar();
		}while(!fseek(fpRead, -2L, SEEK_CUR));

	}
	return EXIT_SUCCESS;
}
