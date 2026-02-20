// 2) example of creating multi dim array
#include<stdio.h>

int main(){
    int arr[3][4] = {{8, 12, 9, 7},
                     {5, 15, 47, 8},
                     {9, 7, 12, 3},
                    };
    int *ptr = &arr[0][0];
    int k = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("%d    ", *(ptr + k));
            k++;
        }
        printf("\n");
    }
    return 0;
}