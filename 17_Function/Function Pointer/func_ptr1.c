#include<stdio.h>

void A(){
    printf("This is the function A!!\n");
}
void B(void (*ptr)()){
    (*ptr)();  //callback to A
}
int main(){
    
    void(*ptr)() = &A;  /// Function pointer to A()

    // Calling function B and passing
    // address of the function A as argument
    B(ptr);
    return 0;
}