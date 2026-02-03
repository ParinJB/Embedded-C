// 5) example
#include<stdio.h>

int main(){
    int arr[] = {8, 25, 45, 12, 6, 79};
    int *ptr = &arr[5]; // this means ptr points to the arr[5] location

    printf("value at ptr is: %d\n", *ptr); // prints 79
    ptr = ptr - 4; // this will move to the 1st location of array
    printf("value at ptr is: %d\n", *ptr); // prints 25
    return 0;

}