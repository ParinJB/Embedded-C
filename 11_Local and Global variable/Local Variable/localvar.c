#include<stdio.h>

int main(){

    //local variable declaration
    int a, b, c;
    int x, y, z;

    //variable initialization
    a = 7;
    b = 9;
    c = b - a;

    x = 19;
    y = 5;
    z = x + y;

    printf("%d - %d = %d\n", b, a, c);
    printf("%d + %d = %d\n", x, y, z);
    return 0;
}