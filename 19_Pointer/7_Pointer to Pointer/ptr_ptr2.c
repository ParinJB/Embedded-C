// 3) example
#include<stdio.h>

int main(){
    int v = 10;
    int *p1, **p2, ***p3;
    p1 = &v;
    p2 = &p1;
    p3 = &p2;

    printf("Before changing values: \n");
    printf("v = %d\n", v);
    printf("p1 = %d\n", *p1);
    printf("p2 = %d\n", **p2);
    printf("p3 = %d\n", ***p3);

    ***p3 = 18;
    printf("After changing values: \n");
    printf("v = %d\n", v);
    printf("p1 = %d\n", *p1);
    printf("p2 = %d\n", **p2);
    printf("p3 = %d\n", ***p3);   
    return 0; 
}