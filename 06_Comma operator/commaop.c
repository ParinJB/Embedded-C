// comma operator:- has least precedence

#include<stdio.h>

int main(){

    int x = (3,7,9); // comma operator returns the right most operand in the expression so,
    //bracket has highest precedence than any other operator 
    printf("%d\n", x); // op is 9

    return 0;
}
