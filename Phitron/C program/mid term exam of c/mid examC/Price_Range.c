
            // problem no : 3




#include <stdio.h>

int main()
{
    int N, X, Y;
    scanf("%d %d %d", &N, &X, &Y);
    int count = 0;
    int prices[N];

for (int i = 0; i < N; i++)
{
        scanf("%d", &prices[i]);
}

int *ptr = prices;
    
for (int i = 0; i < N; i++)
{
    if (*(ptr + i) >= X && *(ptr + i) <= Y)
    {
        count++;
    }
}

    printf("%d\n", count);
    return 0;
}
