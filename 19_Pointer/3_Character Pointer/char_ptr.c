// 1) example of character pointers
#include<stdio.h>

int main(){
    char x = 'P';
    char k[] = "How Are You?";
    char *p = &x;
    char *p1 = k;

    printf("x is: %c\n", *p);
    printf("k is: %s\n", p1);
    return 0;
}