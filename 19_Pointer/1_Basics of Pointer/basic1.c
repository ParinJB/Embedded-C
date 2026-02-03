// 2) example shows we can change the value by using pointer
#include<stdio.h>

int main(){
    int x = 8;
    int *ptr = &x;
    *ptr = 7;

    printf("value stored at the ptr is: %d\n", *ptr);
    return 0;
}