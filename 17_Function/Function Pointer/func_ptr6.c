#include<stdio.h>

int add(int p, int q); //function declaration

int main(){
    int(*pf)(int, int); //declare the function pointer
    pf = add;

    int a = 50, b = 90;
    int c = (*pf)(a, b); // call the function pointer

    printf("Addition of a = %d and b = %d is: %d\n", a, b, c);
    return 0;
}
int add(int p, int q){
    return p + q;
}