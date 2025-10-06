#include <stdio.h>

int main()
{
int N;
int M;
int X;

scanf("%d", &N);
scanf("%d", &M);
scanf("%d", &X);

int matrix[100][100];
int frequency[1001] = {0};

for (int i = 0; i < N; i++)
{
for (int j = 0; j < M; j++)
{
  int value;
  scanf("%d", &value);
  frequency[value]++;
}
}

for (int k = 0; k < X; k++)
{
  int number;
  scanf("%d", &number);
  printf("%d\n", frequency[number]);
}

return 0;
}
