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

// 2) example
#include<stdio.h>

int main(){
    int x = 2, y = 3;

    printf("x & y: %d\n", x & y);
    printf("x | y: %d\n", x | y);
    printf("x ^ y: %d\n", x ^ y);
    printf("~x: %d\n", ~x);
    printf("~y: %d\n", ~y);
    printf("x << y: %d\n", x << y);  // a*2^n = 2^(3), where a=2,n=3, so 2*2^(3)= 2*8= 16
    printf("x >> y: %d\n", x >> y);  // a/2^n = 2^(3), where a=2,n=3, so 2/2^(3)= 2/8= 0

    return 0;
}

// example of left shift operator
// 3) example
#include<stdio.h>

int main(){
    int x = 3;

    printf("%d\n", x << 1); // here 3 << 1 means, 3*2^(1) = 6
    
    return 0;
}

// example of right shift operator
// 4) example
#include<stdio.h>

int main(){
    int x = 4;

    printf("%d\n", x >> 1); // here 4 >> 1 means, 4/2^(1) = 2
    
    return 0;
}

// example of left shift operator
// 4) example
#include<stdio.h>

int main(){
    int x = 3;

    printf("%d\n", x << 2); // here 3 << 2 means, 3*2^(2) = 12
    
    return 0;
}

// example of right shift operator
// 5) example
#include<stdio.h>

int main(){
    int x = 8;

    printf("%d\n", x >> 2); // here 8 >> 2 means, 8/2^(2) = 2
    
    return 0;
}

//example of XOR operator
// 6) example
#include<stdio.h>

int main(){
    int x = 2, y = 3; //x=2= 0000 0010 and y=3= 0000 0011

    printf("%d\n", x ^ y); //  0000 0010 = x
                           // ^0000 0011 = y
                           //  0000 0001 = ans = 1
    
    return 0;
}

// another example of XOR operator
// 7) example
#include<stdio.h>

int main(){
    int x = 2, y = 3; //x=2= 0000 0010 and y=3= 0000 0011
    x = x ^ y;  // 0000 0010 ^ 0000 0011 = 0000 0001 = 1
    y = x ^ y;  // 0000 0001 ^ 0000 0011 = 0000 0010 = 2
    x = x ^ y;  // 0000 0001 ^ 0000 0010 = 0000 0011 = 3
    printf("After performing XOR, x = %d and y = %d\n", x, y); 
    return 0;
}

