// 4) example of changing value of array at some point
#include<stdio.h>

int main(){
    int arr[5] = {2, 9, 5, 7, 8};

    arr[2] = 4;
    arr[0] = 1;
    for(int i = 0; i <=4; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}