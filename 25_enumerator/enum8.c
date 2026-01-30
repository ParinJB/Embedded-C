#include<stdio.h>

enum colors{
    RED, GREEN, BLUE, WHITE, YELLOW, BLACK, PINK, PURPULE
};

int main(){
    enum colors col = BLUE;

    switch (col)
    {
    case RED:
        printf("Color is Red\n");
        break;
    case GREEN:
        printf("Color is Green\n");
        break;
    case BLUE:
        printf("Color is Blue\n");
        break;
    default:
        printf("Color is other than Red, Green, Blue!!\n");
        break;
    }
    return 0;
}