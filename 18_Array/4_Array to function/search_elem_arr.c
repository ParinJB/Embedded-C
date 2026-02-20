#include<stdio.h>

int findElement(int arr[], int n, int k);

int main(){
    int arr[] = {7, 3, 9, 4, 8, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;

    printf("Array is: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("enter the element you want to search: ");
    scanf("%d", &k);

    int position = findElement(arr, n, k);

    if(position == -1){
        printf("Element not found!!\n");
    }else{
        printf("Element is found at this position: %d\n", position);
    }
    return 0;

}

int findElement(int arr[], int n, int k){
    for(int i = 0; i < n; i++)
        if(arr[i] == k)
            return i;
        
    return -1;
}