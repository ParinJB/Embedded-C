// 6) here the difference when first condition becomes true or false
//now this example shows if first condition becomes true then next condition will not implemented
// this example uses ||(OR) logical operator
#include <stdio.h>

int main() {
    int a = 8, b = 7;
    int p;

    p = (a>b) || (b++); //when first condition becomes true(1) then next condition will not implement
    printf("%d\n", p); //output is 1
    printf("%d\n", b); //still 7 because b++ is not implemented
    return 0;
}