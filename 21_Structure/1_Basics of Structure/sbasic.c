#include<stdio.h>

// Defining a structure
struct A
{
    int p;
};

int main(){
    struct A a;  // Creating a structure variable
    a.p = 8;  // Initializing member
    printf("%d\n", a.p);
    return 0;
}




