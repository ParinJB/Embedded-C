// example of arithmatic operators:- +, -, *, /, %
// *, /, % has highest precedence
// +, - has lowest

#include<stdio.h>

int main(){
    int a=4,b=3,c=6;

    printf("a * b / c = %d\n", a*b/c); // when precedence is same then associativity used, means left to right
    printf("a + b - c = %d\n", a+b-c);
    printf("a + b * c = %d\n", a+b*c);
    printf("a %% b = %d\n", a%b);

    return 0;
}

// all arithmatic operators
#include <stdio.h>

int main() {

    int a = 25, b = 5;
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);


    return 0;
}