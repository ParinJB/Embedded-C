// 3) another example
#include<stdio.h>

int newValue(int q){
    q += 10;
}

int main(){
    int p = 7;

    printf("before function call: %d\n", p);
    newValue(p);
    printf("after function call: %d\n", p);
    return 0;
}