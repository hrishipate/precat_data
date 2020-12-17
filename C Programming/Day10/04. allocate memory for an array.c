
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int *ptr=NULL, no, index;

	printf("\n size of ptr=%d", sizeof(ptr));
	printf("\n How many elements u want :: ");
	scanf("%d", &no);
	//ptr= (int*)malloc(sizeof(int)*-1); //fail to allocate memory
	ptr= (int*)malloc(sizeof(int)*no);
	if(ptr==NULL)
		printf("\n unable to allocate memory");
	else
	{
		printf("\n ptr=%u &ptr=%u", ptr, &ptr);
		printf("\n ptr=%p &ptr=%p", ptr, &ptr);
		printf("\n enter elements of array ::\n");
		for(index=0; index<no; index++)
		{
			printf("\n *(ptr+%d) :: ", index);
			//scanf("%d", (ptr+index)); // pointer notation
			 // scanf("%d", (index+ptr));
			//scanf("%d", &ptr[index] ); // array notation
			scanf("%d", &index[ptr] );
		}

		printf("\n elements of array ::\n");
		for(index=0; index<no; index++)
		{
			// pointer notation
			//printf("\n *(ptr+%d) %-5d [%u] ", index, *(ptr+index), (ptr+index));
			//printf("\n *(%d+ptr) %-5d [%u] ", index, *(index+ptr), (index+ptr));
			// array notation
			//printf("\n ptr[%d] %-5d [%u] ", index, ptr[index], &ptr[index]);
			printf("\n [%d]ptr %-5d [%u] ", index, index[ptr], &index[ptr]);
		}
		free(ptr);
		ptr=NULL;
		printf("\n memory is free");
	}
	return EXIT_SUCCESS;
}


