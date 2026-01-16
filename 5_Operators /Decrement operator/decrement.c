//example shows how lexical analyzer will works with expression which has decrement operator
#include<stdio.h>

int main(){
    
    int a = 10, b = 2;
    printf("%d\n", a---b); // because of lexical analyzer expression works like this, (a-- - b)
    return 0;
}

//example of pre decrement operator
#include<stdio.h>

int main(){
    
    int a = 10, b = 2;
    printf("%d\n", a + --b); //first it will decrement the value of b and then b = 1 and final op = 10 - 1 = 9
    return 0;
}

//this example shows which is the right way to declare the decrement operator
#include<stdio.h>

int main(){
    
    int a = 10, b = 2;
    
    //printf("%d\n", a-----b); // gives error, reason lexical analyzer can not recognize what this expression means
    printf("%d\n", (a--) - (--b)); // this is the right way to declare 
    printf("%d\n", a-- + --b);
    return 0;
}

// post decrement
#include<stdio.h>

int main(){
    
    int a = 7;
    printf("before decrementing : %d\n",a);
    a--;
    printf("after decrementing : %d\n", a);
    return 0;
}

// pre decrement
#include<stdio.h>

int main(){
    
    int a = 7;
    printf("before decrementing: %d\n",a);
    --a;
    printf("after decrementing: %d\n", a);
    return 0;
}