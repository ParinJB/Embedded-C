//malloc() allocates memory without initialization (contains garbage values)
//Allocates a block of memory
//Runtime memory allocation, Faster than calloc, Flexible

#include<stdio.h>
#include<stdlib.h>

int main(){

    //int *ptr = (int*)malloc(5* sizeof(int));

    int *ptr = (int *)malloc(20); // malloc(20) use 20bytes of memory
    //Does NOT initialize memory to zero

    for(int i = 0; i < 5; i++){
        ptr[i] = i + 1;
    }
    for(int i = 0; i < 5; i++){
        printf("%d ", ptr[i]);
    }
    printf("\n");
    return 0;
}