// function defination consists block of code which is able to preform specific task
// 1) example
#include<stdio.h>

int add(int , int);

int main(){
    int p = 8, q = 7, result;
    result = add(p, q);
    printf("Result is : %d\n", result);

    return 0;
}

int add(int p, int q){
    return (p + q);
}