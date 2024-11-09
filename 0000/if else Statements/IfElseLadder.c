
        // using if else ladder

#include <stdio.h>

int main()
{
    int A ;
    printf("Enter A number between 0 to 10 : ");
    scanf("%d", &A);

    printf("\nBefor if else ladder\n", A);

    if (A < 10)
    {
        printf("if first condition is true\n");
    }
    else if (A > 10)
    {
        printf("if second condition is true\n");
    }
    else if (A != 10)
    {
        printf("if third condition is true\n");
    }
    else if (A == 10)
    {
        printf("if fourth condition is true\n");
    }
    else
    {
        printf("else condition is true\n");
    }
    
    return 0;
}