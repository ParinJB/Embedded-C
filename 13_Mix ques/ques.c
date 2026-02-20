// conversion of octal to decimal

#include<stdio.h>

int main(){
    
    int var = 045; // 0 means number is octal
    printf("decimal value of var is : %d\n", var); // covert octal no. into decimal, 8^1, 8^0(1) = 8*4, 1*5 = 32 + 5 = 37
    return 0;
}