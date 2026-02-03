// call by reference means passing the addresses to the other fuctions which are received by the pointers
// when passing addresses to function then we can access those addresses or can change the content available on those addresses
// 1) example of call by reference

#include<stdio.h>

int fun(int *a, int *b){
    *a = 70;
    *b = 80;
}

int main(){
    int x = 90, y = 60;
    fun(&x, &y);
    printf("x = %d and y = %d\n", x, y);
    return 0;
}