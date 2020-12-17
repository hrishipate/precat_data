#include <stdlib.h>
#include <stdio.h>

int floatcomp(const void* elem1, const void* elem2)
{
    if(*(const float*)elem1 < *(const float*)elem2)
        return -1;
    return *(const float*)elem1 > *(const float*)elem2;
}

int main()
{
    float array[10] = { 10.4, 5.1, 144.4, 145.5,
                        12.4, 51.1, 1.4, -15.7 };
    int i;

    for(i = 0; i < 10; i++)
        printf("%f\n", array[i]);
    printf("\n");

    qsort(array, 10, sizeof(float), floatcomp);

    for(i = 0; i < 10; i++)
        printf("%f\n", array[i]);

    return 0;
}
