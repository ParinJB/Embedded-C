// 4) another valid example
#include<stdio.h>

int main(){
    int a = 2, b = 1, c = 3, d = 5;

    switch(a + b + c){
        case 1:
            printf("One\n!!"); 
            break;
        case 6:
            printf("Six!!\n");
            break;
        case 2:
            printf("Two!!\n");
            break;
        default:
            printf("Default case!!\n");
            break;
    }

    return 0;
}