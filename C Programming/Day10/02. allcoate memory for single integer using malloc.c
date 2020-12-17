
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *ptr=NULL;

	ptr= (int*)malloc(sizeof(int)*1);
	if(ptr==NULL)
		printf("\n unable to allocate memory ");
	else
	{
		printf("\n ptr=%u &ptr=%u", ptr, &ptr);
		//*ptr=55;
		printf("\n Enter *ptr :: ");
		scanf("%d", ptr);//correct
		//scanf("%d", *ptr); // value of ptr
		//scanf("%d", &ptr); //address of ptr
		printf("\n *ptr=%d", *ptr);
		free(ptr);
		ptr=NULL;
		printf("\n memory is freed");
		printf("\n *ptr=%d", *ptr);
	}
	return EXIT_SUCCESS;
}
// to compile-->>> gcc filename.c ---> gives a.out
//                 dcc demo2.c -->>> a.out
//to run executable -->> ./a.out
// check using valgrind ---> valgrind ./a.out


// gcc -o demo2.out demo2.c
//to run executable -->> ./demo2.out
// check using valgrind ---> valgrind ./demo2.out
