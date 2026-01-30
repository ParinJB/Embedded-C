//another example of comma operator
#include<stdio.h>

int main(){

    //int x = 7, 8, 9; //it produce the error
    //printf("%d\n", x); 
    
    int x;
    x = 7, 8, 9; //in this case (=) operator has high precedence as compare to comma(,) so,
    // works as (x = 7), 8, 9
    printf("%d\n", x);  // output is 7

    return 0;
}
