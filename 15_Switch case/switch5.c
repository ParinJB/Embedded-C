// 6) this example is allowed
#include<stdio.h>

int main(){
    int a = 23;

    switch(a){
        case 3+3:
            printf("One\n!!"); 
            break;
        case 3+4*5:
            printf("Six!!\n");
            break;
        default:
            printf("Default case!!\n");
            break;
    }

    return 0;
}
