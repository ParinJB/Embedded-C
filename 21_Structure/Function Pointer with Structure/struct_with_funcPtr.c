#include<stdio.h>

int addition(int x, int y);
int subtraction(int x, int y);
int multiplication(int x, int y);
int division(int x, int y);
int modulo(int x, int y);

struct calculator
{
    int (*add)(int, int);
    int (*sub)(int, int);
    int (*mul)(int, int);
    int (*div)(int, int);
    int (*mod)(int, int);
};

int main(){
    struct calculator cal;
    cal.add = &addition;        //assigning the function pointer to the function
    cal.sub = &subtraction;
    cal.mul = &multiplication;
    cal.div = &division;
    cal.mod = &modulo;

    int a, b;
    printf("enter the two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Addition       : %d\n", addition(a, b));
    printf("Subtraction    : %d\n", subtraction(a, b));
    printf("Multiplication : %d\n", multiplication(a, b));
    printf("Division       : %d\n", division(a, b));
    printf("Modulo         : %d\n", modulo(a, b));
    return 0;
}
int addition(int x, int y){
    return x + y;
}
int subtraction(int x, int y){
    return x - y;
}
int multiplication(int x, int y){
    return x * y;
}
int division(int x, int y){
    return x / y;
}
int modulo(int x, int y){
    return x % y;
}
