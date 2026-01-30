#include<stdio.h>

enum direction{
    EAST, WEST, SOUTH, NORTH
};

int main(){
    enum direction d = EAST;
    printf("%ld bytes\n", sizeof(d));
    return 0;
}