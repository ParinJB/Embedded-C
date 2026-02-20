#include<stdio.h>

void swap(int *x, int *y); //function declaration

int main(){
    void(*fpt)(int *, int *); // declare function pointer
    fpt = swap; //assign swap()

    int a = 9, b = 7;
    printf("before swapping a = %d and b = %d\n", a, b);   

    (*fpt)(&a, &b); // call through function pointer
    printf("after swapping a = %d and b = %d\n", a, b);

    return 0; 
}

void swap(int *x, int *y){
    int z;
    z = *x;
    *x = *y;
    *y = z;
}