//constant pointer, the value stored at that location can still be changed.
// 1) this is the example of constant pointer, 
//shows that if constant keyword is used then we can not change the value 
#include<stdio.h>

int main(){
    int a = 19, b = 17;
    int *const p1 = &a;
    //p1 = &b;
    printf("%d\n", *p1);
    return 0;
}