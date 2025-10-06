// #include <stdio.h>

// int main(){

//     char x;

//     scanf("%c",&x);

//     if ('a' <= x && x <= 'z')
//     {
//         x -= 32;
//     }
//     else{
//         x +=32;
//     }
//     printf("%c\n",x);

//     return 0;
// }



// #include <stdio.h>

// int main(){

//     char x;

//     scanf("%c",&x);

//     if ('a' <= x && x <= 'z')
//     {
//         x -= 32;
//     }
//     else{
//         x +=32;
//     }
//     printf("%d\n",x);

//     return 0;
// }

// #include <stdio.h>

// int main(){

//     char x;

//     scanf("%c",&x);

//     if ('a' <= x && x <= 'z')
//     {
//         // x -= 32;
//     }
//     // else{
//     //     x +=32;
//     // }
//     printf("%d\n",x);

//     return 0;
// }



#include<stdio.h>

int main()
{
    char XX;
    scanf("%c",&XX);

    if('a' <= XX && XX <= 'z')
    {
        //lower case
        XX -= 32;
    }
    else
    {
        //uper case
        XX += 32;
    }
    printf("%c\n",XX);
    printf("%d\n",XX);
 
return 0;
}



// #include <stdio.h>
// int main()
// {
//     char xx;
//     scanf("%c",& xx);

//     if ('A' <= xx && xx <= 'Z')
//     {
//         //lower case
//     }
    
    
//     printf("%d\n",xx);

//     return 0;
// }