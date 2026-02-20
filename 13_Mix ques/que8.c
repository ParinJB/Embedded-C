// another example of #define

#include<stdio.h>

#define STRING "%s\n"
#define STATE "Welcom to the world!!" 

int main(){

    printf(STRING, STATE); 
    return 0;
}