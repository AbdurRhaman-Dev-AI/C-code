// #include <stdio.h>

// int main(){



//    for (int i =0; i <10; i++){
//     printf("Hello Gay\n");
//     }

//     return 0;
// }




// #include <stdio.h>

// int main(){

//    for (int i = 0; i <10; i++){
//     printf("%d\n", i + 1);
//     }

//     return 0;
// }





// #include <stdio.h>

// int main(){

//    for (int j =0; j<5; j++){
//        for (int k = 0; k<10; k++){
//             printf("%d", k + 1);
//        }
//        printf("\n");
//     }

//     return 0;
// }






// #include <stdio.h>

// int main(){

//     int cnt = 0;
//    for (int j =0; j<10; j++){


//        for (int k = 0; k<10; k++){
        
//         cnt++;

//        }
//        printf("%d\n", cnt);
//     }

//     return 0;
// }




// #include <stdio.h>

// int main(){

//     int cnt = 0;
//    for (int j =0; j<3; j++){

//        for (int k = 0; k<6; k++){
           
//            for (int l = 0; l <9; l++){
        
//                 cnt++;

//             }
//         }
//        printf("%d\n", cnt);
//     }

//     return 0;
// }









// #include <stdio.h>

// int main(){

//     int cnt = 0;
//    for (int a =0; a<3; a++){

//        for (int b = 0; b<6; b++){
           
//            for (int c = 0; c <9; c++){

//                for(int d = 0; d <12; d++){

//                    for (int e = 0; e <15; e++){

//                         for(int f = 0; f <18; f++){

//                             for(int g = 0; g <21; g++){

//                                 for (int h = 0; h <24; h++){

//                                     for (int i =0; i <27; i++){

//                                         for (int j = 0; j <30; j++){


//                                              cnt++;


//                                         } 
//                                     } 
//                                 }              
//                             }
//                         }
//                     }
//                 }                  printf("%d\n", cnt);
//             }              
//         }

//     }

//      return 0;
// }



// #include<stdio.h>

// int main(){
//     for( int i = 1 ; i <= 5; i = i + 1)
//     {
//         printf("%d\n",i);
//     }
// }


// #include<stdio.h>

// int main(){
//     int n;

//     scanf("%d", &n);

//     printf("%d X 1 = %d\n", n, n * 1);
//     printf("%d X 2 = %d\n", n, n * 2);
//     printf("%d X 3 = %d\n", n, n * 3);
//     printf("%d X 4 = %d\n", n, n * 4);
//     printf("%d X 5 = %d\n", n, n * 5);
//     printf("%d X 6 = %d\n", n, n * 6);

//     return 0;
// }



// #include<stdio.h>

// int main(){
//     int n;

//     scanf("%d", &n);

//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d X %d = %d\n", n, i, n * i);
//     }
    
//     return 0;
// }




// #include<stdio.h>

// int main(){
//     int n;

//     scanf("%d", &n);

//     for (int j = 1; j <= n; j++)
//     {   
//         for (int i = 1; i <= 10; i++)
//         {
//             printf("%d X %d = %d\n", j, i, j * i);
//         }
//         printf("\n\n");
//     }
    
//     return 0;
// }







// #include <stdio.h>

// int main(){

//     for (int i = 100; i <=300; i++)
//     {
//         if (i % 2 == 0 && i % 5 == 0 ){
//             printf("%d is the number \n", i);
//         }
//     }
    
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     for (int i = 1; i <= 5; i++)
//     {
//         printf("%d\n",i);
//     }
    
// }




// it become an infinity loop
// #include<stdio.h>

// int main(){
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j < i; i++)
//         {
//             printf("%d");
//         }
        
//     }
    
// }





// #include<stdio.h>

// int main(){

//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
        
//     }
    
// }




// it will print the star patten
// #include<stdio.h>

// int main(){

//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
        
//     }
    
// }


// another infinity loop 
// #include<stdio.h>

// int main(){

//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j >= i; j++)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
        
//     }
    
// }





// #include<stdio.h>

// int main(){

//     for (int i = 1; i <= 8; i++)
//     {
//         for (int j = i; j >= 1; j--)
//         {
//             printf("%d", j);
//         }
//         printf("\n\n");


// //   output will be this one 
// // 21
// // 321
// // 4321
// // 54321
// // 654321
// // 7654321
// // 87654321
        
//     }
    
// }






// #include<stdio.h>

// int main(){

// int n =8;

//     for(int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d",j);
//         }
        
//         printf("\n");
//     }
//     return 0;

// // the output will be
// //        1
// //       12
// //      123
// //     1234
// //    12345
// //   123456
// //  1234567
// // 12345678

// }







