// typedef used to redefine the name of already existing data types
// 1) example
#include<stdio.h>

typedef struct student1
{
    int a;
}s1;  //creates a new type name, type alias

typedef struct student2
{
    int b;
}s2;

int main(){
    s1 x1 = {9};
    s2 x2 = {8};
    printf("%d   %d\n", x1.a, x2.b);
    return 0;
}

