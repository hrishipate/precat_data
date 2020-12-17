
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	struct node *left;
	int data;
	struct node *right;
}NODE;

NODE *root; // NODE *root=NULL;
NODE* CreateNode(int value);
void AddNode(int value);
void InOrder(NODE* trav);
void PostOrder(NODE* trav);
void PreOrder(NODE* trav);
void Clear(NODE*trav);
void FreeTree(NODE*trav);

int main(void)
{
	AddNode(50);
	AddNode(20);
	AddNode(90);
	AddNode(85);
	AddNode(10);
	AddNode(45);
	AddNode(30);
	AddNode(100);
	AddNode(15);
	AddNode(75);
	AddNode(95);
	AddNode(120);
	AddNode(5);

	printf("\n InOrder \n");
	InOrder(root);

	printf("\n PostOrder \n");
	PostOrder(root);

	printf("\n PreOrder \n");
	PreOrder(root);

	FreeTree(root);
	return EXIT_SUCCESS;
}
NODE* CreateNode(int value)
{
	NODE* newnode=NULL;
	newnode= (NODE*)malloc (sizeof(NODE)*1);
	newnode->left=NULL;
	newnode->data=value;
	newnode->right=NULL;
	return newnode;
}
void AddNode(int value)
{
	NODE *newnode=NULL;
	newnode= CreateNode(value);
	if(root==NULL)
		root=newnode;
	else
	{
		NODE *trav=NULL;
		trav=root;
		while(1) // infinite loop
		{
			if(value< trav->data)
			{
				if(trav->left==NULL)
				{
					trav->left=newnode;
					break; // go out of loop
				}
				else
					trav= trav->left;
			}
			else
			{
				if(trav->right==NULL)
				{
					trav->right=newnode;
					break; // go out of loop
				}
				else
					trav=trav->right;
			}

		}
	}
	return;
}
void InOrder(NODE* trav)//L V R
{
	if(trav==NULL)
		return;
	else
		InOrder(trav->left);
		printf("%d->>", trav->data);
		InOrder(trav->right);
}
void PostOrder(NODE* trav)// L R V
{
	if(trav==NULL)
		return;
	else
		PostOrder(trav->left);
	    PostOrder(trav->right);
	printf("%d->>", trav->data);
}
void PreOrder(NODE* trav) //V L R
{
	if(trav==NULL)
		return;
	else
		printf("%d-->", trav->data);
		PreOrder(trav->left);
		PreOrder(trav->right);
}
void Clear(NODE*trav)
{
	if(trav==NULL)
		return;
	else
		Clear(trav->left);
		Clear(trav->right);
		printf("\n data contaning value %d  is deleted from tree", trav->data);
		free(trav);
		trav=NULL;
}
void FreeTree(NODE*trav)
{
	Clear(root);
	root=NULL;
	printf("\n tree free");
}
