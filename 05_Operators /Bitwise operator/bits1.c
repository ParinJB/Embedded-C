// 2) example
#include<stdio.h>

int main(){
    int num;
    int ones = 0, zeros = 0;
    int size = sizeof(int) * 2;

    printf("enter the number: \n");
    scanf("%d", &num);

    for(int i = 0; i < size; i++){
        if(num & (1 << i)){
            ones++;
        }
        else{
            zeros++;
        }
    }
    printf("number of 1's in %d: %d\n", num, ones); //prints how many 1's are ther in a number
    printf("number of 0's in %d: %d\n", num, zeros); //prints how many 0's are ther in a number

    return 0;
}