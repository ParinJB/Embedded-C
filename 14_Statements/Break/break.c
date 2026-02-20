// 1) example of break statement
#include<stdio.h>

int main(){
    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    while (n != 0)
    {
        if(n < 0)
        break;  //this statement will break the loop when integer is negative
        printf("enter a number\n");
        scanf("%d\n", &n);
    }
    return 0;
}