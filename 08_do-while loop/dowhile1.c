// 3) example 
#include<stdio.h>

int main(){

    int i = 0, sum = 0;

    do
    {
        sum += i;
        printf("Sum is = %d\n", sum);
        i++;
    } while (i<=10);

    return 0;
}