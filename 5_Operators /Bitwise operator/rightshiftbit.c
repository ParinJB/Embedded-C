////////*********all examples of right shift operator ***********/////
//Dividing by power of 2
//Removing least significant bits
//Extracting fields from data
//Parsing packets / protocols
//Right shift is NOT used to set bits
//Right shift is used to divide / remove bits


#include<stdio.h>

int main(){
    int num, pos;

    printf("Enter the number: \n");
    scanf("%d", &num);
    printf("Enter the number of position: \n");
    scanf("%d", &pos);

    printf("Before right shift the bit of number: %d\n", num);

    num = num >> pos;  

    printf("After right shift the bit of number: %d\n", num);

    return 0;
}


