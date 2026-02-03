//this example shows which is the right way to declare the decrement operator
// 3) ex
#include<stdio.h>

int main(){
    
    int a = 10, b = 2;
    
    //printf("%d\n", a-----b); // gives error, reason lexical analyzer can not recognize what this expression means
    printf("%d\n", (a--) - (--b)); // this is the right way to declare 
    printf("%d\n", a-- + --b);
    return 0;
}