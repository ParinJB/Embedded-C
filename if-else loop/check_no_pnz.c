#include<stdio.h>

int main(){
    int n;
    printf("enter the number: ");
    scanf("%d", &n);

    if(n > 0){
        printf("Number is Positive!\n");
    }else if (n < 0)
    {
        printf("Number is Negative!\n");
    }else
        printf("Number is Zero!\n");
    
    return 0;
}