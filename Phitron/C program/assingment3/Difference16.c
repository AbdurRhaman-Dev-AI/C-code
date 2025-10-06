#include <stdio.h>

int main()
{

int A, B;
scanf("%d %d", &A, &B);

int *ptrA = &A;
int *ptrB = &B;

int difference = (*ptrA - *ptrB);
if (difference < 0)
{
    difference = -difference;
}

printf("%d\n", difference);

return 0;

}