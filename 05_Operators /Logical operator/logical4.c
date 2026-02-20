// 5) this example shows that when first condition becomes false then only second condition will implemented 
// this example uses ||(OR) logical operator
#include <stdio.h>

int main() {
    int a = 8, b = 7;
    int p;

    p = (a<b) || (b++);  //when first condition becomes false(0) then next condition will implement
    printf("%d\n", p);  //output is 1
    printf("%d\n", b);  //now 8 because b++ is implemented
    return 0;
}