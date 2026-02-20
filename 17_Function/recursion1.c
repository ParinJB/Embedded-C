// 2) example
#include<stdio.h>

int fun(int n){
    if(n == 1){
        return 1;
    }else{
        return 1 + fun(n - 1);
    }
}

int main(){
    int n = 5;
    printf("%d\n", fun(n));
    return 0;
}