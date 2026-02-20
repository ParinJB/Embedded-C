// 8) example shows the diff btw p++ and (*p)++ 
#include<stdio.h>

int main(){
    int a[] = {9, 3, 8, 1, 7, 2, 4};
    int *p = a; // means pointer points to the 0th position of array
    printf("%d\n", *p); // prints 9 as output
    (*p)++; // this will increment the number by one 
    printf("%d\n", *p); // prints 10 as output
    return 0;
}