// conditional operator -  expression1 ? expression2 : expression3
// if condition 1(ex1) is true then condition 2(ex2) will be execute and return the value, otherwise condition 1(ex1) is false then it will execute and return condition 3(ex3).
// 1) example
#include<stdio.h>

int main(){
    int x = 3; 
    int y = 4;  
    int num;

    num = sizeof(x) ? (y > 2 ? ((x == 3) ? 'A' : 0) : 0) :0;  
    printf("%d\n", num); 
    //printf("%d\n", (int)sizeof(x));

    return 0;
}