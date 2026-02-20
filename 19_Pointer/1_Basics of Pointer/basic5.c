#include<stdio.h>

int main(){
    int a = 5;
    int *p = &a;

    printf("Address of a = %p\np = %i\n", p, *p);  //%i will exactly works as %d, %i means signed integer
    return 0;
}