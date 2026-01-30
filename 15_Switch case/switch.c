//all examples of switch cases

// 1) example shows how to use switch cases
#include<stdio.h>

int main(){
    int n = 4;

    switch(n){
        case 1:
            printf("One\n!!");
            break; // break statement breaks the loop
        case 2:
            printf("Two!!\n");
            break;
        case 3:
            printf("Three!!\n");
            break;
        case 4:
            printf("Four!!\n");
            break;
        case 5:
            printf("Five!!\n");
            break;
        default:
            printf("Default case!!\n");
            break;
    }

    return 0;

}