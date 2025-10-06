// // #include <stdio.h>

// // int main()
// // {
// //     int n;
// //     scanf("%d",&n);

// //     // for (int i = 1; i <= n; i++)

// //     for (int i = 1, k = 1; i <= n; i++, k += 2 )
// //     {
// //         // for (int j = 1; j <= i; j++)
// //         int space = n - n - i;
// //          wille (space--);
// //          printf(" ");
// //         for(int j = 1; j <= k; j++)
// //         {
// //             printf("*");
// //         }
// //         printf("\n");
// //     }
    
    
    

// //     return 0;
// // }


// /*

//  N = 4      
//             k i  s
//    *        1 1  3
//   ***       3 2  2
//  *****      5 3  1
// *******     7 4  0
// *******     7 4  0
//  *****      5 3  1
//   ***       3 2  2
//    *        1 1  3

// /* /*

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);

//     for (int i = 1, k = 1; i <= n; i++, k += 2 )
//     {
//         int space = n - i;
//         while (space--)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= k; j++)
//         {
//             printf ("*");
//         }
//         printf("\n");        
        
//     }
    
//     return 0;
// }





#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int  k = 1;

    for (int i = 1; i <= n; i++, k += 2)
    {
        int space = n - i;

        while(space--)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("#");
        }
        printf("\n");       
    }   

    k -= 2;

    for (int i = n; i >= 1; i--, k -= 2)
    {
        int space = n -i;

        while (space--)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("@");
        }
        printf("\n");
        
        
    }
    


    return 0;
}