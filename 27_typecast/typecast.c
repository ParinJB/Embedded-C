#include<stdio.h>

int main(){
    int a = 15, b = 2;
    float div1, div2;

    div1 = a / b;   // without typecasting
    div2 = (float)a / b; // with typecast
    
    printf("division of %d / %d = %.2f\n", a, b, div1); //without typecasting output will be 7
    printf("division of %d / %d = %.2f\n", a, b, div2); //with typecasting output will be 7.5
    return 0;

}