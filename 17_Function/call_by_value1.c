// 2) another example of call by value
#include<stdio.h>

int fun(int p, int q){
    p = 10;
    q = 15; 
}

int main(){
    int p = 8, q = 9;
    printf("before calling function p = %d and q = %d\n", p, q);
    fun(p, q);
    printf("after calling function p = %d and q = %d\n", p, q);
    return 0;

}