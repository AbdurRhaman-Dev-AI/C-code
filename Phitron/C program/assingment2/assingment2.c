// #include <stdio.h>

// int main() {
//     char C;

//     printf("Enter a lowercase letter: ");
//     scanf("%c", &C);

//     switch(C) {
//         case 'a':
//         case 'e':
//         case 'i':
//         case 'o':
//         case 'u':
//             printf("Vowel\n");
//             break;
//         default:
//             printf("Consonant\n");
//             break;
//     }

//     return 0;
// }




// #include <stdio.h>

// int main()
// {
// int N, count_0 = 0, count_1 = 0;
    

//     scanf("%d", &N);

//     for (int i = 0; i < N; i++)
// {
//         char ch;
//         scanf(" %c", &ch);
        
//         switch(ch)

// {
//         case '0':
//             count_0++;
//          break;
//         case '1':
//             count_1++;
//         break;
// }
// }
//     printf("%d %d\n", count_0, count_1);

//     return 0;
// }






// #include <stdio.h>

// int main()
// {
//     int N, X;
    

//     scanf("%d", &N);
    
//     int arr[N];
    

//     for(int i = 0; i < N; i++)
// {
//         scanf("%d", &arr[i]);
// }
    

//     scanf("%d", &X);
    

//     arr[X - 1] ^= 1;
    

//     for(int i = 0; i < N; i++)
// {
//         printf("%d ", arr[i]);
// }
    
//     return 0;
// }





// #include <stdio.h>

// int main() {
//     int N, i, j;
//     scanf("%d", &N);


//     for(i = 1; i <= N; i++)
// {
//         for (j = 1; j <= i; j++)
// {
//             printf("%d", j);
// }
//         printf("\n");
// }


//     for(i = 1; i < N; i++)
// {
//         printf("%*s", i, "");

//         for(j = 1; j <= N - i; j++)
// {
//             printf("%d", j);
// }
//         printf("\n");
// }

//     return 0;
// }





// #include <stdio.h>

// int main()
// {
//     int N;
//     scanf("%d", &N);
    
//     int salami[N];
//     int max_salami = 0;


//     for (int i = 0; i < N; i++)
// {
//         scanf("%d", &salami[i]);
//         if (salami[i] > max_salami)
// {
//             max_salami = salami[i];
// }
// }


//     for (int i = 0; i < N; i++)
// {
//         printf("%d ", max_salami - salami[i]);
// }

//     return 0;
// }






// #include <stdio.h>

// int main()
// {
// int N;

// scanf("%d", &N);
    
// int salami[N];

// int max_salami = 0;


// for (int i = 0; i < N; i++)

// {

// scanf("%d", &salami[i]);

// if (salami[i] > max_salami)

// {

// max_salami = salami[i];

// }

// }

// for (int i = 0; i < N; i++)

// {

// printf("%d ", max_salami - salami[i]);

// }

// return 0;
// }




// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {
    
//     int N, count_0 = 0, count_1 = 0;
//         scanf("%d", &N);
            
// for (int i = 0; i < N; i++){
//         char ch;
//         scanf(" %c", &ch);        
//         switch(ch){
//      case '0':
//      count_0++;
//      break;
//      case '1':
//      count_1++;
//      break;
// }
// }
//     printf("%d %d\n", count_0, count_1);
//     return 0;
// }






int main(){
int N;

scanf("%d", &N);    
int salami[N];

int max_salami = 0;
for (int i = 0; i < N; i++){

scanf("%d", &salami[i]);
if (salami[i] > max_salami){

max_salami = salami[i];
}
}
for (int i = 0; i < N; i++){
printf("%d ", max_salami - salami[i]);
}

return 0;
}
