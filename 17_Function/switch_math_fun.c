#include <stdio.h>

void square(int x);
void cube(int x);
void power(int base, int exponent);
void factorial(int a);
void sumOfSeries(int n);

int main() {
    int a, base, exponent, n;
    char math_operator;

    printf("Enter number a: ");
    scanf("%d", &a);

    printf("Enter operator (2, 3, ^, !, +): ");
    scanf(" %c", &math_operator);

    switch (math_operator) {
        case '2':
            square(a);
            break;

        case '3':
            cube(a);
            break;

        case '^':
            printf("Enter base: ");
            scanf("%d", &base);
            printf("Enter exponent: ");
            scanf("%d", &exponent);
            power(base, exponent);
            break;

        case '!':
            factorial(a);
            break;

        case '+':
            printf("Sum of series till: ");
            scanf("%d", &n);
            sumOfSeries(n);
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}

void square(int x) {
    printf("%d * %d = %d\n", x, x, x * x);
}

void cube(int x) {
    printf("%d * %d * %d = %d\n", x, x, x, x * x * x);
}

void power(int base, int exponent) {
    int result = 1;
    for (int i = 1; i <= exponent; i++)
        result *= base;

    printf("%d ^ %d = %d\n", base, exponent, result);
}

void factorial(int a) {
    int fact = 1;
    for (int i = 1; i <= a; i++)
        fact *= i;

    printf("%d! = %d\n", a, fact);
}

void sumOfSeries(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;

    printf("Sum = %d\n", sum);
}



