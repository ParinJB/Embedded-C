// 2) example
#include<stdio.h>

int main(){
    for(int i = 0; i <= 5; i++){
        if(i == 3){
            continue; //it will skip the iteration when i = 3
        }
        printf("%d ", i);
    }
    return 0;
}