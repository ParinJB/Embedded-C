#include<stdio.h>

int square(int);
int cube(int);
int power(int, int);
int factorial(int);
int sumOfSeries(int, int, int);

int main(){
    int a, base, exponent, sum = 0, i, n;
    printf("enter any number a: ");
    scanf("%d", &a);
    square(a);
    cube(a);
    power(base, exponent);
    
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    printf("Sum of the series till: ");
    scanf("%d", &n);

    printf("Square of %d is: %d\n", a, square(a));
    printf("Cube of %d is: %d\n", a, cube(a));
    printf("%d ^ %d is = %d\n",  base, exponent, power(base, exponent));
    printf("Factorial of %d is: %d\n", a, factorial(a));
    printf("Total sum of series till %d is %d\n", n, sumOfSeries(i, sum, n));

    return 0;    
}

int square(int x){
    return x * x; 
}
int cube(int x){
    return x * x * x;
}
int power(int base, int exponent) {
    int result = 1;

    for (int i = 1; i <= exponent; i++) {
        result = result * base;
    }
    return result;
}
int factorial(int a) {
    int fact = 1;

    for (int i = 1; i <= a; i++) {
        fact = fact * i;
    }

    return fact;
}
int sumOfSeries(int i, int sum, int n){
     while(i <= n){
        sum = sum + i;
        i++;
    }
    return sum;
}