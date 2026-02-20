#include<stdio.h>

int main(){
    int a = 15, b = 2;
    float div;
    char x = 'a';
    
    div = (float)a / b;  //with typecasting
    x = x + 4;

    printf("%c\n", x); 
    printf("division of %d / %d = %.2f\n", a, b, div); //with typecasting output will be 7.5
    return 0;

}