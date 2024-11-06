
//Swapping values using function and pointer

#include <stdio.h>

int main()
{
    int X = 10, Y = 20;

    printf("\nBefore swapping\n");
    printf("X = %d\n", X);
    printf("Y = %d\n", Y);

    void Swapping(int *ptr1, int *ptr2)
    {
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    }
    printf("\nAfter swapping\n");
    Swapping(&X, &Y);
    printf("X = %d\n", X);
    printf("Y = %d\n", Y);

    return 0;
}