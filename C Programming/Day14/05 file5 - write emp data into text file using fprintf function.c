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
int main(void)
{
	struct emp e1;
	char path[]="/home/rahul/P89/empinfo.txt";
	FILE *fpEmpWrite=NULL;

	fpEmpWrite=fopen(path,"a");
	if(fpEmpWrite==NULL)
		printf("\n unable to write into file");
	else
	{
		printf("\n Enter Employee info :: ")
		AcceptEmpInfo(&e1);

		// write data (e1) into text file

		fprintf(fpEmpWrite,"%-6d%-10s%6.2f\n", e1.empno, e1.name, e1.sal);

		fclose(fpEmpWrite);
		printf("\n record added into file");
	}

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

	fprintf(stdout,"\n Enter Employee info :: ");
	fprintf(stdout,"\n Enter Emp No :: ");
	fscanf(stdin,"%d", &e->empno);
	fprintf(stdout,"\n Enter Emp Name :: ");
	fscanf(stdin,"%s", e->name);
	fprintf(stdout,"\n Enter Emp sal :: ");
	fscanf(stdin,"%f", &e->sal);
	return;

}
