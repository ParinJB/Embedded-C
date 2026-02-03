#include<stdio.h>

#define square(x) ((x) * (x))

int main(){
    int x; 
    printf("enter the value: ");
    scanf("%d", &x);
    printf("square of %d is: %d\n", x, square(x));
    return 0;
}