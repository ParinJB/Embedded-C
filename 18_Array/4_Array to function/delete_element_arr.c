#include<stdio.h>

void delete(int arr[], int *n, int val);

int main(){
    int arr[10] = {9, 8, 2, 4, 7, 3, 5, 1};
    int pos, n = 8, val;

    printf("Array is: ");

    for(int j = 0; j < n; j++){
        printf("%d ", arr[j]);
    }
    printf("\n");

    printf("enter the value you want to delete: ");
    scanf("%d", &val);
    printf("enter the position you want to change: ");
    scanf("%d", &pos);
    
    delete(arr, &n, val);
  
  	for (int i = 0; i < n; i++)
      	printf("%d ", arr[i]);

    return 0;

}

void delete(int arr[], int *n, int val) {
  
  	int i = 0;        // Find the element
  	while (arr[i] != val){
        i++;
    }
    // Shifting the right side elements one
  	// position towards left
    for (int j = i; j < *n - 1; j++) {
        arr[j] = arr[j + 1];
    }
  
    (*n)--;    // Decrease the size
}