// concept of short circuit in logical operators
// 3) example
#include <stdio.h>

int main() {
    int a = 8, b = 7;
    int p;

    p = (a<b) && (b++);  //when first condition becomes false(0) then next condition will not implement
    printf("%d\n", p);  //output is 0
    printf("%d\n", b);  //still 7 because b++ is not implemented
    return 0;
}