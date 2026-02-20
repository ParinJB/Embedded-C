#include<stdio.h>

void change_value(int **ptr1)
{

    int value1 = 79;
    *ptr1 = &value1;
}

int main()
{
    int val = 87;
    int *ptr;
    ptr = &val;
    printf("%d\n", *ptr);

    change_value(&ptr);
    printf("%d\n", *ptr);
    return 0;
}