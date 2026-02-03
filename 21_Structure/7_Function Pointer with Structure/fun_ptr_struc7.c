#include<stdio.h>

int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

struct calculator
{
    int(*operation[2])(int, int);
};

int main(){
    struct calculator cal;
    int x, y;
    printf("enter two numbers: ");
    scanf("%d %d", &x, &y);

    cal.operation[0] = add;
    cal.operation[1] = sub;

    printf("Addition is    : %d\n", cal.operation[0](x,y));
    printf("Subtraction is : %d\n", cal.operation[1](x,y));
}
