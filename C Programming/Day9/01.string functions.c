#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40
int MenuChoices();
int main(void)
{
	int choice;
	size_t ans;
	int ans1;
	char src[LEN], dest[LEN], *ptr=NULL, find;

	do
	{
		choice= MenuChoices();

		if(choice>=1 && choice<=2)
		{

			printf("\n Enter src :: ");
			scanf("%*c");//getchar();
			gets(src);
			//scanf("%s", src);
		}
		else if(choice>=3 && choice<=7)
		{
			printf("\n Enter src :: ");
			getchar();
			gets(src);//scanf("%s", src);
			printf("\n Enter dest :: ");
			gets(dest); //scanf("%s", dest);
		}

		switch(choice)
		{
			case 1://string length
				   ans= strlen(src);
				   printf("\n length of the %s is %u", src, ans);
				   break;
			case 2: // search a char in given string
				   printf("\n Enter char to search :: ");
				   scanf("%c", &find);

				   ptr= strchr(src, find);
				   if( ptr==NULL)
					   printf("\n %c is not found in %s", find, src);
				   else
					   printf("\n %c is found in %s at %d location", find, src,ptr-src );
				   break;

			case 3: // string copy
					ptr=strcpy(dest, src);
					//strcpy(dest, src);
					printf("\n dest using parameter=%s", dest);
					printf("\n dest using return value=%s", ptr);
					break;


			case 4: // string copy
					ptr=strcat(dest, src);
					printf("\n dest using parameter=%s", dest);
					printf("\n dest using return value=%s", ptr);
					break;

			case 5: // string compare
					ans1= strcmp(src,dest);
					if(ans1==0)
						printf("\n %s is equal to %s", src, dest);
					else if(ans1>0)
						printf("\n %s is bigger than %s", src, dest);
					else
						printf("\n %s is smaller than %s", src, dest);
					break;
			case 6: // string compare by ignoring cases
					ans1= strcasecmp(src,dest);
					if(ans1==0)
						printf("\n %s is equal to %s", src, dest);
					else if(ans1>0)
						printf("\n %s is bigger than %s", src, dest);
					else
						printf("\n %s is smaller than %s", src, dest);
					break;

			case 7: //search substring in given string
					ptr=strstr(src,dest);
					if(ptr==NULL)
						printf("\n %s[dest] is not found in %s[src]", dest, src);
					else
						printf("\n %s[dest] is found in %s[src] at %d location ", dest, src, ptr-src);
						break;
		}

		printf("\n Enter 1 to continue or 0 to exit ");
		scanf("%d", &choice);

	}while(choice!=0);


	return EXIT_SUCCESS;
}
int MenuChoices()
{
	int choice;
	printf("\n 1. strlen \n 2. strchr \n 3. strcpy \n 4. strcat ");
	printf("\n 5. strcmp \n 6. strcasecmp/strcmpi \n 7. strstr \n 0. Exit ");

	printf("\n Enter Your choice:: ");
	scanf("%d", &choice);

	return choice;
}
