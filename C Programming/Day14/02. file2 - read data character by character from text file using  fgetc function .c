
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *fpRead=NULL;
	char ch;
	size_t cnt, alphabets, digits, tabs, spaces, lines;
	//fpRead= fopen("d:\\rahul\\P89\\day14\\demo1\\file1.txt","r"); // in windows
	fpRead= fopen("/home/rahul/P89/day14/demo1/file1.txt","r"); // in linux
	if(fpRead==NULL)
		printf("\n unable to read data from text file");
	else
	{
			cnt = alphabets= digits= tabs= spaces= lines=0;

			while((ch=fgetc(fpRead))!=EOF)
			{
				fputc(ch, stdout);// print on console
				//getchar();
				cnt++;
				if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
					alphabets++;
				else if( ch>=48 && ch<=57)
					digits++;
				else if(ch=='\t' )
					tabs++;
				else if(ch==' ' || ch==32 )
					spaces++;
				else if(ch=='\n' || ch==10 )
				  lines++;


			}
			fclose(fpRead);
			printf("\n data read from file\n");
			printf("\n no of char =%d ", cnt);
			printf("\n no of alphabets =%d ", alphabets);
			printf("\n no of digits =%d ", digits);
			printf("\n no of spaces =%d ", spaces);
			printf("\n no of tabs =%d ", tabs);
			printf("\n no of lines =%d ", lines);


			//fcloseall();
	}
	return EXIT_SUCCESS;
}
