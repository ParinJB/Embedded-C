// 3) example shows that we cannot use dupliate cases
#include<stdio.h>

int main(){
    int n = 2;

    switch(n){
        case 1:
            printf("One\n!!"); 
            break;
        case 1:
            printf("One!!\n");
            break;
        case 2:
            printf("Two!!\n");
        default:
            printf("Default case!!\n");
    }

    return 0;

}