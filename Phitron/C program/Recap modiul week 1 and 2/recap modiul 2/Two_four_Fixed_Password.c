// #include <stdio.h>

// int main()
// {
  
//     while (1)
//     {
//        int n;
//        scanf("%d", &n);

//        if (n == 1999)
//        {
//         printf("Correct\n");
//         break;
//        }
//        else
//        {
//         printf("Wrong\n");
//        }
       
//     }
    
//     return 0;
// }


#include <stdio.h>

int main()
{
    int n;

    while (scanf("%d",&n) != EOF )
    {
        if (n == 999)
        {
            printf("Correct Pass\n");
            break;
        }
        else
        {
            printf("Wrong Pass\n");
        }
        
    }
    

    return 0;
}