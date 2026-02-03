//example of nested if-else loop

#include<stdio.h>

int main(){

    int p = 15;
    
    if(p >= 18){
        if(p >= 60)
            printf("You are a senior citiezen!\n");
        else
            printf("You are young!\n");
    }
    else{
        printf("You are not an adult!\n");
        if(p <= 13)
            printf("You are a kid!\n");
        else
            printf("Go to school!\n");
    }

    return 0;

}
