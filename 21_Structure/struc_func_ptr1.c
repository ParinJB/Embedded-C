#include<stdio.h>

int square(int x){
    return x * x;
}

int cube(int y){
    return y * y * y;
}

// Define the structure containing function pointers
typedef struct 
{
    int (*sq)(int);
    int (*cb)(int);
}funcPtr_t;

int main(){
    funcPtr_t funcs;
    
    // Assign functions to the function pointers in the structure
    funcs.sq = &square;
    funcs.cb = &cube;
    
    int n;
    printf("enter the number: ");
    scanf("%d", &n);

    printf("Square  : %d\n", funcs.sq(n));
    printf("Square  : %d\n", funcs.cb(n));
    return 0;
}
