#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *fpWrite=NULL;
	char ch;
	//fpWrite= fopen("file1.txt", "w"); //write mode
	fpWrite= fopen("file1.txt", "a"); // append
	if(fpWrite==NULL)
		printf("\n unable to create file in write mode");
	else
	{
		printf("\n Enter Your data :: \n");

		while((ch=fgetc(stdin))!=EOF)     // console
		{
			fputc(ch, fpWrite);
		}
		printf("\n data added to file");
		fclose(fpWrite);
	}

	return EXIT_SUCCESS;
}
