// 10) example of pre decrement op in array using pointer, and also a diff btw --p and --(*p)
#include<stdio.h>

int main(){
    int b[] = {7, 3, 9, 2, 8, 4, 6};
    int *p = &b[5];
    printf("%d\n", *p); // op is 4
    
    //--p;  // this will move down to the one position 
    //printf("%d\n", *p);
    
    --(*p); // this will decrement the number by one 
    printf("%d\n", *p); //op is 3
    
    return 0;
}