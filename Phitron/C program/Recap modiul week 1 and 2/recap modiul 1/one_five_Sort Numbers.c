// #include <stdio.h>
// int main()
// {
//     int a, b, c;

//     scanf("%d %d %d",&a, &b, &c);

//     if (a <= b && a <= c)
//     {
//         if (b <= c)
//         {
//             printf("%d %d %d\n",a, b, c);            
//         }
//         else
//         {
//             printf("%d %d %d\n", a, c, b);
//         }
//     }
//     else if (b <= a && b <= c)
//     {
//         if (a < c)
//         {
//             printf("%d %d %d",b, a, c);
//         }
//         else
//         {
//             printf("%d %d %d \n ");
//         }
        
//     }
//     else
//     {
//         if (a < b)
//         {
//             printf(%d %d birani hobe )
//         }
//         else
//         {
//             printf("%d %d %d\n");
//         }
//     }
    


//     return 0;
// }



#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d",&a, &b, &c);

    if (a <= b && a <= c)
    {
        if (b <= c)
        {
            printf("\n%d\n%d\n%d\n",a, c, b);
        }
        else
        {
            printf("\n%d\n%d\n%d\n", a, b, c);
        }
    }
    else if (b <= a && b <= c)
    {
        if (a <= c)
        {
           printf("\n%d\n%d\n%d\n",b, a, c);
        }
        else
        {
            printf("\n%d\n%d\n%d\n", b, c, a);
        }
        
    }
    else
    {
        if (a <= b)
        {
            printf("\n%d\n%d\n%d\n", c, a, b);
        }
        else
        {
            printf("\n%d\n%d\n%d\n", c, b, a);
        }
        
    }

    printf("\n%d\n%d\n%d\n", a, b, c);
    

    return 0;
}