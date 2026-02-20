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