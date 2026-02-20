//this example shows how lexical analyzer will work with increment operator
#include<stdio.h>

int main(){
    
    int a = 7, b = 9;
    printf("%d\n", a+++b); // because of lexical analyzer expression works like this, (a++ + b)
    return 0;
}