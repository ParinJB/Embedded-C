// 1) example of post increment operator in a variable using pointer
#include<stdio.h>

int main(){
    int x = 5;
    int *y = &x;

    printf("before the value is: %d\n", *y);
    y++; //increment the y, moves the pointer, not the value it points to, moves it forward by sizeof(int) bytes
         // gives undefind behaviour
    printf("after the value is: %d\n", *y);
    return 0;
}