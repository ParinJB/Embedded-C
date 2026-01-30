#include<stdio.h>

void add(int, int);
void sub(int, int);
void mul(int, int);
void divide(int, int);
void modulo(int, int);

int main(){
    int a, b;
    char operator;

    printf("Enter the operator you want to perform(+, -, *, /, %%): ");
    scanf("%c", &operator);

    printf("enter the two values a and b: ");
    scanf("%d %d", &a, &b);

    switch (operator)
    {
    case '+':
        add(a, b);
        break;
    case '-':
        sub(a, b);
        break;
    case '*':
        mul(a, b);
        break;
    case '/':
        divide(a, b);
        break;
    case '%':
        modulo(a, b);
        break;
    
    default:
    printf("Invalid operator!!!\n");
        break;
    }

    return 0;
}

void add(int x, int y){
    printf("%d + %d = %d\n", x, y, x + y);
}

void sub(int x, int y){
    printf("%d - %d = %d\n", x, y, x - y);
}

void mul(int x, int y){
    printf("%d * %d = %d\n", x, y, x * y);
}

void divide(int x, int y){
    printf("%d / %d = %d\n", x, y, x / y);
}

void modulo(int x, int y){
    printf("%d %% %d = %d\n", x, y, x % y);
}