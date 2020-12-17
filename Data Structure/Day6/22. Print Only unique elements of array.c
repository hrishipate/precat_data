
#include <stdio.h>
#include <stdlib.h>
#define SIZE 7
int main(void)
{
	int arr[SIZE]={10, 20, 10, 9, 20,20, 2}, i, j, cnt=0, index;

	printf("\n elemenets array :: \n");
	for(i=0; i<SIZE; i++)
	{
		printf("\narr[%d] %d [%u]", i, arr[i], &arr[i]);
	}

	for(i=0; i<SIZE-cnt ; i++)
	{
		for(j=i+1; j<SIZE-cnt; j++)
		{
			if( arr[i]==arr[j])
			{
				cnt++;
				for( index=j; index<SIZE-1 ; index++ )
				{
					arr[index]=arr[index+1];
				}
			}
		}
	}

	printf("\n no of duplicate elements :: %d", cnt);
	for(i=0; i<SIZE-cnt; i++)
	{
		printf("\narr[%d] %d [%u]", i, arr[i], &arr[i]);
	}


	return EXIT_SUCCESS;
}
