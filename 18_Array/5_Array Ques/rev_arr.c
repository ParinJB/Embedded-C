// this is the example of reversing array

#include<stdio.h>

int main(){
    int arr[5] = {4, 6, 9, 8, 7};

    printf("printing array element:\n");
    for(int i = 0; i <= 4; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("printing array in reverse:\n");
    for(int j = 4; j >= 0; j--){
        printf("%d ", arr[j]);
    }
    printf("\n");
    return 0;
}