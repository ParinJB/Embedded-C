#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int *a = (int*) calloc(5, sizeof(int));  //calloc() initializes memory to zero.

    if(a == NULL){
        printf("Memorry allocation fails!\n");
        return 1;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    free(a);
    return 0;
    
}