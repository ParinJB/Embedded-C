//A pointer to constant means the value it points to cannot be changed, but the pointer itself can point to different memory addresses
// 1) example
#include<stdio.h>

int main(){
    int a = 9;
    int b = 7;

    const int *ptr = &a; //pointer to constant int
    printf("value is: %d\n", *ptr);
    //*ptr = 8; // we cann't modify value using pointer
    
    ptr = &b; // we can change the pointer address
    printf("value is: %d\n", *ptr);
    return 0;
}