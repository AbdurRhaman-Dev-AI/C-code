
        // if price is high then dont buy a car else buy a car


#include <stdio.h>

int main()
{
    int price;
    printf("Enter the price of the car you want to buy :\n");
    scanf("%d", &price);

    if (price > 500000)
    {
        printf("it is too expensive Out of budget('-')\n");
        printf("Dont need to buy this car\n");
    }
    else
    {
        printf("it is not too expensive\n");
        printf("Buy this car (*-*)\n");
        printf("Get %d money back\n", 500000 - price);
    }
    
    return 0;
}