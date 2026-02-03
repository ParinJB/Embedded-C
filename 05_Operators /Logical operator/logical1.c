// 2) example when one of a or b is zero
#include <stdio.h>

int main() {
    int a = 0, b = 5;

    printf("a && b : %d\n", a && b); // output is 0(false) because a is zero and b is non zero value 
    printf("a || b : %d\n", a || b); // output is 1(true) because when one of them is true(1) then op automatically becomes true(1) 
    printf("!a: %d\n", !a); // output is 1(true) because a is zero and !a is compliment so that it's 1

    return 0;
}