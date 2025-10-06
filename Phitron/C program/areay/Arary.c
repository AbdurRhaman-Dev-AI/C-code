// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%f",&n);

//     int a [n + 5];

//     for (int i = 0; i < n + n ; i++)
//     {
//         scanf("%d",&a[i]);

//         int f [100000] = {0};

//         for (int i = 0; i < n; i++)
//         {
//             f[a[i]];
//         }

//         for (int i = 0; i < 10; i++)
//         {
//             printf("%d",f[i]);
//         }
//         return 0;
//     }
// }









#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);  // Corrected to %d for int input

    int a[n + 5];

    // Read elements into the array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int f[100000] = {0};  // Moved outside the loop

    // Count occurrences of each number
    for (int i = 0; i < n; i++)
    {
        f[a[i]]++;
    }

    // Print occurrences for the first 10 elements
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", f[i]);
    }

    return 0;
}
