#include<stdio.h>

int add(int, int);
int sub(int, int);

int main(){
    int a, b;
    int result_add, result_sub;

    printf("enter the two values a and b: ");
    scanf("%d %d", &a, &b);

    result_add = add(a, b);
    result_sub = sub(a, b);

    printf("Addition is: %d\n", result_add);
    printf("Subtraction is: %d\n", result_sub);

    return 0;
}

int add(int x, int y){
    return(x + y);
}

int sub(int x, int y){
    return(x - y);
}