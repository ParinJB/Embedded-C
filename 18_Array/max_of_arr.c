#include<stdio.h>

int main(){
    int arr[] = {10, 18, 9, 7, 25, 4, 14, 12};

    int n = sizeof(arr) / sizeof(arr[0]);
    int result = arr[0];

    for (int i = 0; i < n; i++) {
        if (result < arr[i])
            result = arr[i];
    }
    printf("Array Elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("The maximum value of the array is: %d\n", result);
    return 0;
}