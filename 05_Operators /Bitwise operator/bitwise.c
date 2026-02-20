// (&) - AND, (|) - OR, (~) - NOT, (<<) - Left shift, (>>) - Right shift, (^) - XOR
// bit by bit
// & - result of AND is one(1) when both bits are one(1)
// | - result of OR is zero(0) when both bits are zero(0)
// ~ - unary operator, 1 - 0 and 0 - 1
// ^ - XOR operator, when both bits are same output is 0(zero)

// example shows difference btw bitwise and logical operator
// 1) example
#include<stdio.h>

int main(){
    int x = 2, y = 3;  //x=1= 0000 0010 and y=2= 0000 0011

    if(x&y) // this is the condition for bitwise operator
    {
        printf("Result of x&y is 1\n");
    }
    if(x&&y) // this is the condition for logical operator
    {
        printf("Result of x&&y is 1\n");
    }

    return 0;
}