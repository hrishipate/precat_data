#include <stdio.h>
#include <stdlib.h>
#define LEN 40

int main(void)
{
	char word[LEN];
	FILE *fpRead=NULL;
	int cnt;
	if( (fpRead= fopen("/home/rahul/P89/empinfo.txt","r"))==NULL)
		printf("unable to open file for reading");
	else
	{
		cnt=0;
		while( fscanf(fpRead,"%s", word)!=EOF)
		{
			printf("\n %d ] %s", ++cnt, word);
		}
		fclose(fpRead);
		printf("\n %d words read from file", cnt);
	}

	return EXIT_SUCCESS;
}
