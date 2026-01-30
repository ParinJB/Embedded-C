#include<stdio.h>

int main(){
    int n, mul;

    printf("enter the number: ");
    scanf("%d", &n);

    printf("Multiplication table of number %d is: \n", n);

    for(int i = 1; i <= 10; i++){
        
        mul = (n * i);
        printf("%d * %d = %d\n", n, i,mul);
    }

     return 0;
}