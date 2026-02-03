//program to clear the bit
// 3) ex
#include<stdio.h>

int main(){
    int num, pos;

    printf("enter the number: \n");
    scanf("%d", &num);
    printf("enter the number of position: \n");
    scanf("%d", &pos);

    printf("Before clear the bit number is: %d\n", num);

    num = num & ~(1 << pos); /* for example num = 10 = 1010 and position = 3 means, (1* (2^3)) = 8 = 1000
    so,     1010   and ~(1000) = 0111
    AND(&)  0111
        ans 0010 = 2*/

    printf("After clear the bit number is: %d\n", num);

    return 0;
}
