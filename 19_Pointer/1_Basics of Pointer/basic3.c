// 4) example
#include<stdio.h>

int main(){
    int a = 9, b = 7;
    int *p, *q;
    p = &a;
    q = &b;
    *q = *p;

    printf("p = %d\t q = %d\n",*p, *q);
    return 0;
}