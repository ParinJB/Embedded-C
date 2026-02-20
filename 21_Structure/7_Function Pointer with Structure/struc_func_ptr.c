#include<stdio.h>

void function1(int x){
    printf("Calling funtion 1 with argument!: %d\n", x);
}

int function2(int x, int y){
    printf("Calling funtion 1 with argument!: %d, %d\n", x, y);
    return x + y;
}

typedef struct 
{
    //Declares a pointer named func1 that can point to any function that takes one int argument
    void (*func1)(int); 

    //Declares a pointer named func1 that can point to any function that takes two int argument
    int (*func2)(int, int); 
    
}functionPointer_t;

int main(){
    functionPointer_t func;
    // Assign functions to the function pointers in the structure
    func.func1 = &function1;
    func.func2 = &function2;

    func.func1(10);
    int result = func.func2(20, 30);   //call the function
    printf("Result of function 2: %d\n", result);
    
    return 0;

}
