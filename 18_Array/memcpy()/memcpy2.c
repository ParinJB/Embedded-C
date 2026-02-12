#include<stdio.h>
#include<string.h>

typedef struct employee
{
    char name[100];
    int year;
    int age;
    int salary;
}emp_t;

int main(){
    emp_t e1 = {"sumedh", 8, 28, 400000};
    emp_t e2;

    memcpy(&e2, &e1, sizeof(e1)); //copy employee1 into employee2 using memcpy()
    printf("----------After copy employee 1 into employee 2---------- \n");
    printf("employee 1:\nName: %s\tYear: %d\t  Age: %d\t Salary: %d\n\n", e1.name, e1.year, e1.age, e1.salary);
    printf("employee 2:\nName: %s\tYear: %d\t  Age: %d\t Salary: %d\n", e2.name, e2.year, e2.age, e2.salary);

    return 0;
}
