
// Doing some simple equations using pointers

#include <stdio.h>

int main()
{
    int X = 20, Y = 10, sum;
    int *ptr1, *ptr2;

    ptr1 = &X;
    ptr2 = &Y;

    sum = *ptr1 + *ptr2;
    printf("\nSum = %d\n\n", sum);

    sum = *ptr1 - *ptr2;
    printf("Difference = %d\n\n", sum);

    sum = *ptr1 * *ptr2;
    printf("Product = %d\n\n", sum);

    sum = *ptr1 / *ptr2;
    printf("Quotient = %d\n\n", sum);

    return 0;
}