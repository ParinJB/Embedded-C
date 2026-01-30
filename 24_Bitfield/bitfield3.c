#include<stdio.h>

struct test
{
    unsigned int a;
    long int y : 33;
    unsigned int b;
};

int main(){
    struct test t;
    unsigned int *ptr1 = &t.a;
    unsigned int *ptr2 = &t.b;
    printf("%lu\n", ptr2 - ptr1);
    return 0;
}