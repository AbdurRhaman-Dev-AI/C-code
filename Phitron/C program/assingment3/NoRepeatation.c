#include <stdio.h>

int main()
{

int N;
scanf("%d", &N);

int array[100000];
int frequency[100001] = {0};

for (int i = 0; i < N; i++)
{
    scanf("%d", &array[i]);
    frequency[array[i]]++;
}

int uniqueCount = 0;
for (int i = 0; i < N; i++)
{
if (frequency[array[i]] == 1)
{
    uniqueCount++;
}
}

printf("%d\n", uniqueCount);

return 0;
}
