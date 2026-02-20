#include<stdio.h>

int sub(int a, int b); // function declare

int main(){
    int (*fptr)(int, int); //// delcare a function pointer
    fptr = sub; // assign to sub()

    printf("%d\n", fptr(50, 5)); // call through function pointer
    return 0;
}

int sub(int a, int b){
    return a - b;
}