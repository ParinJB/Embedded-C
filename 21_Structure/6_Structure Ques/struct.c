// 1) example
#include<stdio.h>

struct student
{
    char name[50]; 
    int roll_no;
    float marks;
};

int main(){
    struct student s1 = {"abc", 1, 80};
    struct student s2 = {"xyz", 2, 66};
    struct student s3 = {"pqr", 3, 72};
    struct student s4 = {.name = "stu", .roll_no = 4, .marks = 90};

    printf("%s\t%d\t%.2f\n", s1.name, s1.roll_no, s1.marks);
    printf("%s\t%d\t%.2f\n", s2.name, s2.roll_no, s2.marks);
    printf("%s\t%d\t%.2f\n", s3.name, s3.roll_no, s3.marks);
    printf("%s\t%d\t%.2f\n", s4.name, s4.roll_no, s4.marks);
    return 0;

}



