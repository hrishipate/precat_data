#include <stdio.h>
#include <stdlib.h>
#define SIZE 40
int main(void)
{
	char buff[SIZE], path[]="/home/rahul/P89/day14/demo1/file1.txt";
	FILE *fpRead=NULL;
	fpRead= fopen(path,"r");
	if(fpRead==NULL)
		printf("\n unable to read file");
	else
	{
		printf("\n Enter Your data :: ");
		while(fgets(buff, SIZE, fpRead)!=NULL)
		{
			fputs(buff, stdout);
			getchar();
		}
		fclose(fpRead);
		//fcloseall();
		printf("\n data read from file");
	}
	return EXIT_SUCCESS;
}
