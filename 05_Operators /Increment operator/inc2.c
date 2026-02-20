//this example shows which is the right way to declare the increment operator
#include<stdio.h>

int main(){
    
    int a = 7, b = 7;
    //printf("%d\n", a+++++b); // gives error
    printf("%d\n", a++ + ++b);
    //printf("%d\n", a++ - ++b); // right way to declare
    return 0;
}