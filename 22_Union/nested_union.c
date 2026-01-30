#include<stdio.h>
#include<string.h>

union student
{
    char name[50];
    union test
    {
        float marks;
    }t1;
};

int main(){
    union student stu;
    
    strcpy(stu.name, "ABCD");
    printf("Name   : %s\n", stu.name);
    stu.t1.marks = 85.64;
    printf("Marks  : %.2f\n", stu.t1.marks);
    return 0;
}