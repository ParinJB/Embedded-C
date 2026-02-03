// 2) example
#include<stdio.h>

int main(){
    int arr[3][5] = {{2, 8, 9, 10, 5},{6, 7, 31, 8, 9},{7, 15, 16, 49, 3}};
    printf("Array is: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}