#include<stdio.h>
#include<string.h>

void printarray(int arr[], int n){
    for(int i = 0; i < n; i++){
        //arr[i] = i;
        printf("%d ", arr[i]);
    }
}

int main(){
    int n = 10;
    int arr[n];

    memset(arr, 0, n*sizeof(arr[0]));
    printf("Array after memset()\n");
    printarray(arr, n);
    printf("\n");

    return 0;

}