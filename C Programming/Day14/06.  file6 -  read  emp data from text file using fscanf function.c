#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)
struct emp
{
	int empno;
	char name[10];
	float sal;
};
void DisplayEmpInfo(const struct emp *e);
void ReadEmpDataFromTextFile();
int main(void)
{
	ReadEmpDataFromTextFile();
	return EXIT_SUCCESS;
}
void DisplayEmpInfo(const struct emp *e)
{
	/*printf("\n EmpNo  Name  sal \n");
	printf("%-8d%-10s%-6.2f", e->empno,e->name, e->sal);*/

	fprintf(stdout,"%-8d%-10s%-6.2f\n", e->empno,e->name, e->sal);
	return;
}
void ReadEmpDataFromTextFile()
{
	struct emp e1;
	char path[]="/home/rahul/P89/empinfo.txt";
	size_t cnt=0;
	FILE *fpEmpRead=NULL;
	if( (fpEmpRead= fopen(path, "r"))==NULL)
		printf("\n unable to open file for reading");
	else
	{
		//read 1st records
		/*
		fprintf(stdout,"\n EmpNo  Name  sal \n");

		fscanf(fpEmpRead,"%d%s%f\n", &e1.empno, e1.name, &e1.sal);
		DisplayEmpInfo(&e1);

		printf("\n record read from file");*/


		//read all records
		fprintf(stdout,"\n EmpNo  Name  sal \n");

		while(fscanf(fpEmpRead,"%d%s%f\n", &e1.empno, e1.name, &e1.sal)!=EOF)
		{
				DisplayEmpInfo(&e1);
				cnt++;
		}
		printf("\n %d records read from file", cnt);

		fclose(fpEmpRead);
	}
	return;
}
