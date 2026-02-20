#include<stdio.h>

struct employee
{
    char name[50];
    union performance
    {
        int exp;
        int age;
    } pf;
};

int main(){
    struct employee emp = {"xyz"};
    emp.pf.exp = 25;
    printf("Experience : %d\n", emp.pf.exp);
    emp.pf.age = 50;
    printf("Age        : %d\n", emp.pf.age);
    return 0;
}
