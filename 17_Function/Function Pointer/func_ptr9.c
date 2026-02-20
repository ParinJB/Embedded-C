#include<stdio.h>

// multiplication function
int mul(int a, int b){
    return a * b;
}
// division function
int div(int a, int b){
    if(b != 0)
    return a / b;
    else
    return -1;
}
// display function
void display(int a, int b, int(*fpt)(int, int)){
    printf("%d\n", fpt(a, b));
}

int main(){
    display(9, 3, mul);
    display(90, 3, div);
    return 0;
}