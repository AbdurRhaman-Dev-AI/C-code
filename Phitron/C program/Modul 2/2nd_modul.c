// #include<stdio.h>
// int main(){

// printf("Hello Gay!");
// return 0;
// }














// #include<stdio.h>

// int main (){

//     printf("You\n");

//     printf("are\n");

//     printf("GAY\n");

//     printf("10.10");

//     return 0;
// }


// #include <stdio.h>
// int main(){

// for(int j=5;j<=10;j++)
// {
//      printf("hi ");
// }
// }









// #include <stdio.h>
// int main()
// {
// for(int i=0;i<=5;i++)
// {
//      for(int j=1;j<3;j++)
//      {
//          printf("*");
//      }
// }
// }








//4. What will be the output of the following code?

// #include <stdio.h>
// int main()
// {
//     int i=0,j=0;
//     for(j=1;j<=5;j++)
//     {
//         i++;
//     }
//     printf("%d",j);
// }





//5. What will be the output of the following code?

// #include<stdio.h>

// int main()
// {
//     for(int i=0;i<=10;i++)
//     {
//         int x = 4;
//     }
//     printf("%d",i);
// }





//6. What will be the output of the following code?


// #include<stdio.h>

// int main()
// {
//     int i = 1;
//     do
//     {
//         printf("%d ",i);
//         i++;
//     } while (i<5);
// }





//7. How many times “hello” will be printed?

// #include<stdio.h>

// int main()
// {
//     int i = -5;
//     while(i<3)
//     {
//         printf("hello ");
//         i+=2;
//     }
// }










// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {
//     int A;
//     long long B;
//     float C;
//     char D;
    
//     // Input values
//     scanf("%d", &A);
//     scanf("%lld", &B);
//     scanf("%f", &C);
//     scanf(" %c", &D);        
    
//     // Output values
//     printf("%d\n", A);       
//     printf("%lld\n", B);
//     printf("%.2f\n", C);     
//     printf("%c\n", D);

// }






// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {
//     int A;
//     long long B;
//     float C;
//     char D;
    
//     // Input values
//     scanf("%d", &A);
//     scanf("%lld", &B);
//     scanf("%f", &C);
//     scanf(" %c", &D);        
    
//     // Output values
//     printf("%d\n", A);       
//     printf("%lld\n", B);
//     printf("%.2f\n", C);     
//     printf("%c\n", D);

    

//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
//     return 0;
// }










#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() 
{
    int N;

    scanf("%d", &N);
    
    
    for (int i = 1; i <= N; i++)
{
        
        if (i % 5 == 0)
{
            printf("%d Yes\n", i);
}   else 
{
            printf("%d No\n", i);
}
}
    
    return 0;
}
