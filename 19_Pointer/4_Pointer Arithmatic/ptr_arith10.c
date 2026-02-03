// 11) example of post decrement in array using pointer
#include<stdio.h>

int main(){
    int b[] = {7, 3, 9, 2, 8, 4, 6};
    int *p = &b[4];
    printf("%d\n", *p); // op is 8
    
    //p--;  // this will move down to the one position 
    //printf("%d\n", *p);
    
    (*p)--; // this will decrement the number by one 
    printf("%d\n", *p); //op is 7
    
    return 0;
}
