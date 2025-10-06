// #include <stdio.h>
// int main()
// {
//     int n;

//     scanf("%d", &n);
//     int sum = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         sum += i;
//     }
//     printf("%d\n",sum);
    

//     return 0;
// }


// thanks gpt for the help

// #include <stdio.h>
// int main()
// {
//     int n;
    
//     scanf("%d", &n);
//     int sum = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         sum += i;  // Add 'i' instead of '1' to get the sum of numbers from 1 to n
//     }
//     printf("%d\n", sum);
    
//     return 0;
// }


// using long long

// #include <stdio.h>
// int main()
// {
//     int num;
//     scanf("%d", &num);

//     long long sum = 0;

//     for (int i = 1; i <= num; i++)
//     {
//         sum += i;
//     }

//     printf ("%lld\n",sum); 


//     return 0;
// }


// the math formula is = (n + 1)*n /2 

// this is the formula we are going to use

#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    long long sum = ((num + 1)*num)/2;

    printf("%lld\n", sum);

    return 0;
}

        // &

#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    long long sum = (1LL *(num + 1)*num)/2;

    printf("%lld\n", sum);

    return 0;
}
