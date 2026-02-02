#include<stdio.h>

// function declaration
int square(int);
int cube(int);
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);
int mod(int, int);

int main(){
    int (*fptr1[])(int) = {square, cube}; //declare function pointer and assign the square(), cube() 
    int (*fptr2[])(int, int) = {add, sub, mul, div, mod}; //declare function pointer and assign the funcs
    
    int x, y;
    printf("enter the two values: ");
    scanf("%d %d", &x, &y);
    printf("\n");
    printf("Square of %d is                : %d\n",x, fptr1[0](x));
    printf("Square of %d is                : %d\n",y, fptr1[0](y));
    printf("\n");
    printf("cube of %d is                  : %d\n",x, fptr1[1](x)); 
    printf("cube of %d is                  : %d\n",y, fptr1[1](y));
    printf("\n");
    printf("adition of %d and %d is         : %d\n",x, y, fptr2[0](x,y));
    printf("Subtraction of %d and %d is     : %d\n",x, y, fptr2[1](x,y));
    printf("multiplication of %d and %d is  : %d\n",x, y, fptr2[2](x,y));
    printf("division of %d and %d is        : %d\n",x, y, fptr2[3](x,y));
    printf("modulo of %d and %d is          : %d\n",x, y, fptr2[4](x,y));

    return 0;
}

int square(int a){
    return a * a;
}
int cube(int a){
    return a * a * a;
}
int add(int a, int b){
    return a + b;
}
int sub(int a, int b){
    return a - b;
}
int mul(int a, int b){
    return a * b;
}
int div(int a, int b){
    if(b != 0)
    return a / b;
    else
    return -1;
}
int mod(int a, int b){
    return a % b;
}