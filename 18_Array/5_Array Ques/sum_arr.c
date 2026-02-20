#include<stdio.h>

int sum(int arr[], int n);

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int result = sum(arr, n);
  
    printf("%d\n", result);
    return 0;
}

int sum(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    return sum;
}