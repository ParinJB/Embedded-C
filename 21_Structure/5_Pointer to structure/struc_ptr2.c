// 3) example
#include<stdio.h>

struct student
{
    char name[100];
    int id;
    char branch[50];
};

int main(){
    struct student s1 = {"abc", 128, "ECE"};
    struct student s2 = {"xyz", 118, "ECE"};
    struct student *p = &s1;
    struct student *q = &s2;
    printf("----Students Detail----\n");
    printf("Student 1\n");
    printf("  Name  : %s\n  Id      : %d\n  Branch  : %s\n", p -> name, p -> id, p -> branch);
    printf("Student 2\n");
    printf("  Name  : %s\n  Id      : %d\n  Branch  : %s\n", q -> name, q -> id, q -> branch);
    return 0;
}