//using call by reference method we can swap the two numbers
// 1) example
 
#include<stdio.h>

void swap(int *x, int *y);

int main(){
    int a, b;

    printf("enter the two values a and b: ");
    scanf("%d %d", &a, &b);

    printf("before swapping the two values of a = %d and b = %d\n", a, b);

    swap(&a, &b);

    printf("after swapping the two values of a = %d and b = %d\n", a, b);
    return 0;
}

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}