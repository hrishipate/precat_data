#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x=10;
	int *px=&x;
	int **ppx=&px;

	printf("\n x=%d *(&x)=%d  *px=%d **ppx=%d", x, *(&x), *px, **ppx);
	printf("\n &x=%u", &x);
	printf("\n px=%u &px=%u", px, &px);
	printf("\n ppx=%u &ppx=%u", ppx, &ppx);

	*px=20;
  	printf("\n x=%d *(&x)=%d  *px=%d **ppx=%d", x, *(&x), *px, **ppx);
	printf("\n &x=%u", &x);
	printf("\n px=%u &px=%u", px, &px);
	printf("\n ppx=%u &ppx=%u", ppx, &ppx);

	**ppx=30;

	printf("\n x=%d *(&x)=%d  *px=%d **ppx=%d", x, *(&x), *px, **ppx);
	printf("\n &x=%u", &x);
	printf("\n px=%u &px=%u", px, &px);
	printf("\n ppx=%u &ppx=%u", ppx, &ppx);

	printf("\n sizeof (x)=%d", sizeof(x));
	printf("\n sizeof (px)=%d", sizeof(px));
	printf("\n sizeof (ppx)=%d", sizeof(ppx));
	return EXIT_SUCCESS;
}
