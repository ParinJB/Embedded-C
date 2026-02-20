#include<stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
int divide(int, int);
int modulo(int, int);

int main(){
    int a, b;
    int result_add, result_sub, result_mul, result_divide, result_modulo;

    printf("enter the two values a and b: ");
    scanf("%d %d", &a, &b);

    result_add = add(a, b);
    result_sub = sub(a, b);
    result_mul = mul(a, b);
    result_divide = divide(a, b);
    result_modulo = modulo(a, b);

    printf("Addition is: %d\n", result_add);
    printf("Subtraction is: %d\n", result_sub);
    printf("Multiplication is: %d\n", result_mul);
    printf("Division is: %d\n", result_divide);
    printf("Modulo is: %d\n", result_modulo);

    return 0;
}

int add(int x, int y){
    return(x + y);
}

int sub(int x, int y){
    return(x - y);
}

int mul(int x, int y){
    return(x * y);
}

int divide(int x, int y){
    return(x / y);
}

int modulo(int x, int y){
    return(x % y);
}