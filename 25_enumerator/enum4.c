#include<stdio.h>

typedef enum direction{
    EAST, WEST, SOUTH, NORTH
}dir;

int main(){
    dir d = WEST;
    printf("%d\n", d);
    return 0;
}