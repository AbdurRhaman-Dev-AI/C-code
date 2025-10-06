

// //                     Formate specifier


// // short int %__DBL_HAS_DENORM__

// // int %d

// // long int &ld 

// // long long %lld

// // char %c

// // float %f

// // double %lf 

// // long double %Lf 

// // unsigned int %u 

// // unsigned short %hu 

// // unsigned long int %lu

// // unsigned long long int %llu 





// #include<stdio.h>

// int main(){

//     int a;

//     scanf("%d", &a);

//    printf("%d", a);
//     return 0;
// }



// #include<stdio.h>

// int main(){

//     int a = 20;

//     // scanf("%d", &a);

//    printf("%d", a);
//     return 0;
// }





// #include<stdio.h>

// int main(){

//     int a, b, c;

//     scanf("%d %d %d", &a, &b, &c);

//    printf("%d %d %d", a, b, c );

//     return 0;
// }




// #include<stdio.h>

// int main(){

//     int a, b, c;

//     scanf("%d %d %d", &a, &b, &c);

//    printf("a = %d b = %d c = %d",  b, c );

//     return 0;
// }

// #include<stdio.h>

// int main(){

//     int c, b, a;

//     scanf("%d %d %d", &c, &b, &a);

//    printf("a = %d b = %d c = %d",  c, b, a);

//     return 0;
// }



// #include<stdio.h>

// int main(){

//     int  b, c;
//     short int a =7;

//     scanf("%hd %d %d", &a, &b, &c);

//    printf("a = %d b = %d c = %d",  a, b, c);

//     return 0;
// }



// #include<stdio.h>

// int main(){
//     float a;

//     scanf("%f",&a);

//     printf("%f", a);
//     // printf("%.3f", a);
//     // printf("%.5f", a);
//     // printf("%.10f", a);
         
//     return 0;
// }



// #include<stdio.h>

// int main(){

//     double a;

//     scanf("%lf", &a);

//     printf("%lf",a);
//     // printf("%.2lf",a);
//     // printf("%10.lf",a);
    

//     return 0;
// }





#include<stdio.h>

int main(){

    int a, b;

    // scanf("%d", &a);


    scanf("%d %d", &a , &b);

    printf("%08d\n",a);
    printf("%08d\n",b);

    return 0;
}