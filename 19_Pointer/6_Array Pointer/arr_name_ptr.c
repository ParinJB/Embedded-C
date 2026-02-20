// 1) example shows that we can use array name(variable name) as a pointer declaration
#include<stdio.h>

int main(){
    int a[5];
    *a = 10;
    printf("%d\n", a[0]);

    *(a + 1) = 20;
    printf("%d\n", a[1]);

    return 0;
}