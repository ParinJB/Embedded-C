#include<stdio.h>

typedef struct student
{
    char name[100];
    int age;
    int roll_no;
    float marks;
}stu_t;

int main(){
    stu_t s1 = {"abc", 18, 1, 85.6};
    stu_t s2 = {"xyz", 17, 2, 65.0};
    stu_t s3 = {"pqr", 19, 3, 80.8};
    stu_t s4 = {"stu", 18, 4, 76.1};

    printf("\t----Student Information----\n");
    printf("Name: %s\tAge: %d\t\tRoll No: %d\tMarks: %.2f\n", s1.name, s1.age, s1.roll_no, s1.marks);
    printf("Name: %s\tAge: %d\t\tRoll No: %d\tMarks: %.2f\n", s2.name, s2.age, s2.roll_no, s2.marks);
    printf("Name: %s\tAge: %d\t\tRoll No: %d\tMarks: %.2f\n", s3.name, s3.age, s3.roll_no, s3.marks);
    printf("Name: %s\tAge: %d\t\tRoll No: %d\tMarks: %.2f\n", s4.name, s4.age, s4.roll_no, s4.marks);

    return 0;
}
