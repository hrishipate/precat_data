#include <stdio.h>
#include <stdlib.h>
#define SIZE 40
int main(void)
{
	char buff[SIZE], path[]="/home/rahul/P89/day14/demo1/file1.txt";
	FILE *fpWrite=NULL;
	fpWrite= fopen(path,"a");
	if(fpWrite==NULL)
		printf("\n unable to create file");
	else
	{
		printf("\n Enter Your data :: ");
		while(fgets(buff, SIZE, stdin)!=NULL)
		{
			fputs(buff, fpWrite);
		}
		fclose(fpWrite);
		//fcloseall();
		printf("\n data write from file");
	}
	return EXIT_SUCCESS;
}
