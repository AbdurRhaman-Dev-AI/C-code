// #include <stdio.h>

// int main()
// {
//     int t;
//     scanf("%d", &t);

//     for (int cass = 0; cass < t; cass++)
//     {
//         int n;

//         scanf("%d", &n);

//         int fact = 1;

//         for (int i = 1; i <= n; i++)
//         {
//            fact *= i;
//         }
       
//         printf("%d\n", fact);
        
//     }
    
//     return 0;
// }





// #include <stdio.h>

// int main()
// {
//     int t;
//     scanf("%d", &t);

//     for (int cass = 0; cass < t; cass++)
//     {
//         int n;

//         scanf("%d", &n);

//         int fact = 1;

//         for (int i = 1; i <= n; i++)  // Use 'i <= n' to include 'n' in the multiplication
//         {
//            fact *= i;
//         }
       
//         printf("%d\n", fact);
//     }
    
//     return 0;
// }



// using long long


// #include <stdio.h>

// int main()
// {
//     int t;
//     scanf("%d",&t);

//     for (int Cs = 0; Cs < t; Cs++)
//     {
//         int n;
//         scanf("%d",&n);

//         long long fact = 1;

//         for (long long i = 1; i <= n; i++)
//         {
//             fact *= i;
//         }
//         printf("%lld\n", fact);
        
//     }   

//     return 0;
// }







//       from gpt


// #include <stdio.h>

// int main()
// {
//     int t;
//     scanf("%d", &t);

//     for (int Cs = 0; Cs < t; Cs++)
//     {
//         int n;
//         scanf("%d", &n);

//         long long int fact = 1;  // Use long long int for large factorials

//         for (int i = 1; i <= n; i++)
//         {
//             fact *= i;
//         }
//         printf("%lld\n", fact);  // Use %lld for printing long long int
        
//     }

//     return 0;
// }




//                                   from gpt


// #include <stdio.h>

// int main()
// {
//     int t;
//     scanf("%d", &t); // Input the number of test cases

//     for (int Cs = 0; Cs < t; Cs++)
//     {
//         int n;
//         scanf("%d", &n);  // Input the value of n

//         long long int fact = 1;  // Use long long int to store factorial values

//         for (int i = 1; i <= n; i++)
//         {
//             fact *= i;  // Calculate factorial
//         }

//         printf("%lld\n", fact);  // Correct format specifier for long long int
//     }

//     return 0;
// }




// using long long int by mee

#include <stdio.h>

int main()
{
    int z;
    scanf("%d", &z);

    for (int cs = 0; cs < z; cs++)
    {
        int n;
        scanf("%d", &n);

        long long int faqt = 1;
        for (long long int i = 1; i < n; i++)
        {
            faqt *= i;
        }
        printf("%lld\n", faqt);
        
    }    

    return 0;
}