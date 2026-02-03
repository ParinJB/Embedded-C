// 1) example of function
#include<stdio.h>

char fun(); // function prototype

int main(){
    char c = fun();
    printf("character is : %c\n", c);

    return 0;
}

char fun(){
    return 'a';
}