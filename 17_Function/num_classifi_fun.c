#include<stdio.h>

int isEven(int);
int isOdd(int);
int isPositive(int);
int isNegative(int);
int isPrime(int);

int main(){
    int x;
    printf("enter any number: ");
    scanf("%d", &x);

    isEven(x);
    isOdd(x);
    isPositive(x);
    isNegative(x);
    isPrime(x);

    printf("Even number: %d\n", isEven(x));
    printf("Odd number: %d\n", isOdd(x));
    printf("Positive number: %d\n", isPositive(x));
    printf("Negative number: %d\n", isNegative(x));
    printf("Prime number: %d\n", isPrime(x));
    return 0;
}
int isEven(int a){
    if(a % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}
int isOdd(int a){
    if(a % 2 != 0){
        return 1;
    }else{
        return 0;
    }
}
int isPositive(int a){
    if(a > 0){
        return 1;
    }else{
        return 0;
    }
}
int isNegative(int a){
    if(a < 0){
        return 1;
    }else{
        return 0;
    }
}
int isPrime(int a){
     if (a <= 1)
        return 0;

    for (int i = 2; i <= a / 2; i++) {
        if (a % i == 0)
            return 0;
    }

    return 1;
}



    

   
