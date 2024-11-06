#include <stdio.h>

int main()
{
    int X = 5;
    int *ptr;

    ptr = &X;

    printf("Value of X = %d\n", X);
    printf("Address of X = %u\n", &X);
    printf("Decimal address of X = %x\n", &X);

    printf(" Address of ptr = %d\n", ptr);
    printf("Value of ptr = %d\n", *ptr);

    return 0;
}