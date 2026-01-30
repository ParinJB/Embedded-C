//constant pointer, the value stored at that location can still be changed.
// 1) this is the example of constant pointer, 
//shows that if constant keyword is used then we can not change the value 
#include<stdio.h>

int main(){
    int a = 19, b = 17;
    int *const p1 = &a;
    //p1 = &b;
    printf("%d\n", *p1);
    return 0;
}

// 2) example shows we can change the value at the address using pointer
#include<stdio.h>

int main(){
    int a = 9;
    int *const ptr = &a; // constant pointer to integer
    printf("value is: %d\n", *ptr);
    *ptr = 15; // can change the value at address
    printf("value is: %d\n", *ptr);
}