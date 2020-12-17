#include <stdio.h>
#include <stdlib.h>
#define SIZE 40
int main(void)
{
	char src[SIZE], del;
	int i, j;

	printf("\n Enter string :: ");
	scanf("%s", src);

	printf("\n enter char to delete :: ");
	scanf("%*c%c", &del);

	i=0;
	while(src[i]!='\0')
	{
		if(src[i]==del)
		{
			j=i;
			while(src[j]!='\0')
			{
				src[j]=src[j+1];
				j++;
			}
			i--;
		}
		i++;
		printf("\n%s", src);
	}

	printf("\n after  deleting %c out put is %s", del, src);
	return EXIT_SUCCESS;
}
