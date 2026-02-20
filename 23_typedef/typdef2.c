// 3) example
#include<stdio.h>

typedef int* ip;

int main(){
    int a = 8;
    ip ptr = &a;
    printf("%d\n", *ptr);
    return 0;
}