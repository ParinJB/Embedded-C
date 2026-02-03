// 7) example of post increment op in array
#include<stdio.h>

int main(){
    int a[] = {9, 3, 8, 1, 7, 2, 4};
    int *p = a; // means pointer points to the 0th position of array
    printf("%d\n", *p); // prints 9 as output
    p++; // this will move to the one position 
    printf("%d\n", *p); // prints 3 as output
    return 0;
}