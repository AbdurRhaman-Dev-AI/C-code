// #include<stdio.h>

// int main()
// {
//     int marks;

//     scanf("%d",&marks);
    

//     if (marks >=80 && marks <= 100 ){
//     printf("You got A+");
//     }
//     if (marks >=60 && marks <= 79 ){
//     printf("You got [ A ] grad ");
//     }
//     if (marks >=45 && marks <= 59){
//     printf("You got [ B ] grad");
//     }
//     if (marks >=0 && marks <= 44 ){
//     printf("You got Fail");
//     }

// }




#include<stdio.h>

int main()
{
    int Marks;

    printf("input you marks to see the grad\n");
    scanf("%d",&Marks);

    if (Marks <=100)
    {
        printf("You got Golden A \n");
    }
   
    else if  (Marks <=90)
    {
        printf("You got A \n");
    }

     else if  (Marks <=79)
    {
        printf("You got A- \n");
    }

     else   (Marks <=70);
    {
        printf("You are Fail \n");
    }
    
}