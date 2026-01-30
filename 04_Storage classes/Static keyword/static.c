// 1) example
// example of without using static keyword
#include<stdio.h>
#include<stdlib.h>

int increment(){
    
    int count = 0; // initialize the count to 0
    count = count + 1; // adding the one into the count
    return count;
} 

int main(){
    
    int v1, v2, v3, v4;

    v1 = increment();  //function call
    v2 = increment();
    v3 = increment();
    v4 = increment();
    
    printf("%d\n%d\n%d\n%d\n", v1, v2, v3, v4); // it will gives one(1) for four time always, because we have not used the static keyword

    return 0;
}