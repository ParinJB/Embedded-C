// 1) example
#include<stdio.h>

int main(){
    int k[] = {7, 3, 9, 4, 2, 8, 6, 10};
    int *p1 = &k[2];
    int *p2 = &k[5];
    printf("%d > %d = %d\n", *p1, *p2, *p1 > *p2);
    printf("%d < %d = %d\n", *p1, *p2, *p1 < *p2);
    printf("%d < %d = %d\n", *p1, *p2, p1 < p2);
    printf("%d\n", *(p1 + 3));
    printf("%d\n", *(p1 - 1));
    //p2 = &k[2];
    printf("%d == %d = %d\n", *p1, *p2, *p1 == *p2);
    return 0;
}