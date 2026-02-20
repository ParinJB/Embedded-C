#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
    char *name;
    int id;
    int age;
    float marks;
};

int compare(const void *p, const void *q)
{
    return strcmp(((struct student *)p)->name, ((struct student *)q)->name);
}

int main(){
    int i = 0, n = 5;
    struct student a[n];
    a[0].name = "xyz";
    a[0].id = 1;
    a[0].age = 16;
    a[0].marks = 85;

    a[1].name = "uvw";
    a[1].id = 1;
    a[1].age = 16;
    a[1].marks = 70.5;

    a[2].name = "pqr";
    a[2].id = 2;
    a[2].age = 16;
    a[2].marks = 95;

    a[3].name = "abc";
    a[3].id = 3;
    a[3].age = 16;
    a[3].marks = 65.6;

    a[4].name = "stu";
    a[4].id = 4;
    a[4].age = 16;
    a[4].marks = 75.6;

    printf("Unsorted Student Records:\n");
    for (i = 0; i < n; i++) {
        printf("Name = %s, Id = %d, Age = %d, Marks = %.2f\n", a[i].name, a[i].id, a[i].age, a[i].marks);
    }
    // Sort the structure
    // based on the specified comparator
    qsort(a, n, sizeof(struct student), compare);

    // Print the Sorted Structure
    printf("\n\nStudent Records sorted by Name:\n");
    for (i = 0; i < n; i++) {
        printf("Name = %s, Id = %d, Age = %d, Marks = %.2f\n", a[i].name, a[i].id, a[i].age, a[i].marks);
    }

    return 0;
}