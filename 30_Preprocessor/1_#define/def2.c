// 3) example shows that we can use function also with this define type
#include<stdio.h>
#define add(x, y) x+y  // function is used 

int main(){
   
    printf("addition of two no: %d\n", add(7,8));  // here we get the addition of numbers

    return 0;
}