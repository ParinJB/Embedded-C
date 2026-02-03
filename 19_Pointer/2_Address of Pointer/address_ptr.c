#include<stdio.h>

int main(){

    int r = 8;
    printf("variable is: %d\n", r);
    printf("address is: %p\n", &r);
    
    int *p = &r;
    printf("\nAddress stored in pointer is: %p\nAddress of pointer is: %p\n", p, &p);

    return 0;
}
