//example of pre decrement operator
// 2) ex
#include<stdio.h>

int main(){
    
    int a = 10, b = 2;
    printf("%d\n", a + --b); //first it will decrement the value of b and then b = 1 and final op = 10 - 1 = 9
    return 0;
}