// comma operator:- has least precedence

#include<stdio.h>

int main(){

    int x = (3,7,9); // comma operator returns the right most operand in the expression so,
    //bracket has highest precedence than any other operator 
    printf("%d\n", x); // op is 9

    return 0;
}

//example of comma operator inside the paranthesis
#include<stdio.h>

int main(){

    int x = (printf("%s\n", "Hello there!!!"), 5); // comma operator returns the right most operand in the expression so,
    printf("%d\n", x); // output is, hello there!!
                                  // 5 

    return 0;
}

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

//example of comma operator inside the paranthesis
#include<stdio.h>

int main(){
    int v;
    int n;

    n = (v = 15, v+35); // here v=15 and v+35, so 15+35 = 50 = n
    printf("%d\n", n); // op n = 50
   
    return 0;
    
}
