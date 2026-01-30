// 3) example
#include<stdio.h>

int main()
{
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 1) // print the even values
            continue;
        printf("%d ", i);
    }
    return 0;
}