//for &&(AND) - all conditions must have true or non zero only then output will become true(1)
//for ||(OR) - if one condition will true then output will become true(1)
//for !(NOT) - it is the compliment so when it is 0 output is 1 and when it is 1 output is 0


// 1) example when both a and b are non zero
#include <stdio.h>

int main() {
    int a = 25, b = 5;

    printf("a && b : %d\n", a && b); // output is 1(true) because a and b are non zero values 
    printf("a || b : %d\n", a || b); // same 
    printf("!a: %d\n", !a); // output is 0(false) because a is non zero means 1 and !a is compliment so that it's 0

    return 0;
}