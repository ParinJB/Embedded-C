#include<stdio.h>

int main(){
    int n = 9;
    char c = 'A';
    int sum;

    sum = n + c;
    printf("value of sum is: %d\n", sum); // prints the number by adding 9 in A's ascii value which is 65
    printf("value of sum is: %c\n", sum); // prints the character by adding 9 into A, which is J
    return 0;
}