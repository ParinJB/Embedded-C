#include<stdio.h>

void fun1();
void fun2();

#pragma startup fun1    //Tells the compiler to run fun1 before main() starts.
 
#pragma exit fun2       //Tells the compiler to run fun2 after main() finishes.

void func1(){
    printf("Inside fun1()\n");
}
    
void func2(){ 
    printf("Inside fun2()\n"); 
}

int main(){
    void func1();
    void func2();
    printf("Inside main()\n"); 
    /* in the output only this printf line will be printed 
    bcz pragma function does not supported by gcc.*/
    return 0;
}