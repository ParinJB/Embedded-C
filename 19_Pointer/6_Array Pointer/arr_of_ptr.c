// 1) example of creating array of pointer
#include<stdio.h>

int main(){
    int x = 9;
    int y = 8;
    int z = 7;

    int *ptr[3];
    
    ptr[0] = &x;
    ptr[1] = &y;
    ptr[2] = &z;

    for(int i = 0; i < 3; i++){
        printf("ptr[%d] = %d\n", i, *ptr[i]);
    }
    return 0;
}