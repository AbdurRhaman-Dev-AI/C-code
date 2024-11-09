

//Logical Operators using !

#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool X = !((5>10) && (10>5) && (5==10));
    //            false    false     false
    
    // bool X = !((5<10) && (10>5) && (5==5));
            //    true    true      true
    printf("%d", X);

    return 0;
}