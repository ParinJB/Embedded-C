#include<stdio.h>

int increment(int x); // function declaration

int main(){
    static int x = 8;  //local static variable
    printf("value of x = %d\n", x);  //prints the value 8 as static variable inside the main()
    increment(x);  //passing static variable to function
    return 0;
}

int increment(int x){
    x++;
    printf("Incremented value of x = %d\n", x);
}