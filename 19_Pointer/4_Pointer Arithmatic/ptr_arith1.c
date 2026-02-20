// 2) example shows difference btw y++ and (*y)++ expression
#include<stdio.h>

int main(){
    int x = 5;
    int *y = &x;

    printf("before the value is: %d\n", *y);
    (*y)++; //increment the y, this expression will inc the value of x by 1 means 5 to 6
    printf("after the value is: %d\n", *y);
    return 0;
}