#include<stdio.h>

struct A
{
    int x;
};

void increment(struct A a, struct A *b){
    a.x++;
    b->x++;
}
int main(){
    struct A a = {7};
    struct A b = {8};
    increment(a, &b);
    printf("a = %d\tb = %d\n", a.x, b.x);
    return 0;
}
