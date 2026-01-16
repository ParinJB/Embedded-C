//example 1 using Euclidean algorithm 
/*
#include<stdio.h>

int main(){
    int a, b, temp;

    printf("enter the numbers a and b: ");
    scanf("%d %d", &a, &b);

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    printf("GDC = %d\n", a);
    return 0;
}*/

//example 2 using loop method

#include<stdio.h>

int main(){
    int a, b, gcd = 1;

    printf("enter the two numbers a and b: ");
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    printf("GCD = %d\n", gcd);

    return 0;
}