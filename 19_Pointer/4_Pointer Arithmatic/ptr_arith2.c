// 3) example
#include<stdio.h>

int main(){
    int arr[] = {8, 25, 45, 12, 6, 79};
    int *ptr = arr; // this means ptr points to the arr[0] location

    printf("value at ptr is: %d\n", *ptr); // prints 8
    ptr = ptr + 3; // this will move to the 3rd location of array
    printf("value at ptr is: %d\n", *ptr); // prints 12
    return 0;
}