#include<stdio.h>

int main(){
    int n, temp;
    int count = 0;

    printf("enter the number: ");
    scanf("%d", &n);
    
    temp = n;  // store original number

    if (n == 0) {
        count = 1;
    } else {
        while (n != 0) {
            count++;
            n = n / 10;
        }
    }
    printf("Count of digits in %d = %d\n", temp, count);
    return 0;
}