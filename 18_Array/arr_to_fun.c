#include<stdio.h>

float average(int arr[5]);

int main(){
    int arr[] = {9, 7, 4, 8, 2};
    float avg = average(arr);
    printf("average = %f\n", avg);
}

float average(int arr[5]){
    int sum = 0, i;
    for(i = 0; i < 5; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
        sum = sum + arr[i];
    }
    return (float)sum/5;
}