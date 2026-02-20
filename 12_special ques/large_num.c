/*
#include<stdio.h>

int main(){

    int a = 9, b = 87, c = 8;

    if(a >= b){
        if(a >= c){
            printf("%d is the largest number!\n",a);
        }else{
            printf("%d is the largest number!\n", c);
        }
    }else
    {
        if(b >= c){
            printf("%d is the largest number!\n", b);
        }else{
            printf("%d is the largest number!\n", c);
        }
    }
    return 0;
    
}*/

// C Program to Find the Largest Number Among Three using
// Temporary Variable
#include <stdio.h>
int main() {
    int a = 10, b = 22, c = 9;
    int max = a;

    if (max < b)
        max = b;
    if (max < c)
        max = c;

    printf("%d is the largest number.\n", max);
    return 0;
}