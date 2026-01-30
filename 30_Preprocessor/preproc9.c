#include <stdio.h>

#define Shape(x) switch(x){\
    case 1: printf("1. CIRCLE\n");break;\
    case 2: printf("2. RECTANGLE\n");break;\
    case 3: printf("3. SQUARE\n");break;\
    default: printf("default. LINE\n");\
}

int main() {

    Shape(1);
    Shape(2);
    Shape(3);
    Shape(0);
    return 0;
}
