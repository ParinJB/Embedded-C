// 3) finding a facorial using recursion function
#include<stdio.h>

int fact(int n){
    if(n == 1){
        return 1;
    }else{
        return n * fact(n - 1);
    }
}

int main(){
    int n = 4;
    printf("factorial of a number %d = %d\n", n, fact(n));
    return 0;
}