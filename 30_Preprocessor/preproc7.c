#include<stdio.h>

void fun1();
void fun2();

void __attribute__((constructor)) func1();
void __attribute__((destructor)) func2();

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
    
    return 0;
}