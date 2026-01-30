// 1) example
#include<stdio.h>

struct A
{
    int a;
};

int main(){
    struct A q = {9};  
    struct A *p = &q; // Creating a pointer to the structure and assigning the address of q to the pointer

    printf("%d\n", p -> a);   // Accessing structure members using the pointer
    return 0;
}



