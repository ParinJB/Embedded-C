////***another example of global variable***/// 
#include<stdio.h>

int a, b;

void add(){
    printf("%d\n", a + b);
}

int main(){
    a = 8;
    b = 9;
    add();

    return 0;
}