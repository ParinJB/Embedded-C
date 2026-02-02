///***this example shows how global variable works with local variable also***///
#include<stdio.h>

int fun();
int var = 7; // this is the global declaration

int main(){

    int var = 8;
    printf("%d\n", var); // this will prints 8 as a output
    fun();
    return 0;
}

int fun(){
    printf("%d\n", var); // this will prints 7 as a output
}