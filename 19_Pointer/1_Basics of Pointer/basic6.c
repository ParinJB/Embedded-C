#include<stdio.h>

int main(){
    int a[] = {1, 2, 3, 4, 5};
    int *p = a;

    a[2] = 7; //replacing the 2nd position value of array
    a[3] = 8; //replacing the 3nd position value of array
    
    printf("a[0] = %i\n", a[0]); //%i will works as same as %d
    printf("a[1] = %i\n", a[1]);
    printf("a[2] = %i\n", a[2]);
    printf("a[3] = %i\n", a[3]);
    printf("a[4] = %i\n", a[4]);
    return 0;
}