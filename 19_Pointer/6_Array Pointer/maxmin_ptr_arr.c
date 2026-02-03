#include<stdio.h>

void minmax(int arr[], int l, int *min, int *max);

int main(){
    int a[] = {89, 5, 23, 4, 78, 6, 56, 45, 12, 35, 45, 65};
    int min, max;
    int l = sizeof(a)/sizeof(a[0]);
    minmax(a, l, &min, &max);
    printf("Max vale in the array is: %d\nMin value in the array is: %d\n", max, min);
    return 0;

}

void minmax(int arr[], int l, int *min, int *max){
    *min = *max = arr[0];
    for(int i = 1; i < l; i++){
        if(arr[i] > *max)
        *max = arr[i];
        if(arr[i] < *min)
        *min = arr[i];
    }
}