// #include<stdio.h>

// int main(){

// int n =8;

//     for(int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", j);
//         }
        
//         printf("\n");
//     }
//     return 0;

// //     the output is 

// //        1
// //       1 2
// //      1 2 3
// //     1 2 3 4                                    
// //    1 2 3 4 5                                
// //   1 2 3 4 5 6
// //  1 2 3 4 5 6 7
// // 1 2 3 4 5 6 7 8

// }



// #include<stdio.h>

// int main(){

//     for(int i=0; i<=10; i++)
//     {
//         printf("hi ");
//         if(i>2)
//         {
//             break;
//         }
//     }

// }




// #include<stdio.h>

// int main(){

//     int i=3;
// while(i<=5)
// {
//      for(int j=0;j<i;j++)
//      {
//          printf("*");
//      }
//      i++;
//  }

// }



// #include<stdio.h>

// int main(){

//   int i = -3;
// while(i<0)
// {
//     for(int j=0;j<5;j++)
//     {
//         printf("#");
//      }
//      i--;
// }

// }





// #include<stdio.h>

// int main(){

//  for(int i=-4;i>=0;i++)
//     {
//         for(int j=5;j<2;j++)
//         {
//             printf("hi ");
//         }
//     }

// }

//  Which one is an infinite loop?
// 1, for (int i =-4;i>=0;i--)


// 2, for (int i=4; i<=0; i++)

// 3, for (int i=-4;i<=0;i--)




// Write a loop that can print all values from 1 to 10 inclusive.

// 1, for (int i = 0; i < 10; i++){ printf("%d",i);}

// 2, for (int i = 1; i < 10; i++){ printf("%d",i);}

// 3, for (int i = 1; i < 10; i++){ printf("%d",i);}

// 4, for (int i = 1; i < 10; i++){ printf("%d",i);}




// #include<stdio.h>

// int main(){

//  for(int i=0;i<5;i++)
//     {
//         if(i==3)
//         {
//             continue;
//         }
//         printf("%d ",i);
//     }

// }



// #include<stdio.h>

// int main(){
// for(int i=0; i<=10; i++)
//     {
//         if(i>2)
//         {
//             break;
//         }
//         printf("hi ");
//     }
// }






// #include<stdio.h>

// int main(){
// for(int i=0; i<=10; i++)
//     {
//         if(i>2)
//         {
//             continue;
//         }
//         printf("hi ");
//     }

// }


// #include<stdio.h>
// int main() {
//     int n, row, col;

//     printf("Enter N =");
//     scanf("%d",&n);

//     for (row = 1; row <= n; row++)
//     {
//         for (col = 1; col <= row; col++)
//         {
//             printf("%d",col);

//         }
//         printf("\n");
        
//     }
//     return 0;
// // 1     
// // 12    
// // 123   
// // 1234  
// // 12345 
// // 123456
// // 1234567
// // 12345678
// // 123456789

// }





// #include<stdio.h>
// int main() {
//     int n, row, col;

//     printf("Enter N =");
//     scanf("%d", &n);

//     for (row = 1; row <= n; row++)
//     {
//         for (col = 1; col <= row; col++)
//         {
//             printf("%d", col);
//         }
//         printf("\n");
//     }

//     return 0;
// }






// #include<stdio.h>
// int main() {
//     int n, row, col;

//     printf("Enter N =");
//     scanf("%d",&n);

//     for (row = 1; row <= n; row++)
//     {
//         for (col = 1; col <= row; col++)
//         {
//             printf("%d",row);

//         }
//         printf("\n");
        
//     }
//     return 0;

// // 1
// // 22
// // 333
// // 4444
// // 55555
// // 666666
// // 7777777
// // 88888888
// // 999999999

// }



// #include<stdio.h>
// int main() {
//     int n, row, col;

//     printf("Enter N =");
//     scanf("%d",&n);

//     for (row = 1; row <= n; row++)
//     {
//         for (col = 1; col <= row; col++)
//         {
//             printf("%d",col%2);

//         }
//         printf("\n");
        
//     }
//     return 0;


// // 1
// // 10
// // 101
// // 1010
// // 10101
// // 101010
// // 1010101
// // 10101010
// // 101010101
// }






// #include<stdio.h>
// int main() {
//     int n, row, col;

//     printf("Enter N =");
//     scanf("%d",&n);

//     for (row = 1; row <= n; row++)
//     {
//         for (col = 1; col <= row; col++)
//         {
//             printf("%d",row%2);

//         }
//         printf("\n");
        
//     }
//     return 0;

// // 1
// // 00
// // 111
// // 0000
// // 11111
// // 000000
// // 1111111
// // 00000000
// // 111111111
    
// }