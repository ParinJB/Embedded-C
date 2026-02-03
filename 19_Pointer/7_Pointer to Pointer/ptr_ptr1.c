// 2) example
#include<stdio.h>

int main(){
    int x = 19;
    int *p1 = &x;
    int **p2 = &p1;
    int ***p3 = &p2;

    printf("x = %d\n", x);
    printf("p1 = %d\n", *p1);
    printf("p2 = %d\n", **p2);
    printf("p3 = %d\n", ***p3);
    return 0;
}
