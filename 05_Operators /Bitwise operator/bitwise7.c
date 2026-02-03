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