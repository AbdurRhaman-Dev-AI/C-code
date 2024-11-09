
//  //  //Buy some egg and get some money back 

#include <stdio.h>


int main()
{
    int price;

    printf("Ask the price of 4 eggs\n");
    scanf("%d", &price);

    if (price <=50)
    {
        printf("Buy 4 eggs\n");
        printf("Get %d some money back", 50-price);
    }
    else
    {
        printf("Buy 2 eggs \n");
        printf("Get some money back");
    }
    
}



