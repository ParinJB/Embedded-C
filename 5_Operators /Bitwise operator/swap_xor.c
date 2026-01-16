#include<stdio.h>

int main(){
    int a = 7, b = 9;

    printf("before swaping: a = %d and b = %d\n", a, b);

    a = a^b;
    b = a^b;
    a = a^b;

    printf("after swaping: a = %d and b = %d\n", a, b);

    return 0;
}