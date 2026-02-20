#include<stdio.h>

union test
{
    unsigned int x : 3;
    unsigned int y : 3;
    int z;
};

int main(){
    union test k;
    k.x = 2;
    k.y = 1;
    k.z = 1;
    printf("x = %d, y = %d, z = %d\n", k.x, k.y, k.z);
    return 0;
}
