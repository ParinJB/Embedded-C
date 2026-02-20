#include<stdio.h>

// function for addition
int add(int a, int b){
    return a + b;
}
// function for subtraction
int sub(int a, int b){
    return a - b;
}
// Structure with function pointer
struct calculator
{
    int(*operation)(int, int); 
};

int main(){
    struct calculator calc;
    
    calc.operation = add;
    printf("Addition is: %d\n", calc.operation(25,5));  // call the function and print the result

    calc.operation = sub;
    printf("Subtraction is: %d\n", calc.operation(90,40)); // call the function and print the result
    return 0;
}
