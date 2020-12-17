
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	{
		int x=300, y=300, result=0;

		result=x*y;
		printf("\n result=%d", result);
	}
	{
			short int x=300, y=300, result=32767;
			printf("\n result=%hd", result);

			result=32768;
			printf("\n result=%hd", result);

			result=32770;
			printf("\n result=%hd", result);

			result=65535;
			printf("\n result=%hd", result);

			result=65536;
			printf("\n result=%hd", result);


			result=x*y;
			printf("\n result=%hd", result);
		}
	{
		char ch=122;
		printf("\nch=%d  ch=%c", ch,ch);

		ch=128;
		printf("\nch=%d  ch=%c", ch,ch);

		ch=140;
		printf("\nch=%d  ch=%c", ch,ch);
	}
	{
			unsigned char ch=122;
			printf("\nch=%d  ch=%c", ch,ch);

			ch=128;
			printf("\nch=%d  ch=%c", ch,ch);

			ch=140;
			printf("\nch=%d  ch=%c", ch,ch);
	}
	{

	}

	return 0;
}
