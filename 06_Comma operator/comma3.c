//example of comma operator inside the paranthesis
#include<stdio.h>

int main(){
    int v;
    int n;

    n = (v = 15, v+35); // here v=15 and v+35, so 15+35 = 50 = n
    printf("%d\n", n); // op n = 50
   
    return 0;
    
}