// 1) example
#include<stdio.h>
#include<string.h>

struct employee
{
    char name[10];
    int exp;
    struct dob
    {
        int d, m, y;
    }d0;
};

int main(){
    struct employee e1 = {"abcd", 3, {21, 9, 2002}};
    printf("Name          : %s\n", e1.name);
    printf("Experience    : %d\n", e1.exp);
    printf("Date of birth : %d-%d-%d\n", e1.d0.d, e1.d0.m, e1.d0.y);
    return 0;
}


