#include<stdio.h>

int func(int num){
    int count = 2;
    while (num)
    {
        count++;
        num >>= 2;
    }
    return count;
    
}

int main(){
    int a = func(435);
    printf("%d\n", a);
    return 0;

}