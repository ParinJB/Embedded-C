// 1) example shows the sum of array elements using pointer
#include<stdio.h>

int main(){
    int k[] = {8, 2, 7, 9, 3, 4, 16};
    int *p, sum = 0;

    for(p = &k[0]; p <= &k[7]; p++){
        sum = sum + *p;
    }
    printf("Sum is = %d\n", sum);
    return 0;
}