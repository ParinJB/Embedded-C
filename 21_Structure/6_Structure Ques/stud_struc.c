#include<stdio.h>

struct student
{
    char name[100];
    int roll_no;
    int age;
    float marks;
};

int main(){
    struct student s1 = {"xyz", 1, 15, 78.9};
    struct student s2 = {"abc", 2, 14, 88.1};
    struct student s3 = {"pqr", 3, 14, 68.5};
    struct student s4 = {"stu", 4, 15, 90.0};

    printf("%s\t%d\t%d\t%.2f\n", s1.name, s1.roll_no, s1.age, s1.marks);
    printf("%s\t%d\t%d\t%.2f\n", s2.name, s2.roll_no, s2.age, s2.marks);
    printf("%s\t%d\t%d\t%.2f\n", s3.name, s3.roll_no, s3.age, s3.marks);
    printf("%s\t%d\t%d\t%.2f\n", s4.name, s4.roll_no, s4.age, s4.marks);
    return 0;
}