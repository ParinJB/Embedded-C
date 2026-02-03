#include<stdio.h>

#define message(a, b)\
printf(#a " and " #b ": hello there!\n")

int main(){
    message(viaan, katha);
    return 0;
}