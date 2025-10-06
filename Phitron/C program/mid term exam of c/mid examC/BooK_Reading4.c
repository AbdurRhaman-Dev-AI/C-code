
            // problem no : 2


#include <stdio.h>

int main()
{

int N, T;
scanf("%d %d", &N, &T);
int times[N];
    
for (int i = 0; i < N; i++)
{
   scanf("%d", &times[i]);
}

int count = 0;
int totalTime = 0;
int i = 0;

while (i < N && totalTime + times[i] <= T)
{
  totalTime += times[i];
  count++;
  i++;
}

    printf("%d\n", count);
    return 0;
}
