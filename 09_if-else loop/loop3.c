// example of if-else ladder
#include<stdio.h>

int main(){
    int n = 26;

    if(n == 15)
        printf("Please wait for three years!\n");
    else if(n == 20)
        printf("You are eligible!\n");
    else if(n == 25)
        printf("You can vote!!\n");
    else
        printf("Sorry, your age is not valid here!!\n");

    return 0;
}
