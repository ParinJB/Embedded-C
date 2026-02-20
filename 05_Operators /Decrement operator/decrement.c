//example shows how lexical analyzer will works with expression which has decrement operator
// 1) ex
#include<stdio.h>

int main(){
    
    int a = 10, b = 2;
    printf("%d\n", a---b); // because of lexical analyzer expression works like this, (a-- - b)
    return 0;
}