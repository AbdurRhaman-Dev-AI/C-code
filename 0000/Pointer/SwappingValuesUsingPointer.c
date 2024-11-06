#include <stdio.h>

int main()
{
    int X = 10, Y = 20, temp;
    int *ptr1, *ptr2;

    ptr1 = &X;
    ptr2 = &Y;

    printf("\nBefore swapping\n");
    printf("X = %d\n", X);
    printf("Y = %d\n", Y);

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("\nAfter swapping\n");
    printf("X = %d\n", X);
    printf("Y = %d\n", Y);

    return 0;
}