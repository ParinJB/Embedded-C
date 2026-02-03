// 6) example of post decrement operator
#include<stdio.h>

int main(){
    int x = 5;
    int *y = &x;

    printf("before the value is: %d\n", *y);
    y--; //decrement the y,moves the pointer, not the value it points to, moves it downword by sizeof(int) bytes
    printf("after the value is: %d\n", *y);
    return 0;
}