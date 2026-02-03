// call by value means passing the copies or values of variables to the another variables
// 1) example of call by value in function
#include<stdio.h>

int fun(int x, int y){
    x = 10;
    y = 15; 
}

int main(){
    int p = 8, q = 9;
    int x; int y;
    
    printf("before calling function p = %d and q = %d\n", p, q);

    fun(x, y);

    printf("after calling function p = %d and q = %d\n", p, q);
    return 0;
}