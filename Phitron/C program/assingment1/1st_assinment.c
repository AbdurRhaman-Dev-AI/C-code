// Salami
#include <stdio.h>

int main() {
    int X, Y, Z;
    
    scanf("%d", &X);
    scanf("%d", &Y);
    scanf("%d", &Z);
    

    int total = X + Y + Z;
    

    printf("%d\n", total);
    
    return 0;
}




// Multiply



#include <stdio.h>

int main()
{
    long long A, B;
    
    scanf("%lld %lld", &A, &B)
    ;
      // Use %lld for long long input
    long long result = A * B;

      // Multiply two long long integers
    printf("%lld\n", result);
    
      // Print the result using %lld
    return 0;
}





//Khana Pina 1



#include <stdio.h>

int main()
{
    int M;
    
    scanf("%d", &M);
  
    if (M >= 1000) 
{
        printf("Three Kacchi\n");

}       else if (M >= 500)
{
        printf("One Large Pizza\n");

}       else if (M >= 250)
{
        printf("Three Small Burger\n");

}       else if (M >= 100)
{
        printf("Three Fuchka\n");

}       else
{
        printf("Nothing\n");
}

    return 0;
}




//khana pina2

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int X;

    
    scanf("%d",&X);
    
    if (X%3 ==0)
{
        printf("Yes\n");
    }        
    else
{
        printf("No\n");
    }

    return 0;
}







//khana pina 3

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{  int Abdur;
 
 scanf("%d",&Abdur);
 for(int i = 1; i<= Abdur; i++){
     if (i %3 ==0 || i%5 ==0 ){
         printf("%d Yes", i );
     }
     else{
         printf("%d No",i);
     }
     printf("\n");
 }
 


    return 0;
}
