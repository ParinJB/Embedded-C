#include<stdio.h>

void insert(int arr[], int *n, int pos, int val);

int main(){
    int arr[10] = {9, 8, 2, 4, 7, 3, 5, 1};
    int pos, n = 8, val;

    printf("Array is: ");

    for(int j = 0; j < n; j++){
        printf("%d ", arr[j]);
    }
    printf("\n");

    printf("enter the value you want to add: ");
    scanf("%d", &val);
    printf("enter the position you want to change: ");
    scanf("%d", &pos);

    insert(arr, &n, pos, val);
    
    for(int i = 0; i <= n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void insert(int arr[], int *n, int pos, int val) {
  
    for (int i = *n; i > pos; i--)   // Shift elements to the right
        arr[i] = arr[i - 1];

    arr[pos] = val;   // Insert val at the specified position

    (*n)++;  // Increase the current size
}