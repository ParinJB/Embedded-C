// array is a collection of data items of similar data type. 
// for example if array is int type then only int data i allowed, no other data types are allowed
// 1) example of array
#include<stdio.h>

int main(){
    int marks[10] = {60, 85, 90, 70, 65, 55, 64, 72, 88, 78};
    int sum = 0;
    float avg;

    for(int i = 0; i <= 9; i++){
        sum = sum + marks[i];
    }
    avg = (float)sum / 10;
    printf("avarage: %f\n", avg);
    return 0;
}