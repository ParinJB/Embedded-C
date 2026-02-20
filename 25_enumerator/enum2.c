#include<stdio.h>

enum en{
    a = 9, b = 7, c
};

int main(){
    enum en n1 = a;
    enum en n2 = b;
    enum en n3 = c;
    printf("n1 = %d, n2 = %d, n3 = %d\n", n1, n2, n3);
    return 0;
}