          
          
                // problem no : 5




// #include <string.h>

// int main() {
//     char str[3][1001];
//     scanf("%s %s %s", str[0], str[1], str[2]);

//     char *minStr = str[0], *maxStr = str[0];

//     for (int i = 1; i < 3; i++) {
//         if (strcmp(str[i], minStr) < 0) minStr = str[i];
//         if (strcmp(str[i], maxStr) > 0) maxStr = str[i];
//     }

//     printf("%s\n%s\n", minStr, maxStr);
//     return 0;
// }






                // with out Str



// #include <string.h>
// int main()
// {
    
//     char s1[1001], s2[1001], s3[1001];

//     scanf("%s %s %s", s1, s2, s3);

//     char *min = s1, *max = s1;

//     switch (strcmp(s2, min) < 0)
// {
//     case 1: min = s2;
// }
//     switch (strcmp(s3, min) < 0)
// {
//         case 1: min = s3;
// }
//     switch (strcmp(s2, max) > 0)
// {
//         case 1: max = s2;
// }
//     switch (strcmp(s3, max) > 0)
// {
//         case 1: max = s3;
// }

//     printf("%s\n%s\n", min, max);
//     return 0;
// }






            // with Str



#include <string.h>
int main()
{
    
    char s1[1001], s2[1001], s3[1001];

    scanf("%s %s %s", s1, s2, s3);

    char *minStr = s1, *maxStr = s1;

    switch (strcmp(s2, minStr) < 0)
{
    case 1: minStr = s2;
}
    switch (strcmp(s3, minStr) < 0)
{
        case 1: minStr = s3;
}
    switch (strcmp(s2, maxStr) > 0)
{
        case 1: maxStr = s2;
}
    switch (strcmp(s3, maxStr) > 0)
{
        case 1: maxStr = s3;
}

    printf("%s\n%s\n", minStr, maxStr);
    return 0;
}
