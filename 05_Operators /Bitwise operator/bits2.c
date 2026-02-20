// 3) example
#include<stdio.h>

int main(){
    int n, res;

    printf("enter the number: \n");
    scanf("%d", &n);

    res = n & (n - 1);

    if(res == 0) // condition will check that the number is a power of 2 or not
    {
         printf("%d is a power of 2.\n", n);
    }
    else{
        printf("%d is not a power of 2.\n", n);
    }
    return 0;
}