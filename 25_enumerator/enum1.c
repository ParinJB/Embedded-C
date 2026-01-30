#include<stdio.h>

enum direction{
    EAST, WEST, NORTH, SOUTH
};

int main(){
    enum direction d = NORTH;
    printf("%d\n", d);

    d = 3;
    printf("%d\n", d);
    return 0;
}