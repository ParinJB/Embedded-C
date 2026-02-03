// 2) example 
#include<stdio.h>

int main(){
    for(int i = 0; i <=10; i++){
        if(i == 3){
            break; // exit the loop when i = 3
        }
        printf("%d ", i);
    }
    return 0;
}