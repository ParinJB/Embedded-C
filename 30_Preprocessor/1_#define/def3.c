// 5) example of expansion then evaluation
#include<stdio.h>
#define add(x, y) x+y  // function is used 

int main(){
   
    printf("result of expression a * b + c is: %d\n", 5 * add(7, 8));  // first it will multiply 5*7 then addition with 8
    return 0;
}
