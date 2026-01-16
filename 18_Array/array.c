// array is a collection of data items of similar data type. 
// for example if array is int type then only int data i allowed, no other data types are allowed
// 1) example of array
/*#include<stdio.h>

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

// 2) example of declaring array
#include<stdio.h>

int main(){
    int arr[5];
    int i;
    for(i = 0; i <= 4; i++){
        printf("arr[%d] = %d\n", i,arr[i]);
    }
    return 0;
}

// 3) example of printing value of array
#include<stdio.h>

 int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    printf("arr[3] element is : %d\n", arr[3]);
    
    return 0;
}*/

// 4) example of changing value of array at some point
#include<stdio.h>

int main(){
    int arr[5] = {2, 9, 5, 7, 8};

    arr[2] = 4;
    arr[0] = 1;
    for(int i = 0; i <=4; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}
