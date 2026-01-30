// example of arithmatic operators:- +, -, *, /, %
// *, /, % has highest precedence
// +, - has lowest

// 1) example
#include<stdio.h>

int main(){
    int a=4,b=3,c=6;

    printf("a * b / c = %d\n", a*b/c); // when precedence is same then associativity used, means left to right
    printf("a + b - c = %d\n", a+b-c);
    printf("a + b * c = %d\n", a+b*c);
    printf("a %% b = %d\n", a%b);

    return 0;
}