#include<stdio.h>

#define PI 3.14159

int main(){

#ifdef PI 
    printf("PI is defined\n");

#elif defined(aquare)
    printf("Square is defined\n");

#else
    #error "Neither PI nor SQUARE is defined"
#endif
    return 0;
}