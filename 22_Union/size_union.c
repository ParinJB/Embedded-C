#include<stdio.h>

union data_type
{
    int a;
    char b[10];
    float c;
    double d;
};

int main(){
    union data_type data;
    printf("size of integer   : %lu bytes\n", sizeof(data.a));
    printf("size of character : %lu bytes\n", sizeof(data.b));
    printf("size of float     : %lu bytes\n", sizeof(data.c));
    printf("size of double    : %lu bytes\n", sizeof(data.d));
    printf("size of union     : %lu bytes\n", sizeof(data));
    return 0;
}