#include <stdio.h>

int main()
{
    float price ;
    float rate ;
    float time ;
    float si ;

    printf("Enter the value of price : ");
    scanf("%f", &price);

    printf("Enter the value of rate : ");
    scanf("%f", &rate);

    printf("Enter the value of time : ");
    scanf("%f", &time);

    si = (price * rate * time) / 100;

    printf("The simple interest is : %f", si);
}