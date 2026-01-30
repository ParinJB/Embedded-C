// 2) example of using static keyword
#include<stdio.h>
#include<stdlib.h>

int increment(){
    
    static int count = 0; // initialize the count to 0
    count = count + 1; // adding the one into the count
    return count;
} 

int main(){
    
    int v1, v2, v3, v4;

    v1 = increment(); //function call
    v2 = increment();
    v3 = increment();
    v4 = increment();
    
    printf("%d\n%d\n%d\n%d\n", v1, v2, v3, v4); //it gives 1, 2, 3, 4 reason we have used the static keyword so it will remember the value between the function calls

    return 0;
}
