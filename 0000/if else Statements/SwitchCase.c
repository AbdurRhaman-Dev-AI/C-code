
        // 7 days of week using switch case

#include <stdio.h>

int main()
{
    int day;

    printf("Enter the day number\n");
    scanf("%d", &day);

    if (day < 1 || day > 7)
    {
        printf("Invalid day number\n");
        return 0;
    }
    else
{
    switch (day)
    {
        case 1:
        printf("Monday");
        break;

        case 2:
        printf("Tuesday");
        break;

        case 3:
        printf("Wednesday");
        break;

        case 4:
        printf("Thursday");
        break;

        case 5:
        printf("Friday");
        break;

        case 6:
        printf("Saturday");
        break;

        default :
        printf("Sunday \n");
        printf("It is a holiday");
        break;
    }
}
}