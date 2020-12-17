#include<stdio.h>
#include<string.h>
#define SIZE 40
typedef struct node
{
	char data[SIZE]; // data part
	struct node *next; // address of next node
}NODE;

NODE *head; // NODE *head=NULL;
NODE* CreateNode(char* value);
void AddFirst(char* value);
void AddLast(char* value);
void DisplayList();

int main()
{
	char word[SIZE];
	FILE *fpRead=NULL;
	int cnt;
	if( (fpRead= fopen("/home/rahul/P89/empinfo.txt","r"))==NULL)
		printf("unable to open file for reading");
	else
	{
		cnt=0;
		while( fscanf(fpRead,"%s", word)!=EOF)
		{
			AddLast(word);
			printf("\n %d ] %s", ++cnt, word);
		}
		fclose(fpRead);
		printf("\n %d words read from file\n", cnt);
		printf("\n contents of list from file \n");
		DisplayList();
	}

	return 0;
}
NODE* CreateNode(char* value)
{
	NODE *newnode=NULL;
	newnode= (NODE*)malloc(sizeof(NODE)*1);
	strcpy(newnode->data,value); // mystrcpy
	newnode->next=NULL;
	return newnode;
}
void AddFirst(char* value)
{
	NODE * newnode=NULL;
	newnode=CreateNode(value);
	if(head==NULL) //check head is null
		head=newnode;
	else
	{
		newnode->next=head;//1.1
		head=newnode;//1.2
	}
	return;
}
void DisplayList()
{
	NODE *trav=NULL;
	if(head==NULL)
		printf("\list is empty");
	else
	{
		trav=head;
		while(trav!=NULL)
		{
			printf("%s--->", trav->data);
			trav=trav->next;
		}
	}
	printf("\n");
	return;
}
void AddLast(char* value)
{
	NODE *newnode=NULL;
	newnode=CreateNode(value);
	if(head==NULL)
		head=newnode;//2.0
	else
	{
		NODE *trav=NULL;
		trav=head;
		while(trav->next!=NULL)
		{
			trav=trav->next;
		}
		trav->next=newnode; //2.2
	}
	return;
}
