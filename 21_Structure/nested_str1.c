// 2) example
#include<stdio.h>
#include<string.h>

struct date
{
    int d,m,y;
};

struct experience
{
    struct date from;
    struct date to;
};

struct employee
{
    char name[50];
    int age;
    int total_yr_exp;
    struct experience exp;
};

int main(){
    struct employee e1 = {"xyzw", 50, 25};
    struct date d1 = {8, 05, 2000};
    struct date d2 = {18, 05, 2025};
    struct experience exp = {d1,d2};
    e1.exp = exp;
    
    printf("Name       : %s\n", e1.name);
    printf("Age        : %d\n", e1.age);
    printf("Experience : %d\n", e1.total_yr_exp);
    printf("From       : %d-%d-%d\n", e1.exp.from.d, e1.exp.from.m, e1.exp.from.y);
    printf("To         : %d-%d-%d\n", e1.exp.to.d, e1.exp.to.m, e1.exp.to.y);

   return 0;
}