#include<stdio.h>

struct test
{
    unsigned int x;
    long int : 33;
    unsigned int z;
};

int main(){
    printf("%lu\n", sizeof(struct test));
    return 0;
}