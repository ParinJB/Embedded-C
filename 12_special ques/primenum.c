#include<stdio.h>

int main(){
    int n;
    int count = 0;

    printf("enter the number: \n");
    scanf("%d", &n);
    
    if(n <= 1){
        printf("%d is not prime!\n", n);
    }
    else{
        for(int i = 1; i <= n; i++){
            if(n % i == 0)
            count++;
        }
    }
    if(count > 2){
        printf("%d is not prime!\n", n);
    }
    else{
        printf("%d is prime!\n", n);
    }
    return 0;
}