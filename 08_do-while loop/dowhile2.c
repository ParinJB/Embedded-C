// 4) example
#include<stdio.h>

int main(){

    int n;
    do
    {
        printf("enter any integer number:\n");
        scanf("%d", &n);
    } while (n != 0);
    printf("You are out of the loop!!\n");
    
    return 0;
}
