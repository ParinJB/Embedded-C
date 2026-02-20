// 2) example shows we can change the value at the address using pointer
#include<stdio.h>

int main(){
    int a = 9;
    int *const ptr = &a; // constant pointer to integer
    printf("value is: %d\n", *ptr);
    *ptr = 15; // can change the value at address
    printf("value is: %d\n", *ptr);
}