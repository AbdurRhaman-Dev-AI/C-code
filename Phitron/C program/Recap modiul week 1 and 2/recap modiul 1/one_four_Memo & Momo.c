// //Using long long

// #include <stdio.h>
// int main()
// {
//     long long a, b, x;

//     scanf ("%lld %lld %lld", &a, &b, &x);

//     if (a % x == 0 && b % x == 0)
//     {
//         printf("They Both");
//     }
//     else if (a % x == 0)
//     {
//         printf("Memo");
//     }
//     else if (b % x == 0)
//     {
//         printf("Momo");
//     }
//     else
//     {
//         printf("No One");
//     }
    

//  return 0;   
// }






//using int

#include <stdio.h>

int main()
{
    int a, b, z;

    scanf("%d %d %d", &a, &b, &z);

    if (a % z == 0 && b % z == 0)
    {
        printf("They Both are digibol");
    }
    else if (a % z == 0)
    {
        printf("Only Memo is digibol");
    }
    else if (b % z == 0)
    {
        printf("Only Momo is digibol");
    }
    else
    {
        printf("No One is digibol");
    }

    return 0;
}