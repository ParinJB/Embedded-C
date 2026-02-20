// 2) example without using break
#include<stdio.h>

int main(){
    int n = 2;

    switch(n){
        case 1:
            printf("One\n!!"); //without break statement all loops will execute
        case 2:
            printf("Two!!\n");
        case 3:
            printf("Three!!\n");
        case 4:
            printf("Four!!\n");
        case 5:
            printf("Five!!\n");
        default:
            printf("Default case!!\n");
    }

    return 0;

}