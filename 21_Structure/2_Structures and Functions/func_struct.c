// passing structure as a function

#include<stdio.h>

//define the structure
struct employee
{
    char name[100];
    int age;
    int exp;
};

void display(struct employee e[], int count); // declaration of the display function

int main(){
    struct employee e[2];

    for(int i = 0; i < 2; i++){
        printf("enter name: ");
        scanf("%s", e[i].name);
        printf("enter age: ");
        scanf("%d", &e[i].age);
        printf("enter experience: ");
        scanf("%d", &e[i].exp);
    }
    display(e, 2);
    getchar();

    return 0;
}
void display(struct employee e[], int count){
    for(int i = 0; i < count; i++){
        printf("\nName       : %s\n", e[i].name);
        printf("Age        : %d\n", e[i].age);
        printf("Experience : %d\n", e[i].exp);
    }
}