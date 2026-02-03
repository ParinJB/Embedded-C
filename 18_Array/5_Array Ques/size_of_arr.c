#include<stdio.h>

int main(){
    int arr[] = {9, 5, 8, 3, 7, 2};

    int size = sizeof(arr)/sizeof(arr[0]);
    printf("size of array is = %d\n", size);
    return 0;
}