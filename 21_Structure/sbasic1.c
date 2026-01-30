#include<stdio.h>

// Defining a structure
struct A
{
    int p, q;
}a, b;    // structure variables

int main(){
    //struct A a;  // Creating a structure variable
    a.p = 8;  // Initializing member
    b.q = 19; // Initializing member
    printf("%d\n", a.p);
    printf("%d\n", b.q);
    return 0;
}