// 3) example of two pointers
#include<stdio.h>

int main(){
    int a = 9;
    int *p, *q;
    p = &a;
    q = p;

    printf("p = %d\nq = %d\n",*p, *q); //prints the value at the address stored in pointer
    printf("p = %p\nq = %p\n",p, q); // prints the address of a
    return 0;
}