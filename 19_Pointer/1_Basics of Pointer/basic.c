// 1) example shows how pointer works 
#include<stdio.h>

int main(){
    int x = 5;
    int *ptr = &x; //*ptr = &x means *ptr = 5, *ptr gives the value that stored at the address of x

    printf("value storded at the address of ptr is: %d\n", *ptr);
    return 0;
}