// #include <stdio.h>

// int main()
// {
//     long long t;
//     scanf("%lld", &t);


//     for (long long  cs = 0; cs < t; cs++)
//     {
//         long long  x, y;
//         scanf("%lld %lld", &x, &y);

//         if (x > y)
//         {
//             long long temp = x;
//             x = y;
//             y = temp;
//         }
        

//         long long sum = 0;

//         for (long long i = x + 1; i < y; i++)
//         {
//             if (i % 2 != 0)
//             {
//                 /* Odd*/
//                 sum += i;
//             }
//         }
//         printf("%lld\n",sum);
//     }
    

//     return 0;
    
// }




////////////from gtp



#include <stdio.h>

int main()
{
    long long t;
    scanf("%lld", &t);

    for (long long cs = 0; cs < t; cs++)
    {
        long long x, y;
        scanf("%lld %lld", &x, &y);

        if (x > y)
        {
            long long temp = x;
            x = y;
            y = temp;  // Corrected swapping
        }

        long long sum = 0;

        for (long long i = x + 1; i < y; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;  // Adding only odd numbers
            }
        }
        printf("%lld\n", sum);
    }

    return 0;
}

