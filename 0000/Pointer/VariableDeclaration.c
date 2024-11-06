#include <stdio.h>

int main()
{
    int A = 10, B = 20, C = 30, D = 40, E = 50;
    int *ptr;

    ptr = &A;
    printf("A = %d\n", *ptr);
    printf("A = %u\n\n", ptr);

    ptr = &B;
    printf("B = %d\n", *ptr);
    printf("B = %u\n\n", ptr);

    ptr = &C;
    printf("C = %d\n", *ptr);
    printf("C = %u\n\n", ptr);

    ptr = &D;
    printf("D = %d\n", *ptr);
    printf("D = %u\n\n", ptr);

    ptr = &E;
    printf("E = %d\n", *ptr);
    printf("E = %u\n", ptr);

    return 0;
}