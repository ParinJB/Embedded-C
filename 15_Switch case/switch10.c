// 8) example
//but we can use macros so here is the valid example
#include<stdio.h>

#define b 5
#define c 6

int main(){
    int a = 23;

    switch(c){
        case b:
            printf("One\n!!"); 
            break;
        case c:
            printf("Six!!\n");
            break;
        default:
            printf("Default case!!\n");
            break;
    }

    return 0;
}