// 2) example 
#include<stdio.h>

void hello(){
    printf("hello there!!!\n");
}

int square(int a){
    return a * a;
}

int main(){

    hello();
    int a;
    printf("enter the number: ");
    scanf("%d", &a);
    int result = square(a);
    printf("Square of %d is : %d\n", a, result);

    return 0; 
}