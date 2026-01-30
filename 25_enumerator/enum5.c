#include<stdio.h>

enum level{
    low = 1, medium, high
};
int main(){
    enum level v = high;

    switch (v)
    {
    case 1:
        printf("Low level.\n");
        break;
    case 2:
        printf("Medium level.\n");
        break;
    case 3:
        printf("High level.\n");
        break;
    
    default:
        break;
    }
    return 0;
}