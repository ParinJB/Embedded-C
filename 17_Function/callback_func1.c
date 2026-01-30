#include<stdio.h>

void addnum(int a, int b){
    printf("sum is: %d\n", a + b);
}
void calculate(void(*calc)(int, int), int x, int y){
    calc(x, y);
}
int main(){
    calculate(addnum, 9, 10); 
    return 0;
}