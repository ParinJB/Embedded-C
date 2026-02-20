//program to toggle(compliment) a bit, we can also swap the number by using this xor operator
// 2) ex
#include<stdio.h>

int main(){
    int num, pos;

    printf("enter the number: \n");
    scanf("%d", &num);
    printf("enter the number of position: \n");
    scanf("%d", &pos);

    printf("Before toggle the bit of number: %d\n", num);

    num = num ^ (1 << pos);  /*in this for example num = 5 = 0101 and position = 2 means (1 * (2^2)) = 4 = 0100
    so,     0101 = 5
    XOR(^)  0100 = 4
        ans 0001 = 1   
    
    */

    printf("After toggle the bit of number: %d\n", num);

    return 0;
}