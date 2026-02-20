#include<stdio.h>

void display(){
    printf("Hello new bee!!\n");
}

int main(){
    void(*fp)(void); // delcare a function pointer
    fp = display; // assign to displya()

    (*fp)(); // call through function pointer
    
    return 0;
}