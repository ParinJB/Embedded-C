#include<stdio.h>

int main(){
    printf("Print Alphabets from A to Z: \n");

    for(int i = 65; i <= 90; i++){
        printf("%c ", i);
    }
    printf("\nPrint Alphabets from a to z: \n");
    
    for(int j = 97; j <= 122; j++){
        printf("%c ", j);
    }
    return 0;
}