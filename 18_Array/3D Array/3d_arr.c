#include<stdio.h>

int main(){
    int arr[3][3][3] = {{{6, 9, 10}, {5, 15, 8}, {50, 40, 6}},
                        {{8, 12, 6}, {8, 20, 45}, {56, 41, 10}},
                        {{18, 32, 61}, {80, 26, 15}, {36, 61, 11}}
                        };

    printf("Array is: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                printf("%4d", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}