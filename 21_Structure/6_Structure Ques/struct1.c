// 2) example
#include<stdio.h>
#include<string.h>

struct child
{
    char name[50];
    int age;
};

struct parent
{
    char name[50];
    int age;
};

int main(){
    struct child a = {"xyz", 5};
    //strcpy(a.name, "xyz");  //we can assign name by using strcpy also 
    //a.age = 5; //another way 
    struct parent b = {"pqr", 30};
    printf("%s\t%d\n", a.name, a.age);
    printf("%s\t%d\n", b.name, b.age);
    return 0;
}