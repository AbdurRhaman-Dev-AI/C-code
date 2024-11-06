
    //Access Array Elements Using Pointers

#include <stdio.h>

int main()
{
    int A[5] = {10, 500, 300, 430, 50};
    int *ptr, i;

    ptr = &A;
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *ptr);
        ptr++;
    }

    return 0;
    
}