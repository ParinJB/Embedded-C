#include<stdio.h>

//function definition
int increment(int a){
    a++;
    printf("Incremented value of a is: %d\n", a); //prints the incremented value which is 8
}

static int a = 7; //global static variable 

int main(){
    
    printf("Value of a is: %d\n", a);  //prints the value 7
    increment(a);
    return 0;
}