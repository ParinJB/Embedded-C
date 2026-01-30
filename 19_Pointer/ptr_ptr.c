// 1) example
#include<stdio.h>

int main(){
    int x = 8;
    int *p1 = &x;
    int **p2 = &p1;

    printf("%d\n", x);
    printf("%d\n", *p1);
    printf("%d\n", **p2);
    return 0;
}

// 2) example
#include<stdio.h>

int main(){
    int x = 19;
    int *p1 = &x;
    int **p2 = &p1;
    int ***p3 = &p2;

    printf("%d\n", x);
    printf("%d\n", *p1);
    printf("%d\n", **p2);
    printf("%d\n", ***p3);
    return 0;
}

// 3) example
#include<stdio.h>

int main(){
    int v = 10;
    int *p1, **p2, ***p3;
    p1 = &v;
    p2 = &p1;
    p3 = &p2;

    printf("Before changing values: \n");
    printf("%d\n", v);
    printf("%d\n", *p1);
    printf("%d\n", **p2);
    printf("%d\n", ***p3);

    ***p3 = 18;
    printf("After changing values: \n");
    printf("%d\n", v);
    printf("%d\n", *p1);
    printf("%d\n", **p2);
    printf("%d\n", ***p3);   
    return 0; 
}