#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)
struct emp
{
	int empno;
	char name[10];
	float sal;
};//end of emp structure

void AcceptEmpInfo(struct emp *e);
void WriteEmpDataIntoBinaryFile();
void DisplayEmpInfo(const struct emp *e);
void ReadEmpDataFromBinaryFile();
int MenuChoices();
int main(void)
{
	int choice;

	do
	{
		choice= MenuChoices();

		switch(choice)
		{
			case 0: return 0; // exit(0);
			case 1: // add new record
					WriteEmpDataIntoBinaryFile();
					break;
			case 2: // read all records from file
					ReadEmpDataFromBinaryFile();
					break;
			default:
				printf("\n invalid chocie :: ");
				continue;
		}

		printf("\n Enter 1 to continue or o to exit :: ");
		scanf("%d", &choice);

	}while(choice!=0);


	return EXIT_SUCCESS;
}
void AcceptEmpInfo(struct emp *e)
{
	/*;
	printf("\n Enter Emp No :: ");
	scanf("%d", &e->empno);
	printf("\n Enter Emp Name :: ");
	scanf("%s", e->name);
	printf("\n Enter Emp sal :: ");
	scanf("%f", &e->sal);*/

	fprintf(stdout,"\n Enter Emp No :: ");
	fscanf(stdin,"%d", &e->empno);
	fprintf(stdout,"\n Enter Emp Name :: ");
	fscanf(stdin,"%s", e->name);
	fprintf(stdout,"\n Enter Emp sal :: ");
	fscanf(stdin,"%f", &e->sal);
	return;

}
void WriteEmpDataIntoBinaryFile()
{
	struct emp e1;
	char path[]="/home/rahul/P89/empinfo.dat";
	FILE *fpEmpWrite=NULL;

	fpEmpWrite=fopen(path,"ab");
	if(fpEmpWrite==NULL)
		printf("\n unable to write into file");
	else
	{
		printf("\n Enter Employee info :: ");
		AcceptEmpInfo(&e1);
		// write data (e1) into text file
		//fprintf(fpEmpWrite,"%-6d%-10s%6.2f\n", e1.empno, e1.name, e1.sal);

		// write data into binary files
		fwrite(&e1, sizeof(struct emp), 1, fpEmpWrite);


		fclose(fpEmpWrite);
		printf("\n record added into file");
	}
	return;
}


void DisplayEmpInfo(const struct emp *e)
{
	/*printf("\n EmpNo  Name  sal \n");
	printf("%-8d%-10s%-6.2f", e->empno,e->name, e->sal);*/

	fprintf(stdout,"%-8d%-10s%-6.2f\n", e->empno,e->name, e->sal);
	return;
}
void ReadEmpDataFromBinaryFile()
{
	struct emp e1;
	char path[]="/home/rahul/P89/empinfo.dat";
	size_t cnt=0;
	FILE *fpEmpRead=NULL;
	if( (fpEmpRead= fopen(path, "rb"))==NULL)
		printf("\n unable to open file for reading");
	else
	{
		//read 1st records
		/*
		fprintf(stdout,"\n EmpNo  Name  sal \n");
		fscanf(fpEmpRead,"%d%s%f\n", &e1.empno, e1.name, &e1.sal);
		DisplayEmpInfo(&e1);
		printf("\n record read from file");*/

		// read 1st record from file
		/*
		fprintf(stdout,"\n EmpNo  Name  sal \n");
		fread(&e1, sizeof(struct emp),1, fpEmpRead);
		DisplayEmpInfo(&e1);
		printf("\n record read from file");*/

		fprintf(stdout,"\n EmpNo  Name  sal \n");
		while(fread(&e1, sizeof(struct emp),1, fpEmpRead))
		{
			DisplayEmpInfo(&e1);
			cnt++;
		}
		printf("\n %d records read from file", cnt);

		//read all records
		/*fprintf(stdout,"\n EmpNo  Name  sal \n");
		while(fscanf(fpEmpRead,"%d%s%f\n", &e1.empno, e1.name, &e1.sal)!=EOF)
		{
				DisplayEmpInfo(&e1);
				cnt++;
		}
		printf("\n %d records read from file", cnt);
			*/
		fclose(fpEmpRead);
	}
	return;
}
int MenuChoices()
{
	int choice;
	printf("\n 1. Add new record into file ");
	printf("\n 2. Read all records from file \n 0 . Exit ");
	printf("\n Enter Your choice :: ");
	scanf("%d", &choice);

	return choice;
}
