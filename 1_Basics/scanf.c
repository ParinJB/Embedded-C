#include<stdio.h>

int main(){

    int a, b;
    printf("enter the value of a: ");
    scanf("%d", &a);   // scan the input from the user

    printf("enter the value of b: ");
    scanf("%d", &b);

    printf("%d + %d is: %d\n", a, b, a+b);  // print the addition of two numbers

    return 0;
}