#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[], char *envp[])
{
	char ch;
	FILE *fpSrc=NULL, *fpDest=NULL;

	fpSrc=fopen(argv[1],"r");
	if(fpSrc==NULL)
		printf("\n unable to open file for reading");
	else
	{
		//fpDest= fopen(argv[2], "a");
		fpDest= fopen(argv[2], "w");

		if(fpDest==NULL)
			printf("unable to open file for writing");
		else
		{
			while((ch= fgetc(fpSrc))!=EOF)
			{
				fputc(ch, stdout); // print on console
				fputc(ch, fpDest); // write into file
				//getchar();
			}
			fclose(fpSrc);
			fclose(fpDest); // fcloseall();
			printf("\n contents of %s is copied in to %s ", argv[1], argv[2]);
		}
	}

	return EXIT_SUCCESS;
}
