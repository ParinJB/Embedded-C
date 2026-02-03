// 5) example
#include<stdio.h>

int main(){
    int a = 9;
    int *p = &a, *q;
    q = p;
    *q = 5;
    
    printf("p = %d\t q = %d\n",*p, *q);
    return 0;
}