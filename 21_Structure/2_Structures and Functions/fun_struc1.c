// 2) example
#include<stdio.h>

struct student
{
    char name[100];
    int id;
    int age;
};

struct student get_data()
{
    struct student s;
    printf("enter the name: ");
    scanf("%s",s.name);
    printf("enter the id: ");
    scanf("%d",&s.id);
    printf("enter the age: ");
    scanf("%d",&s.age);
    printf("\n");
    return s;
};

int main(){
    struct student s1 = get_data();
    printf("Name  : %s\n", s1.name);
    printf("ID    : %d\n", s1.id);
    printf("Age   : %d\n", s1.age);
    return 0;
}
