// 9) example of pre increment op in array using pointer, and also a diff btw ++p and ++(*p)
#include<stdio.h>

int main(){
    int q[] = {7, 3, 9, 2, 8, 4, 6};
    int *p = q;
    printf("%d\n", *p); // op is 7

    //++p; // this will move to the one position 
    //printf("%d\n", *p); //op is 3

    ++(*p); // this will increment the number by one 
    printf("%d\n", *p); //op is 8
    return 0;

}