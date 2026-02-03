// 3) example
#include<stdio.h>

typedef struct pointer
{
    int x, y, z;
}ptr;

int main(){
    ptr p = {7, 8, 9};
    ptr *p1 = &p;
    printf("%d %d %d\n", p1->x, p1->y, p1->z);
    return 0;
}