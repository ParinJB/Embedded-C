#include<stdio.h>

// Macro Definition
#define limit 10

//undefine macro
//#undef limit

int main(){
    for (int i = 0; i <= limit; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}