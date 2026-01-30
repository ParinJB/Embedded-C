/*#include<stdio.h>

int main(){
    int r = 8;
    printf("variable is: %d\n", r);
    printf("address is: %p\n", &r);
    return 0;
}*/

#include<stdio.h>

int main(){
    int r = 8;
    int *p = &r;
    printf("variable is: %d\nAddress of variablr is: %p\n", r, &r);
    printf("Address stored in pointer is: %p\nAddress of pointer is: %p\n", p, &p);
    return 0;
}