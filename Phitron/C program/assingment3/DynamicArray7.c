#include <stdio.h>
#include <stdlib.h>

int main()
{

int N;
scanf("%d", &N);


int *array = malloc(sizeof(int));
if (array == NULL)
{
   return 1;
}


for (int i = 0; i < N; i++)
{
    int num;
    scanf("%d", &num);

    int *temp = realloc(array, (i + 1) * sizeof(int));

if (temp == NULL)
{
    free(array);
    return 1;
}

array = temp;
array[i] = num;

}


for (int i = 0; i < N; i++)
{
    printf("%d ", array[i]);
}

printf("\n");
free(array);

return 0;
}