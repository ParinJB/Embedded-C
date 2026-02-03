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