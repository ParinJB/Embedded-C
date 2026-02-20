#include<stdio.h>

void leftRotateByOne(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}

void leftRotate(int arr[], int d, int n)
{
    for (int i = 0; i < d; i++) {
        leftRotateByOne(arr, n);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = {12, 7, 9, 23, 4, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d;

    printf("Array before the rotation: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("enter the number of rotation: ");
    scanf("%d", &d);
    // Rotate array left by d positions
    leftRotate(arr, d, n);
    printf("\n");
    printf("Array  after rotated by %d positions is: ", d);
    printArray(arr, n);
    return 0;
    
}