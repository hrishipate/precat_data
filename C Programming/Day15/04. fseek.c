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
		//fseek(fpRead, 0L, 0); // go to beg file
		fseek(fpRead, 5L, 0); // go to 5+1th file
		ch=fgetc(fpRead);
		printf("ch=%c", ch);
		fseek(fpRead, -1L, 1);

		fseek(fpRead, 9L, 1); // go to add+9th e
		ch=fgetc(fpRead);
		printf("ch=%c", ch);
		//fseek(fpRead, -1L, 1);


		fseek(fpRead, -3L, 1); // go pre 3th char
		ch=fgetc(fpRead);
		printf("ch=%c", ch);
		fseek(fpRead, -1L, 1);

		fclose(fpRead);


	}
	return EXIT_SUCCESS;
}
