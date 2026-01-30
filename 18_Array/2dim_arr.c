// 1) example
#include<stdio.h>

int main(){
    int a[5][5] = {{8, 3, 9, 0, 10},{3, 5, 17, 1, 1},{2, 8, 6, 23, 1},{15, 7, 3, 2, 9},{6, 14, 2, 6, 0}};
    int i, j;
    int sum = 0;

    printf("Row total sum is: ");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            sum += a[i][j];
        }
        printf(" %d ", sum);
        sum = 0;
    }
    printf("\n");
    printf("Column total sum is: ");
    for(j = 0; j < 5; j++){
        for(i = 0; i < 5; i++){
            sum += a[i][j];
        }
        printf(" %d ", sum);
        sum = 0;
    }
    printf("\n");
    return 0;
}

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