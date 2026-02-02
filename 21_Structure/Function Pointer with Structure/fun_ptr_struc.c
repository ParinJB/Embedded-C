// 1) example
#include<stdio.h>

struct student
{
    char name[100];
    int id;
    int age;
};

void display(struct student *s){
    printf("Name  : %s\n", s -> name);
    printf("ID    : %d\n", s -> id);
    printf("Age   : %d\n", s -> age);
}

#include<stdio.h>

int main(){
    struct student s = {"abc", 128, 20};
    display(&s);
    return 0;
}