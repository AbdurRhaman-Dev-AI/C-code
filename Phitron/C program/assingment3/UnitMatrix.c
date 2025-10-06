#include <stdio.h>

int main()
{
int N;
scanf("%d", &N);

int matrix[100][100];

for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++)
{
    scanf("%d", &matrix[i][j]);
}
}

int isUnitMatrix = 1;

for (int i = 0; i < N * N; i++)
{
    int row = i / N;
    int col = i % N;

if ((row == col && matrix[row][col] != 1) || (row != col && matrix[row][col] != 0))
{
    isUnitMatrix = 0;
    break;
}
}

printf(isUnitMatrix ? "YES\n" : "NO\n");

return 0;
}
