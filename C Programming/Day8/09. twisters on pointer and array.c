
1. #include <stdio.h>
int main(void)
{
    int arr[] = {111, 222};
    int *ptr = arr;
    ++*ptr; //++(*ptr).
    printf("arr[0] = %d, arr[1] = %d, *ptr = %d", arr[0], arr[1], *ptr);
    return 0;
}
//Precedence of prefix ++ and * is same.
//Associativity of both is right to left.
//The expression ++*ptr has two operators of same precedence,
//so compiler looks for assoiativity.
//Associativity of operators is right to left.
//Therefore the expression is treated as ++(*ptr).
//Therefore the output of first program is " arr[0] = 112, arr[1] = 222, *ptr = 112"

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


2. #include <stdio.h>
int main(void)
{
    int arr[] = {111, 222};
    int *ptr = arr;
    *ptr++; // *(ptr++)
    printf("arr[0] = %d, arr[1] = %d, *ptr = %d", arr[0], arr[1], *ptr);
    return 0;
}
//the expression *ptr++ is treated as *(ptr++)
//as the precedence of postfix ++ is higher than *.
//Therefore the output of second program is “arr[0] = 111, arr[1] = 222, *ptr = 222“.



3. #include <stdio.h>
int main(void)
{
    int arr[] = {111, 222,333,444,555};
    int *ptr = arr;
    *++ptr;
    printf("arr[0] = %d, arr[1] = %d, *ptr = %d", arr[0], arr[1], *ptr);
    return 0;
}

/*The expression *++ptr has two operators of same precedence, 
so compiler looks for assoiativity. 
Associativity of operators is right to left. 
Therefore the expression is treated as *(++ptr). 
Therefore the output of second program is “arr[0] = 111, arr[1] = 222, *ptr = 222“.
*/
