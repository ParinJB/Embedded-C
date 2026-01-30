// 3) example of declaring global variable
#include<stdio.h>
#include<stdlib.h>

int count; // this is global declaration means we can use this throughout the program

int increment(){
    
    count = count + 1;
    return count;
} 

int main(){
    
    int v1, v2, v3, v4;

    v1 = increment();
    v2 = increment();
    v3 = increment();
    v4 = increment();
    
    printf("%d\n%d\n%d\n%d\n", v1, v2, v3, v4);

    return 0;
}
