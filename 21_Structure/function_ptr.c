#include<stdio.h>

int add(int a, int b){
    return a + b;
}
int main(){
    int (*ptr)(int, int) = add;
    int res = ptr(7, 9);
    printf("Result : %d\n", res);
    return 0;
}