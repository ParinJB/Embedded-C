#include<stdio.h>

int add(int a, int b){
    return a + b;
}
int main(){
    int (*ptr)(int, int) = add; //declare function pointer and assign the add()
    int res = ptr(7, 9); //call the function pointer
    printf("Result : %d\n", res);
    return 0;
}