#include<stdio.h>

struct bitfield
{
    int a : 3;
    unsigned int b : 3;
    char c : 1;
}bit;

int main(){
    
    printf("size of a : %zu bytes\n", sizeof(struct bitfield));
    return 0;
}
