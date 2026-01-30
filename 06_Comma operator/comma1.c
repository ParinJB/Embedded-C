//example of comma operator inside the paranthesis
#include<stdio.h>

int main(){

    int x = (printf("%s\n", "Hello there!!!"), 5); // comma operator returns the right most operand in the expression so,
    printf("%d\n", x); // output is, hello there!!
                                  // 5 

    return 0;
}