//volatile variable can change at any time, outside the control of this program
#include<stdio.h>

int main(){
    volatile int local = 10;
    int *ptr = (int*) &local;

    printf("Initial value of local : %d \n", local);

    *ptr = 100;

    printf("Modified value of local: %d \n", local);

    return 0;
}