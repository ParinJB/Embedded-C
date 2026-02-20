#include<stdio.h>

#pragma pack(1) // with using this we will get 10 bytes as the structure size
// without using this function we will get the original size of the structure which is 16 bytes
struct abc
{
    char a;  // 1 bytes
    int b;   // 4 bytes
    char c;  // 1 bytes
    int d;   // 4 bytes
}var;

int main(){
    printf("size of structure: %zu\n", sizeof(var));
    return 0;
}
