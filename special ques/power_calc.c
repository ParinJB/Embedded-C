#include<stdio.h>

int main(){
    int base, exp;
    int result = 1;

    printf("enter the base: ");
    scanf("%d", &base);

    printf("enter the exponent: ");
    scanf("%d", &exp);

    for(int i = 1; i <= exp; i++) {
        result = result * base;
    }
    printf("%d ^ %d = %d\n", base, exp, result);

    return 0;

}