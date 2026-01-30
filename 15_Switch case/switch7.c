//9) example
//default can place anywhere inside the switch
#include<stdio.h>

int main(){
    int a = 23, b = 5, c = 6;

    switch(c){
        default:
            printf("Default case!!\n");
            break;
        case 5:
            printf("One\n!!"); 
            break;
        case 6:
            printf("Six!!\n");
            break;
        
    }

    return 0;
}