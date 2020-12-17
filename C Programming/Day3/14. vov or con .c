#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch;

	printf("\n Enter char :: ");
	scanf("%c", &ch);

	printf("\n ch=%c ch=%d", ch, ch);

	if(ch>=97 && ch<=122) // convert small to capital
		ch-=32; //ch=ch-32;

	//if(ch>=65 && ch<=90) // convert capital to small
		//ch+=32; //ch=ch+32;

	printf("\n ch=%c ch=%d", ch, ch);

//	if( ch=='A' || 'E' || 'I' || 'O' || 'U')
	if( ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
		printf("\t %c is vov ", ch);
	else if(ch>=65 &&  ch<=90)
		printf("\t %c is con ", ch);
	else if(ch>=48 &&  ch<=57)
		printf("\t %c is digit ", ch);
	else
		printf("\t %c is other char ", ch);
	return EXIT_SUCCESS;
}
